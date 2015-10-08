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
    'tipos_de_contenido' => array(),
    'cantidad_de_slides' => 3
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_carrousel_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Carrousel');
    $block->content = t('Carrousel');
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_carrousel_edit_form($form, &$form_state) {
  foreach (node_type_get_types() as $item) {
    $tiposDeContenido[$item->type] = $item->name;
  }
  $form['tipos_de_contenido'] = array(
    '#title' => t('Tipos de contenido'),
    '#type' => 'checkboxes',
    '#default_value' => $form_state['conf']['tipos_de_contenido'],
    '#required' => TRUE,
    '#options' => $tiposDeContenido,
  );
  $form['cantidad_de_slides'] = array(
    '#type' => 'textfield',
    '#title' => t('Cantidad de slides'),
    '#default_value' => $form_state['conf']['cantidad_de_slides'],
    '#element_validate' => array('element_validate_integer_positive'), 
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
  $block = new stdClass();
  $block->title = '';
  $view = views_get_view('listado_de_contenido');
  $view->set_items_per_page($conf["cantidad_de_slides"]);
  $view->execute();
  foreach ($view->result as $key => $item) {
    $slides[] = crearSlide($item);
  }
  $block->content = theme('badistro_bloques_carrousel', array('slides' => $slides));
  return $block;
}
function crearSlide($item){
  $slide = new stdClass();
  $slide->id = $item->nid;
  $slide->titulo = $item->node_title;
  $slide->caption = field_get_items('node', $item->_field_data["nid"]["entity"], 'body', NULL);
  $slide->caption = $slide->caption[0]["summary"];
  $slide->imagen = field_get_items('node', $item->_field_data["nid"]["entity"], 'field_featured_image', NULL);
  $slide->imagen = theme_image_style(array('style_name' => 'wide', 'path' => $slide->imagen[0]["uri"], 'width' => '', 'height' => ''));
  $slide->imagen = l($slide->imagen, 'node/' . $slide->id, array('html' => TRUE));
  return $slide;
}