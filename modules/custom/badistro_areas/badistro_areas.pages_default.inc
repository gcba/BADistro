<?php
/**
 * @file
 * badistro_areas.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badistro_areas_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__area';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -97;
  $handler->conf = array(
    'title' => 'Área',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'area',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'area' => 'area',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tres-columnas';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'body-middle' => NULL,
      'full' => NULL,
      'body-left' => NULL,
      'body-right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '511fcd63-a745-4c73-af8e-0dbc7679c8e5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-324fd34a-e1cb-402e-90b2-758bcf29e4fe';
    $pane->panel = 'body-left';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '10',
      'tipo_de_listado' => 'relacionados',
      'tipos_de_contenido' => 'area',
      'formato_de_listado' => 'badistro_bloques_listado',
      'titulo' => 'Áreas',
      'icono' => 'glyphicon-paperclip',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'vertical',
      'todos_los_items' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '324fd34a-e1cb-402e-90b2-758bcf29e4fe';
    $display->content['new-324fd34a-e1cb-402e-90b2-758bcf29e4fe'] = $pane;
    $display->panels['body-left'][0] = 'new-324fd34a-e1cb-402e-90b2-758bcf29e4fe';
    $pane = new stdClass();
    $pane->pid = 'new-f0b7b9d7-f34c-4887-ac46-1b27d1efc673';
    $pane->panel = 'body-middle';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '10',
      'tipo_de_listado' => 'relacionados',
      'tipos_de_contenido' => 'noticia',
      'formato_de_listado' => 'badistro_bloques_listado_con_imagen',
      'titulo' => 'Noticias',
      'icono' => 'glyphicon-paperclip',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'vertical',
      'todos_los_items' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f0b7b9d7-f34c-4887-ac46-1b27d1efc673';
    $display->content['new-f0b7b9d7-f34c-4887-ac46-1b27d1efc673'] = $pane;
    $display->panels['body-middle'][0] = 'new-f0b7b9d7-f34c-4887-ac46-1b27d1efc673';
    $pane = new stdClass();
    $pane->pid = 'new-8da57751-580e-42a4-aada-0cb70a470b31';
    $pane->panel = 'body-right';
    $pane->type = 'redes_sociales';
    $pane->subtype = 'redes_sociales';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'titulo' => 'Redes Sociales',
      'tipo_widget' => 'timeline',
      'tipo_widget_timeline' => 'facebook',
      'fb_page_url' => 'https://www.facebook.com/facebook',
      'fb_altura' => '500',
      'fb_mostrar_post' => 1,
      'fb_mostrar_fotos_amigos' => 1,
      'fb_ocultar_portada' => 0,
      'tw_widget_id' => '',
      'tw_screen_name' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8da57751-580e-42a4-aada-0cb70a470b31';
    $display->content['new-8da57751-580e-42a4-aada-0cb70a470b31'] = $pane;
    $display->panels['body-right'][0] = 'new-8da57751-580e-42a4-aada-0cb70a470b31';
    $pane = new stdClass();
    $pane->pid = 'new-59fa82a7-1a86-402e-9fdf-50568db273dc';
    $pane->panel = 'full';
    $pane->type = 'imagen_destacada';
    $pane->subtype = 'imagen_destacada';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'imagen_destacada' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '59fa82a7-1a86-402e-9fdf-50568db273dc';
    $display->content['new-59fa82a7-1a86-402e-9fdf-50568db273dc'] = $pane;
    $display->panels['full'][0] = 'new-59fa82a7-1a86-402e-9fdf-50568db273dc';
    $pane = new stdClass();
    $pane->pid = 'new-d84f2e6f-93fc-4521-9a79-9382140003b7';
    $pane->panel = 'top';
    $pane->type = 'texto';
    $pane->subtype = 'texto';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'destacado' => 0,
      'texto' => array(
        'value' => '',
        'format' => 'full_html',
      ),
      'sobreescribir' => 0,
      'cuerpo_o_resumen' => 'body',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd84f2e6f-93fc-4521-9a79-9382140003b7';
    $display->content['new-d84f2e6f-93fc-4521-9a79-9382140003b7'] = $pane;
    $display->panels['top'][0] = 'new-d84f2e6f-93fc-4521-9a79-9382140003b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__area'] = $handler;

  return $export;
}
