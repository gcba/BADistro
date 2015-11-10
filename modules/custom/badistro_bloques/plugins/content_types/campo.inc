<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Campo'),
  'description' => t('Renderiza un campo del nodo'),
  'category' => t('BA Distro'),
  'render callback' => 'badistro_bloques_campo_render',
  'edit form' => 'badistro_bloques_campo_edit_form',
  'admin info' => 'badistro_bloques_campo_admin_info',
  'defaults' => array(
    'campo' => '',
  ),
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_campo_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : $conf['campo'];
    $block->content = $conf['campo'];
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_campo_edit_form($form, &$form_state) {

  $form['campo'] = array(
    '#type' => 'select',
    '#title' => t('Campo'),
    '#required' => TRUE,
    '#options' => array(
      'costo' => t('Costo de trámite'),
      'requisitos' => t('Requisitos de trámite'),
      'tipo_tramite' => t('Tipo de trámite'),
      'categoria_noticia' => t('Categoría de noticia'),
      'siglas_area' => t('Siglas de Área'),
      'tags' => t('Tags'),
      'links_relacionados' => t('Links relacionados'),
      'paginas_relacionadas' => t('Páginas relacionadas'),
    ),
    '#default_value' => $form_state['conf']['campo'],
    '#description' => t('Campo a mostrar'),
  );
  
  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_campo_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

function badistro_bloques_campo_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('badistro_bloques_campo_' . $conf['campo'], array('campo' => obtenerCampo(node_load(arg(1)), $conf['campo'])));
  return $block;
}