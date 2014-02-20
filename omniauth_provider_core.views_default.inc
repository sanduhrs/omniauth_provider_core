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

  $view = new view();
  $view->name = 'omniauth_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Omniauth Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Profil';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_name_person_first']['id'] = 'field_name_person_first';
  $handler->display->display_options['fields']['field_name_person_first']['table'] = 'field_data_field_name_person_first';
  $handler->display->display_options['fields']['field_name_person_first']['field'] = 'field_name_person_first';
  $handler->display->display_options['fields']['field_name_person_first']['label'] = 'Vorname';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_name_person_last']['id'] = 'field_name_person_last';
  $handler->display->display_options['fields']['field_name_person_last']['table'] = 'field_data_field_name_person_last';
  $handler->display->display_options['fields']['field_name_person_last']['field'] = 'field_name_person_last';
  $handler->display->display_options['fields']['field_name_person_last']['label'] = 'Nachname';
  /* Field: User: Postal code */
  $handler->display->display_options['fields']['field_contact_home_postal_code']['id'] = 'field_contact_home_postal_code';
  $handler->display->display_options['fields']['field_contact_home_postal_code']['table'] = 'field_data_field_contact_home_postal_code';
  $handler->display->display_options['fields']['field_contact_home_postal_code']['field'] = 'field_contact_home_postal_code';
  $handler->display->display_options['fields']['field_contact_home_postal_code']['label'] = 'Postleitzahl';
  /* Field: User: Address line 1 */
  $handler->display->display_options['fields']['field_contact_home_address_1']['id'] = 'field_contact_home_address_1';
  $handler->display->display_options['fields']['field_contact_home_address_1']['table'] = 'field_data_field_contact_home_address_1';
  $handler->display->display_options['fields']['field_contact_home_address_1']['field'] = 'field_contact_home_address_1';
  $handler->display->display_options['fields']['field_contact_home_address_1']['label'] = 'Adresse';
  /* Field: User: City */
  $handler->display->display_options['fields']['field_contact_home_city']['id'] = 'field_contact_home_city';
  $handler->display->display_options['fields']['field_contact_home_city']['table'] = 'field_data_field_contact_home_city';
  $handler->display->display_options['fields']['field_contact_home_city']['field'] = 'field_contact_home_city';
  $handler->display->display_options['fields']['field_contact_home_city']['label'] = 'Ort';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Personal profile information */
  $handler = $view->new_display('panel_pane', 'Personal profile information', 'profile_panel_pane');
  $handler->display->display_options['display_description'] = 'The classic data about an user';
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Benutzer: Uid',
    ),
  );
  $export['omniauth_profile'] = $view;

  $view = new view();
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
  $handler->display->display_options['title'] = 'Meine Greenpeace-Seiten';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Relying party: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['label']['link_to_realm'] = 1;
  /* Field: Relying party: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Relying party: Login url */
  $handler->display->display_options['fields']['field_login_url']['id'] = 'field_login_url';
  $handler->display->display_options['fields']['field_login_url']['table'] = 'field_data_field_login_url';
  $handler->display->display_options['fields']['field_login_url']['field'] = 'field_login_url';
  $handler->display->display_options['fields']['field_login_url']['label'] = '';
  $handler->display->display_options['fields']['field_login_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_login_url']['alter']['text'] = 'Login';
  $handler->display->display_options['fields']['field_login_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_login_url']['alter']['path'] = '[field_login_url-value]';
  $handler->display->display_options['fields']['field_login_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_login_url']['element_label_colon'] = FALSE;
  /* Sort criterion: Relying party: Label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  /* Contextual filter: Visited relying parties: User */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'openid_provider_relying_party';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Relying party: Enabled */
  $handler->display->display_options['filters']['enabled']['id'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['filters']['enabled']['field'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['value'] = '1';

  /* Display: Block: All relying parties */
  $handler = $view->new_display('block', 'Block: All relying parties', 'block_openid_sso_provider_all_rps');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alle Greenpeace-Seiten';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Block: User's relying parties */
  $handler = $view->new_display('block', 'Block: User\'s relying parties', 'block_openid_sso_provider_used_rps');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'You have been registered already with your account on the following projects.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';

  /* Display: Block: User's not used relying parties */
  $handler = $view->new_display('block', 'Block: User\'s not used relying parties', 'block_openid_sso_provider_unused_rps');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other available OpenID relying parties';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Visited relying parties: User */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'openid_provider_relying_party';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['not'] = TRUE;
  $export['relying_parties'] = $view;

  $view = new view();
  $view->name = 'relying_party_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'openid_sso_provider_rps';
  $view->human_name = 'Relying Party Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Relying party: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_type'] = 'h3';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['label']['link_to_realm'] = 0;
  /* Field: Relying party: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Relying party: Realm */
  $handler->display->display_options['fields']['realm']['id'] = 'realm';
  $handler->display->display_options['fields']['realm']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['fields']['realm']['field'] = 'realm';
  $handler->display->display_options['fields']['realm']['label'] = 'URL';
  $handler->display->display_options['fields']['realm']['link_to_realm'] = 0;
  /* Contextual filter: Relying party: Realm */
  $handler->display->display_options['arguments']['realm']['id'] = 'realm';
  $handler->display->display_options['arguments']['realm']['table'] = 'openid_sso_provider_rps';
  $handler->display->display_options['arguments']['realm']['field'] = 'realm';
  $handler->display->display_options['arguments']['realm']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['realm']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['realm']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['realm']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['realm']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['realm']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['realm']['limit'] = '0';

  /* Display: RP info pane */
  $handler = $view->new_display('panel_pane', 'RP info pane', 'relying_party_information_pane');
  $handler->display->display_options['pane_title'] = 'Relying Party information pane';
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'realm' => array(
      'type' => 'user',
      'context' => 'entity:openid_sso_provider_rps.label',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Relying party: Realm',
    ),
  );
  $export['relying_party_information'] = $view;

  return $export;
}
