<?php
/**
 * @file
 * badistro_noticias.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badistro_noticias_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__noticia';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Noticia',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'noticia',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'noticia' => 'noticia',
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
  $display->layout = 'columna-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'body-middle' => NULL,
      'full' => NULL,
      'sidebar' => NULL,
      'column' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9b08ac59-0b49-4eef-b48e-537b3daf63fd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5d2e524c-de2b-44db-a456-c574a947fe5f';
    $pane->panel = 'bottom';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '3',
      'tipo_de_listado' => 'relacionados',
      'tipos_de_contenido' => 'noticia',
      'formato_de_listado' => 'badistro_bloques_listado_con_imagen',
      'titulo' => 'Relacionados',
      'icono' => 'glyphicon-paperclip',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'horizontal',
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
    $pane->uuid = '5d2e524c-de2b-44db-a456-c574a947fe5f';
    $display->content['new-5d2e524c-de2b-44db-a456-c574a947fe5f'] = $pane;
    $display->panels['bottom'][0] = 'new-5d2e524c-de2b-44db-a456-c574a947fe5f';
    $pane = new stdClass();
    $pane->pid = 'new-128a2be5-6013-4305-9678-dae1e2509981';
    $pane->panel = 'column';
    $pane->type = 'redes_sociales';
    $pane->subtype = 'redes_sociales';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'titulo' => 'Compartir',
      'tipo_widget' => 'share',
      'tipo_widget_timeline' => 'facebook',
      'fb_page_url' => '',
      'fb_altura' => '70',
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
    $pane->uuid = '128a2be5-6013-4305-9678-dae1e2509981';
    $display->content['new-128a2be5-6013-4305-9678-dae1e2509981'] = $pane;
    $display->panels['column'][0] = 'new-128a2be5-6013-4305-9678-dae1e2509981';
    $pane = new stdClass();
    $pane->pid = 'new-6ab7cb1c-2020-4daa-9f87-9bbdf2057168';
    $pane->panel = 'column';
    $pane->type = 'galeria_imagenes';
    $pane->subtype = 'galeria_imagenes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tipo' => 'min',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6ab7cb1c-2020-4daa-9f87-9bbdf2057168';
    $display->content['new-6ab7cb1c-2020-4daa-9f87-9bbdf2057168'] = $pane;
    $display->panels['column'][1] = 'new-6ab7cb1c-2020-4daa-9f87-9bbdf2057168';
    $pane = new stdClass();
    $pane->pid = 'new-53998f52-43b1-43ec-abdc-306b77fff3ab';
    $pane->panel = 'column';
    $pane->type = 'texto';
    $pane->subtype = 'texto';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'destacado' => 1,
      'texto' => array(
        'value' => '',
        'format' => 'full_html',
      ),
      'sobreescribir' => 0,
      'cuerpo_o_resumen' => 'summary',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '53998f52-43b1-43ec-abdc-306b77fff3ab';
    $display->content['new-53998f52-43b1-43ec-abdc-306b77fff3ab'] = $pane;
    $display->panels['column'][2] = 'new-53998f52-43b1-43ec-abdc-306b77fff3ab';
    $pane = new stdClass();
    $pane->pid = 'new-fb873453-8e55-4ebe-9dd0-107dbf2f9020';
    $pane->panel = 'column';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fb873453-8e55-4ebe-9dd0-107dbf2f9020';
    $display->content['new-fb873453-8e55-4ebe-9dd0-107dbf2f9020'] = $pane;
    $display->panels['column'][3] = 'new-fb873453-8e55-4ebe-9dd0-107dbf2f9020';
    $pane = new stdClass();
    $pane->pid = 'new-ead89239-91d0-40d6-a616-8d861a115815';
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
    $pane->uuid = 'ead89239-91d0-40d6-a616-8d861a115815';
    $display->content['new-ead89239-91d0-40d6-a616-8d861a115815'] = $pane;
    $display->panels['full'][0] = 'new-ead89239-91d0-40d6-a616-8d861a115815';
    $pane = new stdClass();
    $pane->pid = 'new-10f78775-fe97-4134-a89e-1aebba65257d';
    $pane->panel = 'sidebar';
    $pane->type = 'campo';
    $pane->subtype = 'campo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campo' => 'categoria_noticia',
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
    $pane->uuid = '10f78775-fe97-4134-a89e-1aebba65257d';
    $display->content['new-10f78775-fe97-4134-a89e-1aebba65257d'] = $pane;
    $display->panels['sidebar'][0] = 'new-10f78775-fe97-4134-a89e-1aebba65257d';
    $pane = new stdClass();
    $pane->pid = 'new-c2d607cf-d2a2-464f-893f-9de173ebde0e';
    $pane->panel = 'sidebar';
    $pane->type = 'campo';
    $pane->subtype = 'campo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campo' => 'tags',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c2d607cf-d2a2-464f-893f-9de173ebde0e';
    $display->content['new-c2d607cf-d2a2-464f-893f-9de173ebde0e'] = $pane;
    $display->panels['sidebar'][1] = 'new-c2d607cf-d2a2-464f-893f-9de173ebde0e';
    $pane = new stdClass();
    $pane->pid = 'new-c16c953f-5f22-4d9c-89d0-bf53b764ece8';
    $pane->panel = 'sidebar';
    $pane->type = 'campo';
    $pane->subtype = 'campo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campo' => 'paginas_relacionadas',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c16c953f-5f22-4d9c-89d0-bf53b764ece8';
    $display->content['new-c16c953f-5f22-4d9c-89d0-bf53b764ece8'] = $pane;
    $display->panels['sidebar'][2] = 'new-c16c953f-5f22-4d9c-89d0-bf53b764ece8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__noticia'] = $handler;

  return $export;
}
