<?php
/**
 * @file
 * badistro_paginas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badistro_paginas_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function badistro_paginas_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Página'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.
Usar <em>páginas</em> para contenido estático'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
