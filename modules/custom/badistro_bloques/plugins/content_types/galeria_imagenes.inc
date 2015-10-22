<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Galería de Imágenes'),
  'description' => t('Muestra las imágenes de una noticia y/o trámite.'),
  'category' => t('BA Distro'),
  'render callback' => 'badistro_bloques_galeria_imagenes_render',
  'edit form' => 'badistro_bloques_galeria_imagenes_edit_form',
  'admin info' => 'badistro_bloques_galeria_imagenes_admin_info',
  'defaults' => array(
    'tipo' => 'min'
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_galeria_imagenes_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Galería de imágenes');
    $block->content = t('Galería de imágenes');
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_galeria_imagenes_edit_form($form, &$form_state) {
  
  $form['tipo'] = array(
    '#type' => 'select',
    '#title' => t('Tipo'),
    '#default_value' => $form_state['conf']['tipo'],
    '#options' => array(
      'min' => t('Miniatura'),
    ),
  );

  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_galeria_imagenes_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
function badistro_bloques_galeria_imagenes_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $imagenes = [];
  $block->content = theme('badistro_bloques_galeria_imagenes', array('imagenes' => $imagenes));
  return $block;
}