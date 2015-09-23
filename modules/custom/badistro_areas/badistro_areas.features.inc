<?php
/**
 * @file
 * badistro_areas.features.inc
 */

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
