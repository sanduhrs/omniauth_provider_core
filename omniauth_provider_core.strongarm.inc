<?php
/**
 * @file
 * omniauth_provider_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function omniauth_provider_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'login';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
