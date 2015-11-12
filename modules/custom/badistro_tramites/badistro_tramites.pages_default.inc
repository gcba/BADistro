<?php
/**
 * @file
 * badistro_tramites.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badistro_tramites_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__tramite';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Trámite',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'tramite',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'tramite' => 'tramite',
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
  $display->uuid = 'fcd44812-9926-482b-8052-9ad5d0eb985e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f7d10b2f-19b7-4cc9-9e5b-3e1788511a4d';
    $pane->panel = 'bottom';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '3',
      'tipo_de_listado' => 'relacionados',
      'tipos_de_contenido' => 'tramite',
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
    $pane->uuid = 'f7d10b2f-19b7-4cc9-9e5b-3e1788511a4d';
    $display->content['new-f7d10b2f-19b7-4cc9-9e5b-3e1788511a4d'] = $pane;
    $display->panels['bottom'][0] = 'new-f7d10b2f-19b7-4cc9-9e5b-3e1788511a4d';
    $pane = new stdClass();
    $pane->pid = 'new-05d0db84-7c23-4bbd-8538-fd5ace3e020e';
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
    $pane->uuid = '05d0db84-7c23-4bbd-8538-fd5ace3e020e';
    $display->content['new-05d0db84-7c23-4bbd-8538-fd5ace3e020e'] = $pane;
    $display->panels['column'][0] = 'new-05d0db84-7c23-4bbd-8538-fd5ace3e020e';
    $pane = new stdClass();
    $pane->pid = 'new-8840bfdb-bd2b-44c0-8496-8f5eb96d9a4a';
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
    $pane->uuid = '8840bfdb-bd2b-44c0-8496-8f5eb96d9a4a';
    $display->content['new-8840bfdb-bd2b-44c0-8496-8f5eb96d9a4a'] = $pane;
    $display->panels['column'][1] = 'new-8840bfdb-bd2b-44c0-8496-8f5eb96d9a4a';
    $pane = new stdClass();
    $pane->pid = 'new-a3212390-23c7-43e6-b985-452468db84ce';
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
    $pane->uuid = 'a3212390-23c7-43e6-b985-452468db84ce';
    $display->content['new-a3212390-23c7-43e6-b985-452468db84ce'] = $pane;
    $display->panels['column'][2] = 'new-a3212390-23c7-43e6-b985-452468db84ce';
    $pane = new stdClass();
    $pane->pid = 'new-b94a4014-27fa-431d-94ef-e93a49a75a94';
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
    $pane->uuid = 'b94a4014-27fa-431d-94ef-e93a49a75a94';
    $display->content['new-b94a4014-27fa-431d-94ef-e93a49a75a94'] = $pane;
    $display->panels['column'][3] = 'new-b94a4014-27fa-431d-94ef-e93a49a75a94';
    $pane = new stdClass();
    $pane->pid = 'new-f5d29fab-fc9b-49d4-8161-7e1b71a1265e';
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
    $pane->uuid = 'f5d29fab-fc9b-49d4-8161-7e1b71a1265e';
    $display->content['new-f5d29fab-fc9b-49d4-8161-7e1b71a1265e'] = $pane;
    $display->panels['full'][0] = 'new-f5d29fab-fc9b-49d4-8161-7e1b71a1265e';
    $pane = new stdClass();
    $pane->pid = 'new-e789d418-6ba6-4b9d-bb0c-af277db40124';
    $pane->panel = 'sidebar';
    $pane->type = 'campo';
    $pane->subtype = 'campo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campo' => 'tipo_tramite',
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
    $pane->uuid = 'e789d418-6ba6-4b9d-bb0c-af277db40124';
    $display->content['new-e789d418-6ba6-4b9d-bb0c-af277db40124'] = $pane;
    $display->panels['sidebar'][0] = 'new-e789d418-6ba6-4b9d-bb0c-af277db40124';
    $pane = new stdClass();
    $pane->pid = 'new-781c8a30-68b8-4a67-bd9a-4ede8d4f2e37';
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
    $pane->uuid = '781c8a30-68b8-4a67-bd9a-4ede8d4f2e37';
    $display->content['new-781c8a30-68b8-4a67-bd9a-4ede8d4f2e37'] = $pane;
    $display->panels['sidebar'][1] = 'new-781c8a30-68b8-4a67-bd9a-4ede8d4f2e37';
    $pane = new stdClass();
    $pane->pid = 'new-879ef700-166d-4d6f-b53a-58f41564788a';
    $pane->panel = 'sidebar';
    $pane->type = 'campo';
    $pane->subtype = 'campo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campo' => 'costo',
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
    $pane->uuid = '879ef700-166d-4d6f-b53a-58f41564788a';
    $display->content['new-879ef700-166d-4d6f-b53a-58f41564788a'] = $pane;
    $display->panels['sidebar'][2] = 'new-879ef700-166d-4d6f-b53a-58f41564788a';
    $pane = new stdClass();
    $pane->pid = 'new-6e77b30e-045a-4105-8c05-02544e0aafa2';
    $pane->panel = 'sidebar';
    $pane->type = 'campo';
    $pane->subtype = 'campo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campo' => 'requisitos',
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
    $pane->uuid = '6e77b30e-045a-4105-8c05-02544e0aafa2';
    $display->content['new-6e77b30e-045a-4105-8c05-02544e0aafa2'] = $pane;
    $display->panels['sidebar'][3] = 'new-6e77b30e-045a-4105-8c05-02544e0aafa2';
    $pane = new stdClass();
    $pane->pid = 'new-ea435b5f-8761-4655-82cc-6b1f6cf84ca5';
    $pane->panel = 'sidebar';
    $pane->type = 'campo';
    $pane->subtype = 'campo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campo' => 'links_relacionados',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ea435b5f-8761-4655-82cc-6b1f6cf84ca5';
    $display->content['new-ea435b5f-8761-4655-82cc-6b1f6cf84ca5'] = $pane;
    $display->panels['sidebar'][4] = 'new-ea435b5f-8761-4655-82cc-6b1f6cf84ca5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__tramite'] = $handler;

  return $export;
}
