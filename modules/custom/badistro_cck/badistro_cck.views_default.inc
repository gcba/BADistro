<?php
/**
 * @file
 * badistro_cck.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function badistro_cck_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'listado_de_contenido';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listado de Contenido';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listado de Contenido';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Imagen destacada */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Categoría (field_categoria) */
  $handler->display->display_options['arguments']['field_categoria_target_id']['id'] = 'field_categoria_target_id';
  $handler->display->display_options['arguments']['field_categoria_target_id']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['arguments']['field_categoria_target_id']['field'] = 'field_categoria_target_id';
  $handler->display->display_options['arguments']['field_categoria_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_categoria_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_categoria_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_categoria_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Tipo de Trámite (field_tramite_tipo) */
  $handler->display->display_options['arguments']['field_tramite_tipo_target_id']['id'] = 'field_tramite_tipo_target_id';
  $handler->display->display_options['arguments']['field_tramite_tipo_target_id']['table'] = 'field_data_field_tramite_tipo';
  $handler->display->display_options['arguments']['field_tramite_tipo_target_id']['field'] = 'field_tramite_tipo_target_id';
  $handler->display->display_options['arguments']['field_tramite_tipo_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tramite_tipo_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tramite_tipo_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tramite_tipo_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Área relacionada (field_area) */
  $handler->display->display_options['arguments']['field_area_target_id']['id'] = 'field_area_target_id';
  $handler->display->display_options['arguments']['field_area_target_id']['table'] = 'field_data_field_area';
  $handler->display->display_options['arguments']['field_area_target_id']['field'] = 'field_area_target_id';
  $handler->display->display_options['arguments']['field_area_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_area_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_area_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_area_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: General */
  $handler = $view->new_display('block', 'General', 'listado_de_contenido_default');
  $translatables['listado_de_contenido'] = array(
    t('Master'),
    t('Listado de Contenido'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('General'),
  );
  $export['listado_de_contenido'] = $view;

  return $export;
}
