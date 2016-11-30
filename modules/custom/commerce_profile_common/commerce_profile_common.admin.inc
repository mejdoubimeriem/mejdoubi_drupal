<?php

/**
 * Implements hook_form().
 * @param array $form.
 * @param array $form_state.
 * 
 * @return array $form.
 */
function commerce_profile_common_admin_form($form, &$form_state) {
  $form['intro'] = array(
    '#markup' => t('Use this form to change image sizes from gallery:'),
  );
  $screens = commerce_profile_common_get_screen_types();
  foreach ($screens as $screen => $array) {
    foreach ($array as $size => $value) {
      $name = $screen . '_' . $size . '_image';
      $form[$name] = array(
        '#type' => 'textfield',
        '#title' => t("Slideshow $screen $size image weight"),
        '#required' => TRUE,
        '#element_validate' => array('commerce_profile_common_validate_integers_positive'),
        '#default_value' => variable_get($name, $value),    
      );
    }
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Apply'),
  );
  return $form;
}

/**
 * Validate form element.
 *
 * @return array $screens.
 */
function commerce_profile_common_get_screen_types() {
  $screens = array(
    'desktop' => array(
      'big' => 668,
      'small' => 168,
    ),
    'landscape_tablet' => array(
      'big' => 538,
      'small' => 138,
    ),
    'portrait_tablet' => array(
      'big' => 536,
      'small' => 138,
    ),
    'smalltouch' => array(
      'big' => 298,
      'small' => 138,
    ),
  );
  return $screens;
}

/**
 * Validate form element.
 * @param array $element.
 * @param array $form_state.
 */
function commerce_profile_common_validate_integers_positive($element, &$form_state) {
  $value = $element['#value'];
  if ($value !== '' && (!is_numeric($value) || intval($value) != $value )) {
    form_error($element, t('%name must be a positive integer', array('%name' => $element['#title'])));
  }
}

/**
 * Admin form submit.
 * @param array $form.
 * @param array $form_state.
 */
function commerce_profile_common_admin_form_submit($form, &$form_state) {
  foreach ($form_state['values'] as $key => $value) {
    if (strpos($key, '_image')) {
      variable_set($key, $value);
    }
  }
  drupal_set_message(t('Your configuration has been saved.'));
}
