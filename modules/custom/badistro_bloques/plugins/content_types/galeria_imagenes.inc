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

  if(arg(0) == 'node' && is_numeric(arg(1))){
    $node = node_load(arg(1));
    if(isset($node->field_imagenes) && !empty($node->field_imagenes)){
      foreach (field_get_items('node', $node, 'field_imagenes', NULL) as $key => $imagen) {
        $imagenes[$key]['thumb'] = theme_image_style(
          array(
            'style_name' => 'gallery_thumb',
            'path' => $imagen['uri'],
            'width' => '',
            'height' => '',
            'attributes' => array(
              'data-toggle' => "modal",
              'data-target' => ".badistro-bloques-galeria-imagenes-" . $key
            )
          )
        );
        $imagenes[$key]['original'] = theme_image_style(
          array(
            'style_name' => 'gallery_large',
            'path' => $imagen['uri'],
            'width' => '',
            'height' => '',
            'attributes' => array()
          )
        );
        $imagenes[$key]['render'] = theme(
          'badistro_bloques_galeria_imagenes_' . $conf['tipo'] . '_item',
          array(
            "thumb" => $imagenes[$key]['thumb'],
            "original" => $imagenes[$key]['original'],
            "key" => $key
          )
        );
      }
      $block->content = theme(
        'badistro_bloques_galeria_imagenes_' . $conf['tipo'],
        array('imagenes' => $imagenes)
      );
    } else {
      $block->content = '';
    }
  } else {
    $block->content = '';
  }
  return $block;
}