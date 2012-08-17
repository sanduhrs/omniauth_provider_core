<?php
/**
 * @file
 * omniauth_provider_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function omniauth_provider_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: administer openid provider.
  $permissions['administer openid provider'] = array(
    'name' => 'administer openid provider',
    'roles' => array(),
    'module' => 'openid_provider',
  );

  // Exported permission: administer openid_sso_provider_rps.
  $permissions['administer openid_sso_provider_rps'] = array(
    'name' => 'administer openid_sso_provider_rps',
    'roles' => array(),
    'module' => 'openid_sso_provider_rps',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: manage own openid sites.
  $permissions['manage own openid sites'] = array(
    'name' => 'manage own openid sites',
    'roles' => array(),
    'module' => 'openid_provider',
  );

  // Exported permission: view openid_sso_provider_rps entities.
  $permissions['view openid_sso_provider_rps entities'] = array(
    'name' => 'view openid_sso_provider_rps entities',
    'roles' => array(),
    'module' => 'openid_sso_provider_rps',
  );

  return $permissions;
}
