<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Redes Sociales'),
  'description' => t('Crea un listado de contenido configurable'),
  'category' => t('BA Distro'),
  'render callback' => 'badistro_bloques_redes_sociales_render',
  'edit form' => 'badistro_bloques_redes_sociales_edit_form',
  'admin info' => 'badistro_bloques_redes_sociales_admin_info',
  'defaults' => array(
    'titulo' => t('Redes Sociales'),
    'tipo_widget' => 'share',
    'tipo_widget_timeline' => 'facebook',
    'fb_page_url' => '',
    'fb_altura' => 70,
    'fb_mostrar_post' => TRUE,
    'fb_mostrar_fotos_amigos' => TRUE,
    'fb_ocultar_portada' => FALSE,
    'tw_widget_id' => '',
    'tw_screen_name' => ''
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_redes_sociales_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['titulo'];
    $block->content = $conf['tipo_widget'] == 'share' ? t('Compartir') : t('Línea de tiempo');
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_redes_sociales_edit_form($form, &$form_state) {

  $form['titulo'] = array(
    '#title' => t('Título'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['titulo'],
    '#required' => FALSE,
  );
  $form['tipo_widget'] = array(
    '#title' => t('Tipo de widget'),
    '#type' => 'radios',
    '#default_value' => $form_state['conf']['tipo_widget'],
    '#required' => TRUE,
    '#options' => array(
      'share' => t('Compartir'),
      'timeline' => t('Línea de tiempo')
    ),
    '#description' => t('Tipo de widget'),
  );
  $form['tipo_widget_timeline'] = array(
    '#title' => t('Tipo de widget'),
    '#type' => 'radios',
    '#default_value' => $form_state['conf']['tipo_widget_timeline'],
    '#required' => TRUE,
    '#options' => array(
      'facebook' => t('Facebook'),
      'twitter' => t('Twitter')
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="tipo_widget"]' => array('value' => 'timeline'),
      ),
    ),
  );
  $form['fb_timeline'] = array(
    '#type' => 'fieldset',
    '#attributes' => array(),
    '#title' => t('Facebook'),
    '#states' => array(
      'visible' => array(
        ':input[name="tipo_widget_timeline"]' => array('value' => 'facebook'),
        ':input[name="tipo_widget"]' => array('value' => 'timeline'),
      ),
    ),
  );
  $form['tw_timeline'] = array(
    '#type' => 'fieldset',
    '#attributes' => array(),
    '#title' => t('Twitter'),
    '#states' => array(
      'visible' => array(
        ':input[name="tipo_widget_timeline"]' => array('value' => 'twitter'),
        ':input[name="tipo_widget"]' => array('value' => 'timeline'),
      ),
    ),
  );
  $form['tw_timeline']['tw_widget_id'] = array(
    '#title' => t('Widget ID'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['tw_widget_id'],
    '#description' => t('Debes crear un ' . l('widget desde tu cuenta', 'https://twitter.com/settings/widgets/')),
  );
  $form['tw_timeline']['tw_screen_name'] = array(
    '#title' => t('Usuario'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['tw_screen_name'],
    '#description' => t('Debes crear un ' . l('widget desde tu cuenta', 'https://twitter.com/settings/widgets/')),
  );
  $form['fb_timeline']['fb_page_url'] = array(
    '#title' => t('URL de la página en Facebook'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['fb_page_url'],
  );
  $form['fb_timeline']['fb_altura'] = array(
    '#title' => t('Altura'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['fb_altura'],
    '#description' => t('Mín. 70'),
  );
  $form['fb_timeline']['fb_mostrar_post'] = array(
    '#type' => 'checkbox',
    '#title' => t('Mostrar posts'),
    '#default_value' => $form_state['conf']['fb_mostrar_post'],
    '#description' => t('Default: TRUE'),
  );
  $form['fb_timeline']['fb_ocultar_portada'] = array(
    '#type' => 'checkbox',
    '#title' => t('Ocultar imagen de portada'),
    '#default_value' => $form_state['conf']['fb_ocultar_portada'],
    '#description' => t('Default: FALSE'),
  );
  $form['fb_timeline']['fb_mostrar_fotos_amigos'] = array(
    '#type' => 'checkbox',
    '#title' => t('Mostrar foto de amigos'),
    '#default_value' => $form_state['conf']['fb_mostrar_fotos_amigos'],
    '#description' => t('Default: TRUE'),
  );
  
  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_redes_sociales_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
function badistro_bloques_redes_sociales_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass;
  $block->title = '';
  $block->content = $conf['tipo_widget'] == 'share' ? theme('badistro_bloques_redes_sociales_compartir', array('titulo' => $conf['titulo'])) : theme('badistro_bloques_redes_sociales_' . $conf['tipo_widget'] . '_' . $conf['tipo_widget_timeline'], array('configuraciones' => $conf));
  drupal_add_js(drupal_get_path('module', 'badistro_bloques') . '/js/fb-sdk.js');
  drupal_add_js(drupal_get_path('module', 'badistro_bloques') . '/js/tw.js');
  return $block;
}