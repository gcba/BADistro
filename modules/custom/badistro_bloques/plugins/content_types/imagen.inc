<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Imagen'),
  'description' => t('Crea una imagen.'),
  'category' => t('BA Distro'),
  'edit form' => 'badistro_bloques_imagen_edit_form',
  'render callback' => 'badistro_bloques_imagen_render',
  'admin info' => 'badistro_bloques_imagen_admin_info',
  'defaults' => array(
    'formato' => '',
    'imagen' => '',
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_imagen_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Alerta');
    $block->content = t('Imagen formato @formato.', array('@tipo' => $conf['formato']));
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_imagen_edit_form($form, &$form_state) {

  $form['imagen'] = array(
    '#title' => t('Imagen'),
    '#type' => 'managed_file',
    '#description' => t('The uploaded image will be displayed on this page using the image style choosen below.'),
    '#default_value' => variable_get('imagen_example', ''),
    '#upload_location' => 'public://',
    '#suffix' => '<div></div>'
  );

  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_imagen_edit_form_submit($form, &$form_state) {
    // Load the file via file.fid.
  $file = file_load($form_state['values']['imagen']);
  var_dump($file);
  // Change status to permanent.
  $file->status = FILE_STATUS_PERMANENT;
  // Save.
  file_save($file);
  // Record that the module (in this example, user module) is using the file. 
  file_usage_add($file, 'badistro_bloques', 'badistro_bloques_imagen', $file->uid);  

  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
function badistro_bloques_imagen_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $block->content = 'hola';
  return $block;
}