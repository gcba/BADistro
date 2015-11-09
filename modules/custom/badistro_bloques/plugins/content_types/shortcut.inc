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
    'referencia' => array(),
    'link' => ''
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_shortcut_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : $conf['titulo'];
    $block->content = $conf['texto'];
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
      'glyphicon-music' => t('Música'),
      'glyphicon-info-sign' => t('Información'),
      'glyphicon-fire' => t('Fuego'),
      'glyphicon-tree-deciduous' => t('Árbol'),
      'glyphicon-gift' => t('Regalo'),
      'glyphicon-ok-sign' => t('OK'),
      'glyphicon-remove-sign' => t('Error'),
      'glyphicon-search' => t('Buscar'),
      'glyphicon-lock' => t('Candado'),
      'glyphicon-cog' => t('Configuración'),
      'glyphicon-plus' => t('Más'),
      'glyphicon-minus' => t('Menos'),
      'glyphicon-envelope' => t('Correo'),
      'glyphicon-share-alt' => t('Compartir'),
      'glyphicon-chevron-right' => t('Flecha Derecha'),
      'glyphicon-chevron-left' => t('Flecha Izquierda'),
      'glyphicon-question-sign' => t('Signo de interrogación'),
      'glyphicon-calendar' => t('Calendario'),
      'glyphicon-certificate' => t('Certificado'),
      'glyphicon-link' => t('Link'),
      'glyphicon-briefcase' => t('Maletín'),
      'glyphicon-send' => t('Enviar'),
      'glyphicon-earphone' => t('Teléfono'),
      'glyphicon-alert' => t('Alerta'),
      'glyphicon-piggy-bank' => t('Ahorro'),
      'glyphicon-education' => t('Educación'),
      'glyphicon-grain' => t('Campo'),
      'glyphicon-globe' => t('Planeta'),
      'glyphicon-shopping-cart' => t('Carrito de compra'),
      'glyphicon-comment' => t('Diálogo'),
      'glyphicon-gift' => t('Regalo'),
      'glyphicon-map-marker' => t('Marcador'),
      'glyphicon-flag' => t('Bandera'),
      'glyphicon-list-alt' => t('Listado'),
      'glyphicon-cloud' => t('Nube'),
      'glyphicon-time' => t('Reloj'),
      'glyphicon-camera' => t('Cámara'),
      'glyphicon-leaf' => t('Hoja'),
      'glyphicon-warning-sign' => t('Peligro'),
      'glyphicon-usd' => t('Dinero'),
      'glyphicon-flash' => t('Rayo'),
      'glyphicon-transfer' => t('Transferencia'),
    ),
  );
  $form['referencia'] = array(
    '#type' => 'entityreference',
    '#title' => t('Página, trámite o noticia'),
    '#required' => FALSE,
    '#era_entity_type' => 'node',  // Mandatory.
    '#era_bundles' => array(), // Optional (Any bundle by default).
    '#era_cardinality' => 1,       // Optional (1 By default).
    '#states' => array(
      'invisible' => array(
        ':input[name="link"]' => array('filled' => TRUE),
      ),
    ),
    '#description' => t('Usar este campo para referenciar contenido'),
  );
  $form['link'] = array(
    '#type' => 'textfield',
    '#title' => t('Link'),
    '#required' => FALSE,
    '#states' => array(
      'invisible' => array(
        ':input[name="referencia"]' => array('filled' => TRUE),
      ),
    ),
    '#description' => t('Usar este campo para crear un link personalizado'),
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
  $block->content = !empty($conf['referencia']) || !empty($conf['link']) ? l(
    theme(
      'badistro_bloques_shortcut',
      array(
        'color' => $conf['color_fondo'],
        'icono' => $conf['icono'],
        'texto' => $conf['texto'],
        'titulo' => $conf['titulo']
      )
    ),
    !empty($conf['referencia']) ? 'node/' . $conf['referencia']['entity_id'] : $conf['link'],
    array(
      'html' => TRUE,
      'attributes' => array(
        'class' => array(
          'col-sm-6',
          'col-md-3'
        )
      ),
    )
  ) : theme(
      'badistro_bloques_shortcut',
      array(
        'color' => $conf['color_fondo'],
        'icono' => $conf['icono'],
        'texto' => $conf['texto'],
        'titulo' => $conf['titulo']
      )
  );
  return $block;
}