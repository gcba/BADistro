<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Shortcut'),
  'description' => t('Crea un acceso directo'),
  'category' => t('BA Distro'),
  'render callback' => 'badistro_bloques_shortcut_render',
  'edit form' => 'badistro_bloques_shortcut_edit_form',
  'admin info' => 'badistro_bloques_shortcut_admin_info',
  'defaults' => array(
    'color_fondo' => 'shortcut-azul',
    'icono' => 'glyphicon-home',
    'titulo' => '',
    'texto' => '',
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_shortcut_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Shortcut');
    $block->content = t('Shortcut');
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_shortcut_edit_form($form, &$form_state) {
  $form['titulo'] = array(
    '#title' => t('Título'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['titulo'],
    '#required' => TRUE,
  );
  $form['texto'] = array(
    '#title' => t('Texto'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['texto'],
    '#required' => FALSE,
  );
  $form['color_fondo'] = array(
    '#title' => t('Color de fondo'),
    '#type' => 'select',
    '#default_value' => $form_state['conf']['color_fondo'],
    '#options' => array(
      'shortcut-naranja' => t('Naranja'),
      'shortcut-azul' => t('Azul'),
      'shortcut-rojo' => t('Rojo'),
      'shortcut-verde' => t('Verde')
    ),
  );
  $form['icono'] = array(
    '#title' => t('Color de fondo'),
    '#type' => 'select',
    '#default_value' => $form_state['conf']['icono'],
    '#options' => array(
      'glyphicon-home' => t('Casa'),
      'glyphicon-paperclip' => t('Clip'),
      'glyphicon-star' => t('Estrella'),
      'glyphicon-heart' => t('Corazón'),
    ),
  );
  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_shortcut_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
function badistro_bloques_shortcut_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('badistro_bloques_shortcut', array('color' => $conf['color_fondo'], 'icono' => $conf['icono'], 'texto' => $conf['texto'], 'titulo' => $conf['titulo']));
  return $block;
}