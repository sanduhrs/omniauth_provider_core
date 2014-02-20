<?php
/**
 * @file
 * omniauth_provider_core.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function omniauth_provider_core_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'User logout button';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'user_logout';
  $fe_block_boxes->body = '<a class="button logout" href="/user/logout">Logout</a>';

  $export['user_logout'] = $fe_block_boxes;

  return $export;
}
