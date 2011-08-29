<?php
/**
 * @file
 * omniauth_provider_core.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function omniauth_provider_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: cancel account
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  return $permissions;
}
