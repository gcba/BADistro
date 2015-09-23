<?php
/**
 * @file
 * badistro_tramites.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function badistro_tramites_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tramite:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tramite';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '603677a4-e317-4cf3-a1c8-d6c51953ef02';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fc43d7fe-ba27-455a-b38b-e14977917bb9';
    $pane->panel = 'bottom';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fc43d7fe-ba27-455a-b38b-e14977917bb9';
    $display->content['new-fc43d7fe-ba27-455a-b38b-e14977917bb9'] = $pane;
    $display->panels['bottom'][0] = 'new-fc43d7fe-ba27-455a-b38b-e14977917bb9';
    $pane = new stdClass();
    $pane->pid = 'new-22bdcb68-e8ee-43bf-8a7b-07c96c4902aa';
    $pane->panel = 'column';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '22bdcb68-e8ee-43bf-8a7b-07c96c4902aa';
    $display->content['new-22bdcb68-e8ee-43bf-8a7b-07c96c4902aa'] = $pane;
    $display->panels['column'][0] = 'new-22bdcb68-e8ee-43bf-8a7b-07c96c4902aa';
    $pane = new stdClass();
    $pane->pid = 'new-244560c5-73a6-4361-a2d5-96c0cb17e958';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tramite_tipo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '244560c5-73a6-4361-a2d5-96c0cb17e958';
    $display->content['new-244560c5-73a6-4361-a2d5-96c0cb17e958'] = $pane;
    $display->panels['sidebar'][0] = 'new-244560c5-73a6-4361-a2d5-96c0cb17e958';
    $pane = new stdClass();
    $pane->pid = 'new-7b349a67-4a40-490c-be92-0b8fd4018264';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tramite_costo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b349a67-4a40-490c-be92-0b8fd4018264';
    $display->content['new-7b349a67-4a40-490c-be92-0b8fd4018264'] = $pane;
    $display->panels['sidebar'][1] = 'new-7b349a67-4a40-490c-be92-0b8fd4018264';
    $pane = new stdClass();
    $pane->pid = 'new-abb7cf94-a672-4f4e-b2c7-bcb08cc38ea0';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_requisitos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'abb7cf94-a672-4f4e-b2c7-bcb08cc38ea0';
    $display->content['new-abb7cf94-a672-4f4e-b2c7-bcb08cc38ea0'] = $pane;
    $display->panels['sidebar'][2] = 'new-abb7cf94-a672-4f4e-b2c7-bcb08cc38ea0';
    $pane = new stdClass();
    $pane->pid = 'new-7f23c0f7-4a48-413d-ad73-14b7f8d57b0f';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_links_relacionados';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7f23c0f7-4a48-413d-ad73-14b7f8d57b0f';
    $display->content['new-7f23c0f7-4a48-413d-ad73-14b7f8d57b0f'] = $pane;
    $display->panels['sidebar'][3] = 'new-7f23c0f7-4a48-413d-ad73-14b7f8d57b0f';
    $pane = new stdClass();
    $pane->pid = 'new-11c85f3e-e56d-4298-bb50-e3c89473dcac';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paginas_relacionadas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '11c85f3e-e56d-4298-bb50-e3c89473dcac';
    $display->content['new-11c85f3e-e56d-4298-bb50-e3c89473dcac'] = $pane;
    $display->panels['sidebar'][4] = 'new-11c85f3e-e56d-4298-bb50-e3c89473dcac';
    $pane = new stdClass();
    $pane->pid = 'new-d823e01b-bd32-4526-b420-7f6b5e52fe18';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
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
    $pane->uuid = 'd823e01b-bd32-4526-b420-7f6b5e52fe18';
    $display->content['new-d823e01b-bd32-4526-b420-7f6b5e52fe18'] = $pane;
    $display->panels['top'][0] = 'new-d823e01b-bd32-4526-b420-7f6b5e52fe18';
    $pane = new stdClass();
    $pane->pid = 'new-77a553a9-6e9b-4743-980f-d3cfe61b4126';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '77a553a9-6e9b-4743-980f-d3cfe61b4126';
    $display->content['new-77a553a9-6e9b-4743-980f-d3cfe61b4126'] = $pane;
    $display->panels['top'][1] = 'new-77a553a9-6e9b-4743-980f-d3cfe61b4126';
    $pane = new stdClass();
    $pane->pid = 'new-709220dc-31bb-45ad-870e-b5ab11fcae3d';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '709220dc-31bb-45ad-870e-b5ab11fcae3d';
    $display->content['new-709220dc-31bb-45ad-870e-b5ab11fcae3d'] = $pane;
    $display->panels['top'][2] = 'new-709220dc-31bb-45ad-870e-b5ab11fcae3d';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-d823e01b-bd32-4526-b420-7f6b5e52fe18';
  $panelizer->display = $display;
  $export['node:tramite:default'] = $panelizer;

  return $export;
}
