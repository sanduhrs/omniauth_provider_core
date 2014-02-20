<?php
/**
 * @file
 * omniauth_provider_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function omniauth_provider_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user-logged-in';
  $context->description = '';
  $context->tag = 'OmniAuth';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ab365f4752e41c42cc16519c2a95e2c3' => array(
          'module' => 'views',
          'delta' => 'ab365f4752e41c42cc16519c2a95e2c3',
          'region' => 'sidebar_second',
          'weight' => '-12',
        ),
        'views-3e7b19739b40cbdac461dd1af3ec4ac1' => array(
          'module' => 'views',
          'delta' => '3e7b19739b40cbdac461dd1af3ec4ac1',
          'region' => 'sidebar_second',
          'weight' => '-11',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'header_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OmniAuth');
  $export['user-logged-in'] = $context;

  return $export;
}
