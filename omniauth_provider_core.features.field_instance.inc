<?php
/**
 * @file
 * omniauth_provider_core.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function omniauth_provider_core_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'openid_sso_provider_rps-openid_sso_provider_rps-field_description'
  $field_instances['openid_sso_provider_rps-openid_sso_provider_rps-field_description'] = array(
    'bundle' => 'openid_sso_provider_rps',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'openid_sso_provider_rps',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'openid_sso_provider_rps-openid_sso_provider_rps-field_image'
  $field_instances['openid_sso_provider_rps-openid_sso_provider_rps-field_image'] = array(
    'bundle' => 'openid_sso_provider_rps',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'openid_sso_provider_rps',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Image');

  return $field_instances;
}
