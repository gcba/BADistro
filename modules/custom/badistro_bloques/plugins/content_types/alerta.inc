<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Alerta'),
  'description' => t('Muetra una alerta.'),
  'category' => t('BA Distro'),
  'edit form' => 'badistro_bloques_alerta_edit_form',
  'render callback' => 'badistro_bloques_alerta_render',
  'admin info' => 'badistro_bloques_alerta_admin_info',
  'defaults' => array(
    'tipo' => 'success',
    'texto' => NULL,
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_alerta_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Alerta');
    $block->content = t('Alerta tipo @tipo.', array('@tipo' => $conf['tipo']));
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_alerta_edit_form($form, &$form_state) {

  $form['tipo'] = array(
    '#title' => t('Tipo de alerta'),
    '#type' => 'select',
    '#default_value' => $form_state['conf']['tipo'],
    '#options' => array(
      'success' => t('Success'),
      'info' => t('Info'),
      'warning' => t('Warning'),
      'danger' => t('Danger'),
      'default' => t('Default'),
    ),
  );

  $form['texto'] = array(
    '#title' => t('Contenido'),
    '#type' => 'text_format',
    '#format' => 'full_html',
    '#default_value' => $form_state['conf']['texto']['value'],
    '#required' => TRUE,
  );

  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_alerta_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
function badistro_bloques_alerta_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('badistro_bloques_alerta', array('titulo' => $conf["override_title"] ? $conf["override_title_text"] : '', 'tipo' => $conf['tipo'], 'texto' => $conf['texto']['value']));
  return $block;
}