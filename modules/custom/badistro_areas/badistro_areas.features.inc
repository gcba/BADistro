<?php
/**
 * @file
 * badistro_areas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badistro_areas_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function badistro_areas_node_info() {
  $items = array(
    'area' => array(
      'name' => t('Área'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
