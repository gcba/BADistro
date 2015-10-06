<?php
/**
 * @file
 * badistro_tramites.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badistro_tramites_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function badistro_tramites_node_info() {
  $items = array(
    'tramite' => array(
      'name' => t('Trámite'),
      'base' => 'node_content',
      'description' => t('Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam vulputate felis eget purus tempus egestas. Maecenas tellus turpis, sodales non pulvinar at, rhoncus a turpis. Aliquam libero purus, semper vitae sollicitudin ac, malesuada nec tortor. Nulla facilisi. Etiam elementum, erat vitae egestas elementum, turpis nisi egestas mi, a facilisis nunc lectus id orci. Donec vulputate justo eros, vitae efficitur urna ornare vitae. Mauris gravida mollis mauris sit amet porttitor. Sed in feugiat quam, sed rutrum massa. Quisque augue nibh, accumsan sed fringilla sed, eleifend sit amet leo.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
