<?php
/**
 * @file
 * badistro_cck.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function badistro_cck_user_default_roles() {
  $roles = array();

  // Exported role: Editor de Contenido.
  $roles['Editor de Contenido'] = array(
    'name' => 'Editor de Contenido',
    'weight' => 2,
  );

  return $roles;
}
