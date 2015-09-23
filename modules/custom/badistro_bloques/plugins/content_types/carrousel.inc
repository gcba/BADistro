<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Carrousel'),
  'description' => t('Muestra la imagen destacada.'),
  'category' => t('BA Distro'),
  'render callback' => 'badistro_bloques_carrousel_render',
  'edit form' => 'badistro_bloques_carrousel_edit_form',
  'admin info' => 'badistro_bloques_carrousel_admin_info',
  'defaults' => array(
    'texto' =>   'hola',
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_carrousel_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Alerta');
    $block->content = t('Carrousel tipo @tipo.', array('@tipo' => $conf['tipo']));
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_carrousel_edit_form($form, &$form_state) {

  $form['texto'] = array(
      '#title' => t('Contenido'),
      '#type' => 'text_format',
      '#format' => 'full_html',
      '#default_value' => $form_state['conf']['texto'],
      '#required' => TRUE,
    );

  $form['referenced_entity_id'] = array(
    '#type' => 'entityreference',
    '#title' => t('The Reference'),
    '#era_entity_type' => array(),
    '#era_bundles' => array('area', 'noticia'),
    '#era_cardinality' => 1,
  );

  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_carrousel_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
function badistro_bloques_carrousel_render($subtype, $conf, $panel_args, $context = NULL){
  
  if(arg(0) == 'node' && is_numeric(arg(1))){
    
    $node = node_load(arg(1));

    $imagen = field_get_items('node', $node, 'field_featured_image', $langcode = NULL);
    $imagen = isset($imagen[0]) ? theme_image_style(array('style_name' => 'large', 'path' => $imagen[0]["uri"])) : NULL;

    $block = new stdClass();
    $block->title = '';
    $block->content = $imagen;
  }

  return $block;
}