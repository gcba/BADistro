<?php
/**
 * @file
 * badistro_cck.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badistro_cck_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_node_overview__pagina_principal';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'node_overview';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Página principal',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'pagina_principal',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tres-columnas';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'middle_bottom_left' => NULL,
      'middle_bottom_center' => NULL,
      'middle_bottom_right' => NULL,
      'bottom' => NULL,
      'body-left' => NULL,
      'body-middle' => NULL,
      'body-right' => NULL,
      'full' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b01ee2ee-1607-42af-b2f0-3496da56272b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5f8c7cc-38ab-4203-b653-e9508256a5b0';
    $pane->panel = 'body-left';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '5',
      'tipo_de_listado' => 'recientes',
      'tipos_de_contenido' => 'noticia',
      'formato_de_listado' => 'badistro_bloques_listado',
      'titulo' => 'Listado',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'icono' => 'glyphicon-home',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'vertical',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5f8c7cc-38ab-4203-b653-e9508256a5b0';
    $display->content['new-b5f8c7cc-38ab-4203-b653-e9508256a5b0'] = $pane;
    $display->panels['body-left'][0] = 'new-b5f8c7cc-38ab-4203-b653-e9508256a5b0';
    $pane = new stdClass();
    $pane->pid = 'new-3fbe33b2-c1e5-4897-a1b6-44750154bfb0';
    $pane->panel = 'body-middle';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '5',
      'tipo_de_listado' => 'recientes',
      'tipos_de_contenido' => 'tramite',
      'formato_de_listado' => 'badistro_bloques_listado_con_imagen',
      'titulo' => 'Los más vistos',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'icono' => 'glyphicon-home',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'vertical',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3fbe33b2-c1e5-4897-a1b6-44750154bfb0';
    $display->content['new-3fbe33b2-c1e5-4897-a1b6-44750154bfb0'] = $pane;
    $display->panels['body-middle'][0] = 'new-3fbe33b2-c1e5-4897-a1b6-44750154bfb0';
    $pane = new stdClass();
    $pane->pid = 'new-6d9c5cb3-0dd4-4f28-b97b-29310906b5ff';
    $pane->panel = 'body-right';
    $pane->type = 'imagen';
    $pane->subtype = 'imagen';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'formato' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'imagen' => '10',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6d9c5cb3-0dd4-4f28-b97b-29310906b5ff';
    $display->content['new-6d9c5cb3-0dd4-4f28-b97b-29310906b5ff'] = $pane;
    $display->panels['body-right'][0] = 'new-6d9c5cb3-0dd4-4f28-b97b-29310906b5ff';
    $pane = new stdClass();
    $pane->pid = 'new-24e2eacb-5917-4543-ad69-4f47b32757bf';
    $pane->panel = 'full';
    $pane->type = 'carrousel';
    $pane->subtype = 'carrousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'texto' => array(
        'value' => 'hola',
        'format' => 'full_html',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'tipos_de_contenido' => array(
        'area' => 'area',
        'tramite' => 'tramite',
        'noticia' => 0,
        'page' => 0,
      ),
      'cantidad_de_slides' => '3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '24e2eacb-5917-4543-ad69-4f47b32757bf';
    $display->content['new-24e2eacb-5917-4543-ad69-4f47b32757bf'] = $pane;
    $display->panels['full'][0] = 'new-24e2eacb-5917-4543-ad69-4f47b32757bf';
    $pane = new stdClass();
    $pane->pid = 'new-d2ed8865-65db-46bd-87ea-15add9d86fce';
    $pane->panel = 'top';
    $pane->type = 'separador';
    $pane->subtype = 'separador';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd2ed8865-65db-46bd-87ea-15add9d86fce';
    $display->content['new-d2ed8865-65db-46bd-87ea-15add9d86fce'] = $pane;
    $display->panels['top'][0] = 'new-d2ed8865-65db-46bd-87ea-15add9d86fce';
    $pane = new stdClass();
    $pane->pid = 'new-b66fb012-c5df-4283-93c5-6f123fe06d8b';
    $pane->panel = 'top';
    $pane->type = 'alerta';
    $pane->subtype = 'alerta';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tipo' => 'danger',
      'texto' => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam',
        'format' => 'full_html',
      ),
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
    $pane->uuid = 'b66fb012-c5df-4283-93c5-6f123fe06d8b';
    $display->content['new-b66fb012-c5df-4283-93c5-6f123fe06d8b'] = $pane;
    $display->panels['top'][1] = 'new-b66fb012-c5df-4283-93c5-6f123fe06d8b';
    $pane = new stdClass();
    $pane->pid = 'new-55a013a7-62b2-492d-a124-d1e9ee22d4dc';
    $pane->panel = 'top';
    $pane->type = 'alerta';
    $pane->subtype = 'alerta';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tipo' => 'success',
      'texto' => array(
        'value' => 'Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo',
        'format' => 'full_html',
      ),
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
    $pane->uuid = '55a013a7-62b2-492d-a124-d1e9ee22d4dc';
    $display->content['new-55a013a7-62b2-492d-a124-d1e9ee22d4dc'] = $pane;
    $display->panels['top'][2] = 'new-55a013a7-62b2-492d-a124-d1e9ee22d4dc';
    $pane = new stdClass();
    $pane->pid = 'new-d3a5e284-cc4c-42f5-82f1-1d8cabddd45b';
    $pane->panel = 'top';
    $pane->type = 'alerta';
    $pane->subtype = 'alerta';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tipo' => 'info',
      'texto' => array(
        'value' => 'Sunt in culpa qui officia deserunt mollit anim id est laborum.',
        'format' => 'full_html',
      ),
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
    $pane->uuid = 'd3a5e284-cc4c-42f5-82f1-1d8cabddd45b';
    $display->content['new-d3a5e284-cc4c-42f5-82f1-1d8cabddd45b'] = $pane;
    $display->panels['top'][3] = 'new-d3a5e284-cc4c-42f5-82f1-1d8cabddd45b';
    $pane = new stdClass();
    $pane->pid = 'new-154b9166-be78-45e6-8fb2-f0fa65bf56a7';
    $pane->panel = 'top';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tipos_de_contenido' => array(
        'area' => 'area',
        'noticia' => 0,
        'page' => 0,
        'tramite' => 0,
      ),
      'cantidad_de_slides' => '3',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'color_fondo' => 'shortcut-rojo',
      'icono' => 'glyphicon-paperclip',
      'titulo' => 'Sunt in culpa',
      'texto' => 'lorem ipsumo bla blah',
      'referencia' => array(
        'entity_id' => '3',
        'entity_label' => 'Gluten-free pop-up next level est',
        'entity_type' => 'node',
        'entity_bundle' => 'noticia',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '154b9166-be78-45e6-8fb2-f0fa65bf56a7';
    $display->content['new-154b9166-be78-45e6-8fb2-f0fa65bf56a7'] = $pane;
    $display->panels['top'][4] = 'new-154b9166-be78-45e6-8fb2-f0fa65bf56a7';
    $pane = new stdClass();
    $pane->pid = 'new-d90b4d9c-e8d8-4624-a949-d07a8a4e24da';
    $pane->panel = 'top';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-azul',
      'icono' => 'glyphicon-home',
      'titulo' => 'Anim id est laborum.',
      'texto' => 'Qui officia deserunt mollit anim id est laborum.',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'referencia' => array(
        'entity_id' => '2',
        'entity_label' => 'Fusce convallis elit fringilla convallis dictum.',
        'entity_type' => 'node',
        'entity_bundle' => 'tramite',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd90b4d9c-e8d8-4624-a949-d07a8a4e24da';
    $display->content['new-d90b4d9c-e8d8-4624-a949-d07a8a4e24da'] = $pane;
    $display->panels['top'][5] = 'new-d90b4d9c-e8d8-4624-a949-d07a8a4e24da';
    $pane = new stdClass();
    $pane->pid = 'new-1f38c565-29bf-4ce8-ac57-705a1c73a3ef';
    $pane->panel = 'top';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-verde',
      'icono' => 'glyphicon-home',
      'titulo' => 'Excepteur sint',
      'texto' => 'Occaecat cupidatat non proident',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'referencia' => array(
        'entity_id' => '1',
        'entity_label' => 'Lorem ipsum dolor sit amet',
        'entity_type' => 'node',
        'entity_bundle' => 'noticia',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1f38c565-29bf-4ce8-ac57-705a1c73a3ef';
    $display->content['new-1f38c565-29bf-4ce8-ac57-705a1c73a3ef'] = $pane;
    $display->panels['top'][6] = 'new-1f38c565-29bf-4ce8-ac57-705a1c73a3ef';
    $pane = new stdClass();
    $pane->pid = 'new-db203264-eddb-4108-884f-8ea483b15a03';
    $pane->panel = 'top';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-naranja',
      'icono' => 'glyphicon-home',
      'titulo' => 'Ut enim ad minim veniam',
      'texto' => 'Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'referencia' => array(
        'entity_id' => '3',
        'entity_label' => 'Gluten-free pop-up next level est',
        'entity_type' => 'node',
        'entity_bundle' => 'noticia',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'db203264-eddb-4108-884f-8ea483b15a03';
    $display->content['new-db203264-eddb-4108-884f-8ea483b15a03'] = $pane;
    $display->panels['top'][7] = 'new-db203264-eddb-4108-884f-8ea483b15a03';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_node_overview__pagina_principal'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function badistro_cck_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'areas';
  $page->task = 'page';
  $page->admin_title = 'Áreas';
  $page->admin_description = '';
  $page->path = 'areas';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_areas__default';
  $handler->task = 'page';
  $handler->subtask = 'areas';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'una-columna-estrecha';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'body-middle' => NULL,
      'full' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '02c31784-b71d-4e21-857d-a1c0d5acd2f7';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['areas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'noticias';
  $page->task = 'page';
  $page->admin_title = 'Noticias';
  $page->admin_description = '';
  $page->path = 'noticias';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_noticias__default';
  $handler->task = 'page';
  $handler->subtask = 'noticias';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'una-columna-estrecha';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'body-middle' => NULL,
      'full' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '62f8a5d1-92a2-4e5d-9b51-4433d3d56cc3';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['noticias'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tramites';
  $page->task = 'page';
  $page->admin_title = 'Trámites';
  $page->admin_description = '';
  $page->path = 'tramites';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tramites__default';
  $handler->task = 'page';
  $handler->subtask = 'tramites';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'una-columna-estrecha';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'body-middle' => NULL,
      'full' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '567acbe9-f165-4088-abf4-d057a8e0ba0e';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tramites'] = $page;

  return $pages;

}
