<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Imagen destacada'),
  'description' => t('Muestra la imagen destacada.'),
  'category' => t('BA Distro'),
  'render callback' => 'badistro_bloques_imagen_destacada_render',
  'admin info' => 'badistro_bloques_imagen_destacada_admin_info',
  'defaults' => array(
    'imagen_destacada' =>   NULL,
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_imagen_destacada_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Imagen destacada');
    $block->content = t('Imagen destacada.');
    return $block;
  }
}
function badistro_bloques_imagen_destacada_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  if(arg(0) == 'node' && is_numeric(arg(1))){
    $node = node_load(arg(1));
    if(isset($node->field_featured_image) && !empty($node->field_featured_image)){
      $imagen = field_get_items('node', $node, 'field_featured_image', NULL);
      $texto = field_get_items('node', $node, 'body', NULL);
      $block->content = theme(
        'badistro_bloques_imagen_destacada', array(
          'imagen' => theme_image_style(
            array(
              'style_name' => 'imagen_destacada',
              'path' => $imagen[0]['uri'],
              'width' => '',
              'height' => '',
              'attributes' => array()
            )
        ),
        'titulo' => $node->title,
        'texto' => $texto[0]['summary']
      )
    );
  } else {
      $block->content = '';
    }
  } else {
    $block->content = '';
  }

  return $block;
}