<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Título'),
  'description' => t('Crea un encabezado h1-h6.'),
  'category' => t('BA Distro'),
  'edit form' => 'badistro_bloques_titulo_edit_form',
  'render callback' => 'badistro_bloques_titulo_render',
  'admin info' => 'badistro_bloques_titulo_admin_info',
  'defaults' => array(
    'tag' => 'success',
    'texto' => NULL,
    'sobreescribir_titulo' => 0
  )
);

function badistro_bloques_titulo_edit_form($form, &$form_state){
  $form['tag'] = array(
    '#title' => t('Tag'),
    '#type' => 'select',
    '#default_value' => $form_state['conf']['tag'],
    '#options' => array(
      'h1' => t('H1'),
      'h2' => t('H2'),
      'h3' => t('H3'),
      'h4' => t('H4'),
      'h5' => t('H5'),
      'h6' => t('H6'),
    ),
  );

  $form['sobreescribir_titulo'] = array(
    '#title' => t('Sobreescribir título'),
    '#type' => 'checkbox',
    '#default_value' => $form_state['conf']['sobreescribir_titulo'],
  );

  $form['texto'] = array(
    '#title' => t('Contenido'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['texto'],
    '#states' => array(
      'disabled' => array(
        ':input[name="sobreescribir_titulo"]' => array('checked' => FALSE),
      ),
      'required' => array(
        ':input[name="sobreescribir_titulo"]' => array('checked' => TRUE),
      )
    ),
  );

  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_titulo_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

function badistro_bloques_titulo_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $node = tituloDeNodoDisponible($conf['sobreescribir_titulo']) ? node_load(arg(1)) : '';
  $block->content = theme(
    'badistro_bloques_titulo',
    array(
      'tag' => theme('html_tag', array('element' => array('#tag' => $conf['tag'], '#attributes' => array('class' => 'activities-sidbar'), '#value' => tituloDeNodoDisponible($conf['sobreescribir_titulo']) ? $node->title : $conf['texto'],
          ),
        )
      )
    )
  );
  return $block;
}

function tituloDeNodoDisponible($sobreescribir){
  return (!$sobreescribir && arg(0) == 'node' && is_numeric(arg(1)));
}

function badistro_bloques_titulo_admin_info($subtype, $conf, $contexts){
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Título');
    $block->content = t('@texto.', array('@texto' => $conf['texto']));
    return $block;
  }
}
