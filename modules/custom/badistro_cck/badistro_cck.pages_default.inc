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
      'cantidad_links' => '10',
      'tipo_de_listado' => 'recientes',
      'tipos_de_contenido' => 'noticia',
      'formato_de_listado' => 'badistro_bloques_listado_con_imagen',
      'titulo' => 'Noticias',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'icono' => 'glyphicon-home',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'vertical',
      'todos_los_items' => 0,
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
      'cantidad_links' => '10',
      'tipo_de_listado' => 'recientes',
      'tipos_de_contenido' => 'tramite',
      'formato_de_listado' => 'badistro_bloques_listado',
      'titulo' => 'Trámites',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'icono' => 'glyphicon-home',
      'tipo_noticia' => FALSE,
      'tipo_tramite' => array(),
      'orientacion_de_listado' => 'vertical',
      'todos_los_items' => 0,
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
    $pane->pid = 'new-c41601e5-ffb3-4647-85b2-b7595e597049';
    $pane->panel = 'body-right';
    $pane->type = 'redes_sociales';
    $pane->subtype = 'redes_sociales';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'titulo' => 'Integra tus redes sociales',
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
    $pane->uuid = 'c41601e5-ffb3-4647-85b2-b7595e597049';
    $display->content['new-c41601e5-ffb3-4647-85b2-b7595e597049'] = $pane;
    $display->panels['body-right'][0] = 'new-c41601e5-ffb3-4647-85b2-b7595e597049';
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
    $pane->pid = 'new-55a013a7-62b2-492d-a124-d1e9ee22d4dc';
    $pane->panel = 'top';
    $pane->type = 'alerta';
    $pane->subtype = 'alerta';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tipo' => 'info',
      'texto' => array(
        'value' => '<strong>Bienvenido.</strong> Comienza a crear contenido ahora mismo desde <a href="node/add" title="Crear contenido" alt="Crear contenido">aquí</a>',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '55a013a7-62b2-492d-a124-d1e9ee22d4dc';
    $display->content['new-55a013a7-62b2-492d-a124-d1e9ee22d4dc'] = $pane;
    $display->panels['top'][0] = 'new-55a013a7-62b2-492d-a124-d1e9ee22d4dc';
    $pane = new stdClass();
    $pane->pid = 'new-d90b4d9c-e8d8-4624-a949-d07a8a4e24da';
    $pane->panel = 'top';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-verde',
      'icono' => 'glyphicon-certificate',
      'titulo' => 'Información útil',
      'texto' => '¿Tienes dudas de cómo funciona? Click aquí',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'referencia' => FALSE,
      'link' => 'badistro-tutorial',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd90b4d9c-e8d8-4624-a949-d07a8a4e24da';
    $display->content['new-d90b4d9c-e8d8-4624-a949-d07a8a4e24da'] = $pane;
    $display->panels['top'][1] = 'new-d90b4d9c-e8d8-4624-a949-d07a8a4e24da';
    $pane = new stdClass();
    $pane->pid = 'new-db203264-eddb-4108-884f-8ea483b15a03';
    $pane->panel = 'top';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-naranja',
      'icono' => 'glyphicon-list-alt',
      'titulo' => 'Crea contenido',
      'texto' => 'Agrega noticias, trámites, áreas o páginas',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'referencia' => FALSE,
      'link' => 'node/add',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'db203264-eddb-4108-884f-8ea483b15a03';
    $display->content['new-db203264-eddb-4108-884f-8ea483b15a03'] = $pane;
    $display->panels['top'][2] = 'new-db203264-eddb-4108-884f-8ea483b15a03';
    $pane = new stdClass();
    $pane->pid = 'new-1f38c565-29bf-4ce8-ac57-705a1c73a3ef';
    $pane->panel = 'top';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-naranja',
      'icono' => 'glyphicon-home',
      'titulo' => 'Personaliza la página principal',
      'texto' => 'Agrega contenido y/o modifica el diseño',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'referencia' => FALSE,
      'link' => 'admin/structure/pages/edit/pm_existing_pages-node_overview',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1f38c565-29bf-4ce8-ac57-705a1c73a3ef';
    $display->content['new-1f38c565-29bf-4ce8-ac57-705a1c73a3ef'] = $pane;
    $display->panels['top'][3] = 'new-1f38c565-29bf-4ce8-ac57-705a1c73a3ef';
    $pane = new stdClass();
    $pane->pid = 'new-12b89fbf-7984-4d96-9553-8b8f9b09957f';
    $pane->panel = 'top';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-azul',
      'icono' => 'glyphicon-certificate',
      'titulo' => 'Modifica cómo ves el contenido',
      'texto' => '',
      'referencia' => FALSE,
      'link' => 'admin/structure/pages/edit/node_view',
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
    $pane->uuid = '12b89fbf-7984-4d96-9553-8b8f9b09957f';
    $display->content['new-12b89fbf-7984-4d96-9553-8b8f9b09957f'] = $pane;
    $display->panels['top'][4] = 'new-12b89fbf-7984-4d96-9553-8b8f9b09957f';
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
    $pane = new stdClass();
    $pane->pid = 'new-55f8449d-e7b9-4178-a58a-79e7510aaf9c';
    $pane->panel = 'body-middle';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '15',
      'tipo_de_listado' => 'recientes',
      'tipos_de_contenido' => 'area',
      'formato_de_listado' => 'badistro_bloques_listado_destacado',
      'titulo' => 'Listado',
      'icono' => 'glyphicon-star',
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
    $pane->uuid = '55f8449d-e7b9-4178-a58a-79e7510aaf9c';
    $display->content['new-55f8449d-e7b9-4178-a58a-79e7510aaf9c'] = $pane;
    $display->panels['body-middle'][0] = 'new-55f8449d-e7b9-4178-a58a-79e7510aaf9c';
    $pane = new stdClass();
    $pane->pid = 'new-852a0c7d-42c5-4d2d-92f2-9e2f1366b6cc';
    $pane->panel = 'top';
    $pane->type = 'titulo';
    $pane->subtype = 'titulo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tag' => 'h1',
      'texto' => '',
      'sobreescribir_titulo' => 0,
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
    $pane->uuid = '852a0c7d-42c5-4d2d-92f2-9e2f1366b6cc';
    $display->content['new-852a0c7d-42c5-4d2d-92f2-9e2f1366b6cc'] = $pane;
    $display->panels['top'][0] = 'new-852a0c7d-42c5-4d2d-92f2-9e2f1366b6cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['areas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'badistro_tutorial';
  $page->task = 'page';
  $page->admin_title = 'BAdistro Tutorial';
  $page->admin_description = '';
  $page->path = 'badistro-tutorial';
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
  $handler->name = 'page_badistro_tutorial__panel_context_b210389e-0d27-4293-a2c7-6cbf2d6776c5';
  $handler->task = 'page';
  $handler->subtask = 'badistro_tutorial';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'BAdistro Tutorial',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'columna-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'sidebar' => NULL,
      'column' => NULL,
      'full' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5eca6490-f8cf-44a1-bd81-22cf0fec4db7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4d1e7c63-b4e9-4883-aa3a-2d06487dc261';
    $pane->panel = 'column';
    $pane->type = 'texto';
    $pane->subtype = 'texto';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'destacado' => 0,
      'texto' => array(
        'value' => '<h2>Como personalizar tu BAdistro</h2>
<br/><br/>
<ol>
<li><h3>¿Cómo personalizar tu página de Inicio? </h3>
<ul>
<li>Ir a Estructura / Páginas / pm_existing_pages-node_overview / Editar</li>
<li>Seleccionar la estructura deseada en Layout </li>
</ul> 

<br/>

</li><li><h3>¿Como crear un contenido (Noticia, Página, Trámite, Área)?</h3>
<br/>
<p>Ir a Contenido / Agregar Contenido. Seleccionar tipo de contenido a crear.</p>
<br/>

<br/>

</li><li><h3>¿Cómo personalizar tus páginas de Noticia, Área, Trámite? </h3>
<ul><li>Ir a Estructura / Páginas / node_view y Editar</li>
<li>Seleccionar Noticia, Trámite, Área, Página</li>
</ul>
<br/>

</li><li><h3>¿Cómo crear el contenido de tus layouts? </h3>
<ul>
<li>Ir a Estructura / Páginas / node_view / Editar </li>
<li>Seleccionar Página, Área, Trámite, Noticia </li>
<li>Seleccionar tu layout </a></li>
<li>Seleccionar tu contenido donde: <strong> Ancho máximo </strong> es un área definida para imagen destacada o carrousel del ancho de tu navegador, y <strong>contenido, columnas derecha, centro o izquierda y sidebar</strong> donde podrás incluír tus bloques de alerta, shortcuts, listados, campos de etiquetas, contenidos relacionados solo haciendo clic en agregar contenido.</li>

</ul>
<br/>

</li><li><h3>¿Cómo crear tus categorías, etiquetas, tipos de trámites? </h3>
<ul>
<li>Ir a Estructura / Taxonomía</li>
<li>Agregar vocabulario</li>
<li>Agregar término</li>
</ul>

<br/>

</li><li><h3>¿Cómo crear tus menús?</h3>
<ul>
<li>Ir a Estructura / Menú y seleccionar crear nuevo. En este apartado podrás además agregar, listar y organizar tus ítems.</li>
</ul>

<br/><br/>
</li><li><h3>¿Cómo personalizar tus listados?</h3>
<ul>
<li>Ir a Estructura / Páginas / Node_view. Seleccionar tipo de página</li>
<li>Ir a Contenido / Agregar contenido / BAdistro / Listados</li>
<li>Allí se puede seleccionar el tipo de contenido, tipo de listado, orientación vertical u horizontal del mismo, y si el listado mostrará solo texto, texto con imagen o texto destacado </li>

</ul>

<br/><br/>
</li><li><h3>¿Cómo integrar a tus páginas los widgets y shares de redes sociales?</h3>
<ul>
<li>Ir a Estructura / Páginas / Node_view. Seleccionar tipo de página</li>
<li>Ir a Contenido / Agregar contenido / BAdistro / Redes Sociales</li>
<li>Seleccionar la opción deseada (Twitter o Facebook) en formato "compatir" o "timeline"</li>
</ul>



<br/><br/>
</li><li><h3>¿Cómo personalizar tu footer?</h3>
<ul>
<li>Solo debes editar los bloques del footer y allí encontrarás los componentes para agregar o quitar iconografía y links de redes sociales, y links relacionados </li>
</ul>
<br/>


<br/><br/>
</li><li><h3>¿Cómo personalizar tu carrousel de imágenes?</h3>
<ul>
<li>Ir a Estructura / Páginas / Node_view. Seleccionar tipo de página</li>
<li>Ir a Contenido / Agregar contenido / BAdistro / Carrousel</li>
<li>Allí se puede seleccionar la cantidad de diapositivas que se mostrarán asociadadas un contenido a elegir (Noticia, Trámite, Área) </li>

</ul>


<br/><br/>
</li><li><h3>¿Cómo personalizar tu imagen destacada?</h3>
<ul>
<li>Ir a Estructura / Páginas / Node_view. Seleccionar tipo de página</li>
<li>Ir a Contenido / Agregar contenido / BAdistro / Imagen destacada</li>
<li>Seleccionar imagen (min-width:1900px)</li>

</ul>

<br/>
</li><li><h3>¿Cómo personalizar tu galería de imágenes?</h3>
<ul>
<li>Ir a Estructura / Páginas / Node_view. Seleccionar tipo de página</li>
<li>Ir a Contenido / Agregar contenido / BAdistro / Galería de Imágenes</li>
<li>Seleccionar imagen</li>

</ul>


<br/>
</li><li><h3>¿Cómo personalizar tus atajos?</h3>
<ul>
<li>Ir a Estructura / Páginas / Node_view. Seleccionar tipo de página</li>
<li>Ir a Contenido / Agregar contenido / BAdistro / Atajo</li>
<li>Crear tu atajo agregando los campos determinados</li>
</ul>
</li>
</ol>',
        'format' => 'full_html',
      ),
      'sobreescribir' => 1,
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
    $pane->uuid = '4d1e7c63-b4e9-4883-aa3a-2d06487dc261';
    $display->content['new-4d1e7c63-b4e9-4883-aa3a-2d06487dc261'] = $pane;
    $display->panels['column'][0] = 'new-4d1e7c63-b4e9-4883-aa3a-2d06487dc261';
    $pane = new stdClass();
    $pane->pid = 'new-9fea4765-a7c0-4f2f-9a49-fd16dbf923ea';
    $pane->panel = 'top';
    $pane->type = 'titulo';
    $pane->subtype = 'titulo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tag' => 'h1',
      'texto' => 'Bienvenido a BAdistro',
      'sobreescribir_titulo' => 1,
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
    $pane->uuid = '9fea4765-a7c0-4f2f-9a49-fd16dbf923ea';
    $display->content['new-9fea4765-a7c0-4f2f-9a49-fd16dbf923ea'] = $pane;
    $display->panels['top'][0] = 'new-9fea4765-a7c0-4f2f-9a49-fd16dbf923ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['badistro_tutorial'] = $page;

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
    $pane = new stdClass();
    $pane->pid = 'new-d84ba724-a0d3-4a10-8f1f-cee1e3317c63';
    $pane->panel = 'body-middle';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '15',
      'tipo_de_listado' => 'recientes',
      'tipos_de_contenido' => 'noticia',
      'formato_de_listado' => 'badistro_bloques_listado_destacado',
      'titulo' => 'Listado',
      'icono' => 'glyphicon-star',
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
    $pane->uuid = 'd84ba724-a0d3-4a10-8f1f-cee1e3317c63';
    $display->content['new-d84ba724-a0d3-4a10-8f1f-cee1e3317c63'] = $pane;
    $display->panels['body-middle'][0] = 'new-d84ba724-a0d3-4a10-8f1f-cee1e3317c63';
    $pane = new stdClass();
    $pane->pid = 'new-6dc218cd-11ab-4638-a448-0c1ea442deaa';
    $pane->panel = 'top';
    $pane->type = 'titulo';
    $pane->subtype = 'titulo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tag' => 'h1',
      'texto' => '',
      'sobreescribir_titulo' => 0,
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
    $pane->uuid = '6dc218cd-11ab-4638-a448-0c1ea442deaa';
    $display->content['new-6dc218cd-11ab-4638-a448-0c1ea442deaa'] = $pane;
    $display->panels['top'][0] = 'new-6dc218cd-11ab-4638-a448-0c1ea442deaa';
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
    $pane = new stdClass();
    $pane->pid = 'new-2107616f-0941-450a-97d2-bdd8ee4ec9c1';
    $pane->panel = 'body-middle';
    $pane->type = 'listado';
    $pane->subtype = 'listado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad_links' => '15',
      'tipo_de_listado' => 'recientes',
      'tipos_de_contenido' => 'tramite',
      'formato_de_listado' => 'badistro_bloques_listado_destacado',
      'titulo' => 'Listado',
      'icono' => 'glyphicon-star',
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
    $pane->uuid = '2107616f-0941-450a-97d2-bdd8ee4ec9c1';
    $display->content['new-2107616f-0941-450a-97d2-bdd8ee4ec9c1'] = $pane;
    $display->panels['body-middle'][0] = 'new-2107616f-0941-450a-97d2-bdd8ee4ec9c1';
    $pane = new stdClass();
    $pane->pid = 'new-4add1c62-1138-48df-b9d6-cb06cab5abcb';
    $pane->panel = 'top';
    $pane->type = 'titulo';
    $pane->subtype = 'titulo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tag' => 'h1',
      'texto' => '',
      'sobreescribir_titulo' => 0,
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
    $pane->uuid = '4add1c62-1138-48df-b9d6-cb06cab5abcb';
    $display->content['new-4add1c62-1138-48df-b9d6-cb06cab5abcb'] = $pane;
    $display->panels['top'][0] = 'new-4add1c62-1138-48df-b9d6-cb06cab5abcb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tramites'] = $page;

  return $pages;

}
