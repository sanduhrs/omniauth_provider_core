<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function omniauth_provider_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
  );

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(),
  );

  return $permissions;
}
