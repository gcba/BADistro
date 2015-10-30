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

  // Exported image style: gallery_large.
  $styles['gallery_large'] = array(
    'label' => 'Gallery Large',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_thumb.
  $styles['gallery_thumb'] = array(
    'label' => 'Gallery Thumb',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 525,
          'height' => 426,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: imagen_destacada.
  $styles['imagen_destacada'] = array(
    'label' => 'Imagen destacada',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1965,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 1965,
          'height' => 300,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: list.
  $styles['list'] = array(
    'label' => 'List',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: original.
  $styles['original'] = array(
    'label' => 'Original',
    'effects' => array(
      7 => array(
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

  // Exported image style: wide.
  $styles['wide'] = array(
    'label' => 'Wide',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2000,
          'height' => 659,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
