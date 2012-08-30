<?php
/**
 * @file
 * omniauth_provider_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function omniauth_provider_core_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'relying_parties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'openid_sso_provider_rps';
  $view->human_name = 'Relying parties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your used OpenID relying parties';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: OpenID Provider: Relying Parties: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['label']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['label']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['label']['alter']['external'] = 0;
  $handler->display->display_options['fields']['label']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['label']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['label']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['label']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['label']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['label']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['label']['alter']['html'] = 0;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['label']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['label']['hide_empty'] = 0;
  $handler->display->display_options['fields']['label']['empty_zero'] = 0;
  $handler->display->display_options['fields']['label']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['label']['link_to_realm'] = 1;
  /* Field: OpenID Provider: Relying Parties: Realm */
  $handler->display->display_options['fields']['realm']['id'] = 'realm';
  $handler->display->display_options['fields']['realm']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['fields']['realm']['field'] = 'realm';
  $handler->display->display_options['fields']['realm']['label'] = '';
  $handler->display->display_options['fields']['realm']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['external'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['realm']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['realm']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['realm']['alter']['html'] = 0;
  $handler->display->display_options['fields']['realm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realm']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['realm']['hide_empty'] = 0;
  $handler->display->display_options['fields']['realm']['empty_zero'] = 0;
  $handler->display->display_options['fields']['realm']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['realm']['link_to_realm'] = 0;
  /* Sort criterion: OpenID Provider: Relying Parties: Label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  /* Contextual filter: OpenID Provider: Relying Parties: User */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'openid_provider_relying_party';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: OpenID Provider: Relying Parties: Enabled */
  $handler->display->display_options['filters']['enabled']['id'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['filters']['enabled']['field'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['value'] = '1';

  /* Display: Block: All relying parties */
  $handler = $view->new_display('block', 'Block: All relying parties', 'block_openid_sso_provider_all_rps');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Available OpenID relying parties';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Block: User's relying parties */
  $handler = $view->new_display('block', 'Block: User\'s relying parties', 'block_openid_sso_provider_used_rps');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Block: User's not used relying parties */
  $handler = $view->new_display('block', 'Block: User\'s not used relying parties', 'block_openid_sso_provider_unused_rps');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other available OpenID relying parties';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OpenID Provider: Relying Parties: User */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'openid_provider_relying_party';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 1;
  $export['relying_parties'] = $view;

  return $export;
}
