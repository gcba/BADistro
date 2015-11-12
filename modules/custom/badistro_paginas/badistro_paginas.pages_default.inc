<?php
/**
 * @file
 * badistro_paginas.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badistro_paginas_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__pagina';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -96;
  $handler->conf = array(
    'title' => 'Página',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'pagina',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
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
  $display->uuid = '4ff89c7e-3b83-4cf5-9f8c-e2f0487a6ea6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3515e6be-2c7f-4c5d-ab0e-53667e9d8bcb';
    $pane->panel = 'body-middle';
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
    $pane->uuid = '3515e6be-2c7f-4c5d-ab0e-53667e9d8bcb';
    $display->content['new-3515e6be-2c7f-4c5d-ab0e-53667e9d8bcb'] = $pane;
    $display->panels['body-middle'][0] = 'new-3515e6be-2c7f-4c5d-ab0e-53667e9d8bcb';
    $pane = new stdClass();
    $pane->pid = 'new-807b9ce3-70dc-4e13-a696-19d2e3481e2d';
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
    $pane->uuid = '807b9ce3-70dc-4e13-a696-19d2e3481e2d';
    $display->content['new-807b9ce3-70dc-4e13-a696-19d2e3481e2d'] = $pane;
    $display->panels['full'][0] = 'new-807b9ce3-70dc-4e13-a696-19d2e3481e2d';
    $pane = new stdClass();
    $pane->pid = 'new-3cbf242a-18dc-467c-b407-dbba4be6f7b6';
    $pane->panel = 'top';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3cbf242a-18dc-467c-b407-dbba4be6f7b6';
    $display->content['new-3cbf242a-18dc-467c-b407-dbba4be6f7b6'] = $pane;
    $display->panels['top'][0] = 'new-3cbf242a-18dc-467c-b407-dbba4be6f7b6';
    $pane = new stdClass();
    $pane->pid = 'new-dfaadbfd-b150-42aa-81e2-8d2520a20758';
    $pane->panel = 'top';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dfaadbfd-b150-42aa-81e2-8d2520a20758';
    $display->content['new-dfaadbfd-b150-42aa-81e2-8d2520a20758'] = $pane;
    $display->panels['top'][1] = 'new-dfaadbfd-b150-42aa-81e2-8d2520a20758';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__pagina'] = $handler;

  return $export;
}
