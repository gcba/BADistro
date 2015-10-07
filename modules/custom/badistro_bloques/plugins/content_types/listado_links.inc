<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Listado de links'),
  'description' => t('Crea un listado de links'),
  'category' => t('BA Distro'),
  'render callback' => 'badistro_bloques_listado_links_render',
  //'edit form' => 'badistro_bloques_listado_links_edit_form',
  'admin info' => 'badistro_bloques_listado_links_admin_info',
  'defaults' => array()
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_listado_links_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Listado');
    $block->content = t('Listado');
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_listado_links_edit_form($form, &$form_state) {
  
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_listado_links_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
function badistro_bloques_listado_links_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('badistro_bloques_listado_links');
  return $block;
}