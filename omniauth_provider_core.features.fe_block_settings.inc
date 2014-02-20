<?php
/**
 * @file
 * omniauth_provider_core.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function omniauth_provider_core_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-user_logout'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'user_logout',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'greenpeace_profile' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'greenpeace_profile',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
