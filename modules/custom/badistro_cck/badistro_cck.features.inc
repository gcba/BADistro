<?php
/**
 * @file
 * badistro_cck.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badistro_cck_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function badistro_cck_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function badistro_cck_image_default_styles() {
  $styles = array();

  // Exported image style: wide.
  $styles['wide'] = array(
    'label' => 'Wide',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1920,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
