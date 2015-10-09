<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Listado de links'),
  'description' => t('Crea un listado de links'),
  'category' => t('BA Distro'),
  'render callback' => 'badistro_bloques_listado_links_render',
  'edit form' => 'badistro_bloques_listado_links_edit_form',
  'admin info' => 'badistro_bloques_listado_links_admin_info',
  'defaults' => array(
    'cantidad_links' => 5,
    'tipo_de_listado' => 'recientes',
    'tipos_de_contenido' => 'noticia',
    'formato_de_listado' => 'solo_texto',
    'titulo' => t('Listado')
  )
);

/**
* 'admin info' callback for panel pane.
*/
function badistro_bloques_listado_links_admin_info($subtype, $conf, $contexts) {
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
function badistro_bloques_listado_links_edit_form($form, &$form_state) {

  foreach (node_type_get_types() as $item) {
    $tiposDeContenido[$item->type] = $item->name;
  }
  $form['titulo'] = array(
    '#title' => t('Título'),
    '#type' => 'textfield',
    '#default_value' => $form_state['conf']['titulo'],
    '#required' => TRUE,
  );
  $form['tipos_de_contenido'] = array(
    '#title' => t('Tipo de contenido'),
    '#type' => 'radios',
    '#default_value' => $form_state['conf']['tipos_de_contenido'],
    '#required' => TRUE,
    '#options' => $tiposDeContenido,
    '#description' => t('Tipo de contenido a listar'),
  );
  $form['tipo_de_listado'] = array(
    '#type' => 'select',
    '#title' => t('Tipo de listado'),
    '#options' => array(
      'recientes' => t('Recientes'),
      'mas_visitados' => t('Más visitados'),
    ),
    '#default_value' => $form_state['conf']['tipo_de_listado'],
    '#description' => t('Cada tipo de listado tiene un comportamiento diferente'),
  );
  $form['formato_de_listado'] = array(
    '#type' => 'select',
    '#title' => t('Formato de listado'),
    '#options' => array(
      'solo_texto' => t('Sólo texto'),
      'con_imagen' => t('Imagen y texto'),
    ),
    '#default_value' => $form_state['conf']['formato_de_listado'],
    '#description' => t('Cada tipo de listado tiene un comportamiento diferente'),
  );
  $form['cantidad_links'] = array(
    '#type' => 'textfield',
    '#title' => t('Cantidad'),
    '#default_value' => $form_state['conf']['cantidad_links'],
    '#element_validate' => array('element_validate_integer_positive'), 
    '#description' => t('Cantidad máxima de items del listado'),
  );

  return $form;
}

/**
* The submit form stores the data in $conf.
*/
function badistro_bloques_listado_links_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
function badistro_bloques_listado_links_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $view = views_get_view('listado_de_contenido');
  $view->set_display('default');
  $view->set_arguments(array($conf["tipos_de_contenido"]));
  $view->set_items_per_page($conf["cantidad_links"]);
  $view->execute();
  foreach ($view->result as $key => $item) {
    $links[] = crearLink($item);
  }
  $theme = $conf["formato_de_listado"] == 'solo_texto' ? 'badistro_bloques_listado_links' : 'badistro_bloques_listado_links_con_imagen';
  $block->content = theme($theme, array("titulo" => $conf["titulo"],'links' => $links));
  return $block;
}
function crearLink($item){
  $link = new stdClass();
  $link->id = $item->nid;
  $link->titulo = $item->node_title;
  $link->texto = field_get_items('node', $item->_field_data["nid"]["entity"], 'body', NULL);
  $link->texto = $link->texto[0]["summary"];
  $link->imagen = field_get_items('node', $item->_field_data["nid"]["entity"], 'field_featured_image', NULL);
  $link->imagen = theme_image_style(array('style_name' => 'list', 'path' => $link->imagen[0]["uri"], 'width' => '', 'height' => ''));
  $link->imagen = l($link->imagen, 'node/' . $link->id, array('html' => TRUE));
  return $link;
}