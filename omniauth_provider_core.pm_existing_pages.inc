<?php
/**
 * @file
 * omniauth_provider_core.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function omniauth_provider_core_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'oauth';
  $pm_existing_page->label = 'oauth';
  $pm_existing_page->context = 'entity|user|uid';
  $pm_existing_page->paths = 'user/%user/oauth
user/%user/oauth/consumers
user/%user/oauth/consumer/add';
  $export['oauth'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'user';
  $pm_existing_page->label = 'User';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'user';
  $export['user'] = $pm_existing_page;

  return $export;
}
