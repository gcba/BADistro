<?php
/**
 * @file
 * badistro_cck.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function badistro_cck_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Development',
    'description' => 'Development link',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-pie-de-pagina-derecha.
  $menus['menu-pie-de-pagina-derecha'] = array(
    'menu_name' => 'menu-pie-de-pagina-derecha',
    'title' => 'Pie de página (Derecha)',
    'description' => '',
  );
  // Exported menu: menu-pie-de-pagina-izquierda.
  $menus['menu-pie-de-pagina-izquierda'] = array(
    'menu_name' => 'menu-pie-de-pagina-izquierda',
    'title' => 'Pie de página (Izquierda)',
    'description' => '',
  );
  // Exported menu: menu-redes-sociales.
  $menus['menu-redes-sociales'] = array(
    'menu_name' => 'menu-redes-sociales',
    'title' => 'Redes sociales',
    'description' => '',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Development');
  t('Development link');
  t('Main menu');
  t('Management');
  t('Navigation');
  t('Pie de página (Derecha)');
  t('Pie de página (Izquierda)');
  t('Redes sociales');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
