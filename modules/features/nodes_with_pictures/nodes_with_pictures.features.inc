<?php
/**
 * @file
 * nodes_with_pictures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nodes_with_pictures_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nodes_with_pictures_node_info() {
  $items = array(
    'frontpage_slideshow' => array(
      'name' => t('Frontpage slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
