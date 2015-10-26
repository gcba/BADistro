<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Texto'),
  'description' => t('Crea un párrafo.'),
  'category' => t('BA Distro'),
  'edit form' => 'badistro_bloques_texto_edit_form',
  'render callback' => 'badistro_bloques_texto_render',
  'admin info' => 'badistro_bloques_texto_admin_info',
  'defaults' => array(
    'destacado' => 0,
    'texto' => NULL,
    'sobreescribir' => 0
  )
);

function badistro_bloques_texto_edit_form($form, &$form_state){

  $form['destacado'] = array(
    '#type' => 'checkbox', 
    '#title' => t('Texto destacado'),
  );
  $form['sobreescribir'] = array(
    '#title' => t('¿Personalizar texto?'),
    '#type' => 'checkbox',
    '#default_value' => $form_state['conf']['sobreescribir'],
  );
  $form['texto'] = array(
    '#title' => t('Contenido'),
    '#type' => 'text_format',
    '#format' => 'full_html',
    '#default_value' => $form_state['conf']['texto']['value'],
    '#required' => FALSE,
    '#states' => array(
      'disabled' => array(
        ':input[name="sobreescribir"]' => array('checked' => FALSE),
      ),
      'required' => array(
        ':input[name="sobreescribir"]' => array('checked' => TRUE),
      )
    ),
  );

  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_texto_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

function badistro_bloques_texto_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $node = nodoDisponible($conf['sobreescribir']) ? node_load(arg(1)) : '';
  $texto = field_get_items('node', $node, 'body', NULL);
  $block->content = theme(
    'badistro_bloques_texto',
    array(
      'tag' => theme('html_tag', array('element' => array('#tag' => 'p', '#attributes' => array('class' => $conf['destacado'] ? 'lead' : ''), '#value' => nodoDisponible($conf['sobreescribir']) ? $texto[0]['summary'] : $conf['texto'],
      ),
    )
  )
    )
  );
  return $block;
}

function badistro_bloques_texto_admin_info($subtype, $conf, $contexts){
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Título');
    $block->content = t('@texto.', array('@texto' => $conf['texto']));
    return $block;
  }
}
function nodoDisponible($sobreescribir){
  return (!$sobreescribir && arg(0) == 'node' && is_numeric(arg(1)));
}
