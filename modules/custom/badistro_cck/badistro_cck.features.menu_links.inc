<?php
/**
 * @file
 * badistro_cck.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function badistro_cck_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_noticias:noticias
  $menu_links['main-menu_noticias:noticias'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Noticias',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'main-menu_noticias:noticias',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_reas:areas
  $menu_links['main-menu_reas:areas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'areas',
    'router_path' => 'areas',
    'link_title' => 'Áreas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'main-menu_reas:areas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_trmites:tramites
  $menu_links['main-menu_trmites:tramites'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tramites',
    'router_path' => 'tramites',
    'link_title' => 'Trámites',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'main-menu_trmites:tramites',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-redes-sociales_facebook:http://www.facebook.com/gcba
  $menu_links['menu-redes-sociales_facebook:http://www.facebook.com/gcba'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'http://www.facebook.com/gcba',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-redes-sociales_facebook:http://www.facebook.com/gcba',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-redes-sociales_flickr:http://www.flickr.com/photos/buenosairesprensa
  $menu_links['menu-redes-sociales_flickr:http://www.flickr.com/photos/buenosairesprensa'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'http://www.flickr.com/photos/buenosairesprensa',
    'router_path' => '',
    'link_title' => 'Flickr',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-redes-sociales_flickr:http://www.flickr.com/photos/buenosairesprensa',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-redes-sociales_google:https://plus.google.com/+GobiernodelaCiudaddeBuenosAires/
  $menu_links['menu-redes-sociales_google:https://plus.google.com/+GobiernodelaCiudaddeBuenosAires/'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'https://plus.google.com/+GobiernodelaCiudaddeBuenosAires/',
    'router_path' => '',
    'link_title' => 'Google',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-redes-sociales_google:https://plus.google.com/+GobiernodelaCiudaddeBuenosAires/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-redes-sociales_rss:http://www.google.com
  $menu_links['menu-redes-sociales_rss:http://www.google.com'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'http://www.google.com',
    'router_path' => '',
    'link_title' => 'RSS',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-redes-sociales_rss:http://www.google.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-redes-sociales_twitter:http://www.twitter.com/gcba
  $menu_links['menu-redes-sociales_twitter:http://www.twitter.com/gcba'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'http://www.twitter.com/gcba',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-redes-sociales_twitter:http://www.twitter.com/gcba',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-redes-sociales_youtube:http://www.youtube.com/user/GCBA
  $menu_links['menu-redes-sociales_youtube:http://www.youtube.com/user/GCBA'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'http://www.youtube.com/user/GCBA',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-redes-sociales_youtube:http://www.youtube.com/user/GCBA',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook');
  t('Flickr');
  t('Google');
  t('Noticias');
  t('RSS');
  t('Trámites');
  t('Twitter');
  t('Youtube');
  t('Áreas');

  return $menu_links;
}
