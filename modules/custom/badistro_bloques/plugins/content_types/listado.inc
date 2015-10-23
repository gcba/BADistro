<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Listado'),
  'description' => t('Crea un listado de contenido configurable'),
  'category' => t('BA Distro'),
  'render callback' => 'badistro_bloques_listado_render',
  'edit form' => 'badistro_bloques_listado_edit_form',
  'admin info' => 'badistro_bloques_listado_admin_info',
  'defaults' => array(
    'cantidad_links' => 5,
    'tipo_de_listado' => 'recientes',
    'tipos_de_contenido' => 'noticia',
    'formato_de_listado' => 'solo_texto',
    'titulo' => t('Listado'),
    'icono' => 'glyphicon-paperclip',
    'tipo_noticia' => 'all',
    'tipo_tramite' => 'all',
    'orientacion_de_listado' => 'vertical'
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_listado_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Listado');
    $block->content = t('Listado');
    return $block;
  }
}

/**
* 'Edit form' callback for the content type.
*/
function badistro_bloques_listado_edit_form($form, &$form_state) {

  foreach (node_type_get_types() as $item) {
    $tiposDeContenido[$item->type] = $item->name;
  }
  $form['titulo'] = array(
    '#title' => t('Título'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['titulo'],
    '#required' => TRUE,
  );
  $form['cantidad_links'] = array(
    '#type' => 'textfield',
    '#title' => t('Cantidad'),
    '#default_value' => $form_state['conf']['cantidad_links'],
    '#element_validate' => array('element_validate_integer_positive'), 
    '#description' => t('Cantidad máxima de items del listado'),
  );
  $form['tipos_de_contenido'] = array(
    '#title' => t('Tipo de contenido'),
    '#type' => 'radios',
    '#default_value' => $form_state['conf']['tipos_de_contenido'],
    '#required' => TRUE,
    '#options' => $tiposDeContenido,
    '#description' => t('Tipo de contenido a listar'),
  );
  $form['tipo_tramite'] = array(
    '#type' => 'entityreference',
    '#title' => t('Tipo de Trámites'),
    '#description' => t('Filtrar por tipo de trámite. Dejar vacío para listar todos los trámites'),
    '#required' => FALSE,
    '#states' => array(
      'visible' => array(
        ':input[name="tipos_de_contenido"]' => array('value' => 'tramite'),
      ),
    ),
    '#era_entity_type' => 'taxonomy_term',  // Mandatory.
    '#era_bundles' => array('tramites'), // Optional (Any bundle by default).
    '#era_cardinality' => 2,       // Optional (1 By default).
  );
  $form['tipo_noticia'] = array(
    '#type' => 'entityreference',
    '#title' => t('Categoría de Noticias'),
    '#description' => t('Filtrar por categoría de noticias. Dejar vacío para listar todos los noticias'),
    '#required' => FALSE,
    '#states' => array(
      'visible' => array(
        ':input[name="tipos_de_contenido"]' => array('value' => 'noticia'),
      ),
    ),
    '#era_entity_type' => 'taxonomy_term',  // Mandatory.
    '#era_bundles' => array('noticias'), // Optional (Any bundle by default).
    '#era_cardinality' => 1,       // Optional (1 By default).
  );
  $form['tipo_de_listado'] = array(
    '#type' => 'select',
    '#title' => t('Tipo de listado'),
    '#disabled' => TRUE,
    '#options' => array(
      'recientes' => t('Recientes'),
    ),
    '#default_value' => $form_state['conf']['tipo_de_listado'],
    '#description' => t('Cada tipo de listado tiene un comportamiento diferente'),
  );
  $form['formato_de_listado'] = array(
    '#type' => 'select',
    '#title' => t('Formato de listado'),
    '#options' => array(
      'badistro_bloques_listado' => t('Sólo texto'),
      'badistro_bloques_listado_con_imagen' => t('Imagen y texto'),
      'badistro_bloques_listado_destacado' => t('Destacado'),
    ),
    '#default_value' => $form_state['conf']['formato_de_listado'],
    '#description' => t('Cada tipo de listado tiene un comportamiento diferente'),
  );
  $form['orientacion_de_listado'] = array(
    '#title' => t('Orientación'),
    '#type' => 'radios',
    '#default_value' => $form_state['conf']['orientacion_de_listado'],
    '#required' => TRUE,
    '#options' => array(
      'vertical' => t("Vertical"),
      'horizontal' => t("Horizontal")
    ),
    '#description' => t('Tipo de contenido a listar'),
  );
  $form['icono'] = array(
    '#title' => t('Ícono'),
    '#type' => 'select',
    '#default_value' => $form_state['conf']['icono'],
    '#options' => array(
      'glyphicon-home' => t('Casa'),
      'glyphicon-paperclip' => t('Clip'),
      'glyphicon-star' => t('Estrella'),
      'glyphicon-heart' => t('Corazón'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="formato_de_listado"]' => array('value' => 'badistro_bloques_listado_destacado'),
      ),
    ),
  );

  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_listado_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
function badistro_bloques_listado_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $view = views_get_view('listado_de_contenido');
  $view->set_display('default');
  $view->set_arguments(
    array(
      $conf["tipos_de_contenido"],
      isset($conf['tipo_noticia']) && isset($conf['tipo_noticia']['entity_id']) ? $conf['tipo_noticia']['entity_id'] : 'all',
      isset($conf['tipo_tramite']) && isset($conf['tipo_tramite']['entity_id']) ? $conf['tipo_tramite']['entity_id'] : 'all',
    )
  );
  $view->set_items_per_page($conf["cantidad_links"]);
  $view->execute();
  foreach ($view->result as $key => $item) {
    $links[] = crearLink($item, $conf["formato_de_listado"] . '_' . $conf["orientacion_de_listado"]);
  }
  $block->content = theme($conf["formato_de_listado"] . '_' . $conf["orientacion_de_listado"], array("titulo" => $conf["titulo"], 'links' => $links));
  return $block;
}
function crearLink($item, $theme){
  $link = new stdClass();
  $link->id = $item->nid;
  $link->texto = field_get_items('node', $item->_field_data["nid"]["entity"], 'body', NULL);
  $link->texto = $link->texto[0]["summary"];
  $link->imagen = field_get_items('node', $item->_field_data["nid"]["entity"], 'field_featured_image', NULL);
  $link->imagen = theme_image_style(array('style_name' => 'list', 'path' => $link->imagen[0]["uri"], 'width' => '', 'height' => '', 'attributes' => array('class' => array('media-object', 'img-rounded'))));
  $link->type = $item->_field_data["nid"]["entity"]->type;
  $link->category = isset($item->_field_data["nid"]["entity"]) && $link->type == 'tramite' ? field_get_items('node', $item->_field_data["nid"]["entity"], 'field_tramite_tipo', NULL) : NULL;
  $link->category = isset($link->category) ? taxonomy_term_load($link->category[0]["target_id"]) : NULL;
  $link->category = isset($link->category) ? l($link->category->name, 'taxonomy/term/' . $link->category->tid) : NULL;

  return l(
    theme(
      $theme . '_item',
      array(
        'titulo' => $item->node_title,
        'texto' => views_trim_text(
          array(
            'max_length' => 90,
            'ellipsis' => TRUE,
            'word_boundary' => TRUE,
            'html' => TRUE,
          ),
          $link->texto
        ),
        'imagen' => $link->imagen,
      )
    ),
    'node/' . $item->nid,
    array(
      'html' => TRUE,
      'attributes' => array(
        'class' => array(),
      )
    )
  );
}