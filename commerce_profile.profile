<?php

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'Commerce profile';
    // Add new option at configure site form. If checkbox will be selected, we
    // enable custom module, which sends usage statistics.
    $form['additional_settings'] = array(
      '#type' => 'fieldset',
      '#title' => st('Additional settings'),
      '#collapsible' => FALSE,
    );

    $form['additional_settings']['send_message'] = array(
      '#type' => 'checkbox',
      '#title' => 'Send info to developers team',
      '#description' => st('You can send us the anonymous data about your site (URL and site-name). If you have any problems it can help us fix them.'),
      '#default_value' => TRUE,
    );

    $form['#submit'][] = 'system_form_install_configure_form_custom_submit';
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $profile_name => $profile_data) {
      $form['profile'][$profile_name]['#value'] = 'commerce_profile';
    }
  }
}

/**
 * Implements hook_install_tasks().
 *
 * @param array $install_state
 * An array of information about the current installation state.
 *
 * 'display_name': step name, visible for user. NOTE: function t() is not
 * yet avaliable on install process, so you should use st() * instead.
 *
 * 'display': TRUE or FALSE. In case of no display_name or FALSE value,
 *  step will be hidden from steps list.
 *
 * 'type': There are 3 values possible:
 * - "Normal" could return HTML content or NULL if step completed. Set to
 *   default.
 * - "Batch" means that the step should be executed via Batch API.
 * - "Form" is used when the step requires to be presented as a form. We
 *   used Form in our example, because we need to receive some * info from user.
 *
 * 'run': Can be INSTALL_TASK_RUN_IF_REACHED, INSTALL_TASK_RUN_IF_NOT_COMPLETED
 * or INSTALL_TASK_SKIP.
 * - INSTALL_TASK_RUN_IF_REACHED - means that the task should be executed on
 *   each step oo the install process. Mostly used by core functions.
 * - INSTALL_TASK_RUN_IF_NOT_COMPLETED - run task once during install.
 *   Set to default.
 * - INSTALL_TASK_SKIP - skip task. Can be useful, if previous steps info tells
 *   us that the task not needed and should be skipped. *   function - a
 *   function to execute when step is reached. If not set, machine_name function
 *   will be called.
 */
function commerce_profile_install_tasks($install_state) {
  $tasks = array();
  $tasks['commerce_profile_public_files_copy'] = array(
    'display' => FALSE,
  );
    $tasks['commerce_profile_enable_custom_modules'] = array(
    'display' => FALSE,
  );
  $tasks['commerce_profile_simplenews_turning'] = array(
    'display' => FALSE,
  );
  $tasks['commerce_profile_enable_block_settings_module'] = array(
    'display' => FALSE,
  );
  $tasks['commerce_profile_enable_paypal_payment_method'] = array(
    'display' => FALSE,
  );
  return $tasks;
}

/**
 * Our custom task.
 * Copy public files for default theme.
 *
 * @param array $install_state: An array of information about the current
 * installation state.
 */
function commerce_profile_public_files_copy($install_state) {
  $source = 'profiles/commerce_profile/public/adaptivetheme/';
  $res = 'public://adaptivetheme/';
  commerce_profile_recurse_copy($source, $res);
  $image_source = 'profiles/commerce_profile/images/icon_commerce_profile.png';
  $image_res = 'public://icon_commerce_profile.png';
  copy($image_source, $image_res);
  $image_source = 'profiles/commerce_profile/images/blog-1.jpg';
  $image_res = 'public://blog-1.jpg';
  copy($image_source, $image_res);
  $image_source = 'profiles/commerce_profile/images/plastic-cards.png';
  $image_res = 'public://plastic-cards.png';
  copy($image_source, $image_res);
  $image_source = 'profiles/commerce_profile/images/avatar_default.jpg';
  $image_res = 'public://avatar_default.jpg';
  copy($image_source, $image_res);
}

/**
 * Recursive copy.
 *
 * @param string $src.
 * - Source folder with files.
 * @param string $dst.
 * - Destination folder.
 */
function commerce_profile_recurse_copy($src, $dst) {
  $dir = opendir($src);
  @mkdir($dst);
  while (FALSE !== ($file = readdir($dir))) {
    if (($file != '.') && ($file != '..')) {
      if (is_dir($src . '/' . $file)) {
        commerce_profile_recurse_copy($src . '/' . $file, $dst . '/' . $file);
      }
      else {
        copy($src . '/' . $file, $dst . '/' . $file);
      }
    }
  }
  closedir($dir);
}

/**
 * Enable features.
 */
function commerce_profile_enable_custom_modules() {
  if (!module_exists('custom_nodes')) {
    $modules[] = ('custom_nodes');
  }
  if (!module_exists('menu_links')) {
    $modules[] = ('menu_links');
  }
  module_enable($modules);
}

/**
 * Simplenews turning.
 */
function commerce_profile_simplenews_turning() {
  $values = array(
    'tid' => 1,
    'name' => 'NEWSLETTER SUBSCRIBE',
    'description' => '',
    'weight' => 0,
    'new_account' => 'none',
    'opt_inout' => 'double',
    'block' => 1,
    'format' => 'plain',
    'priority' => 3,
    'receipt' => 0,
    'from_name' => 'Commerce profile',
    'from_address' => 'ecommerce@post.com',
    'email_subject' => '[[simplenews-category:name]] [node:title]',
    'hyperlinks' => 0,
    'submit' => 'Save',
    'delete' => 'Delete',
    'op' => 'Save',
  );
  $category = (object) $values;
  $term = new stdClass();
  $term->tid = $values['tid'];
  $term->vocabulary_machine_name = 'newsletter';
  $term->vid = taxonomy_vocabulary_machine_name_load('newsletter')->vid;
  $term->name = $values['name'];
  $term->description = $values['description'];
  $term->weight = $values['weight'];
  taxonomy_term_save($term);
  simplenews_category_save($category);
  variable_set('simplenews_block_r_1' , 0);
  variable_set('simplenews_block_l_1' , 0);
  variable_set('simplenews_block_m_1' , '');
}

/**
 * Enable block settings.
 */
function commerce_profile_enable_block_settings_module() {
  if (!module_exists('block_settings')) {
    $modules[] = ('block_settings');
  }
  module_enable($modules);
}

/**
 * Enable paypal payment method.
 */
function commerce_profile_enable_paypal_payment_method() {
  $rule = rules_config_load('commerce_payment_paypal_wps');
  $rule->active = 1;
  $rule->save();
}

/**
 * Submit callback.
 *
 * @see system_form_install_configure_form_alter()
 */
function system_form_install_configure_form_custom_submit($form, &$form_state) {
  if ($form_state['values']['send_message'] == 1) {
    module_enable(array('profile_stat_sender'), FALSE);
  }
}