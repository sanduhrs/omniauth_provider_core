<?php

/**
 * Implementation of hook_strongarm().
 */
function omniauth_provider_core_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_profile';
  $strongarm->value = array();
  $export['content_profile_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_profile';
  $strongarm->value = 1;
  $export['content_profile_use_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_cp_field_map_profile';
  $strongarm->value = array(
    'http://axschema.org/company/title' => 'title',
    'http://axschema.org/namePerson/first' => 'field_name_person_first',
    'http://axschema.org/namePerson/prefix' => 'field_name_person_prefix',
    'http://axschema.org/namePerson/last' => 'field_name_person_last',
    'http://axschema.org/birthDate/birthday' => 'field_birth_date',
    'http://axschema.org/contact/postalCode/home' => 'field_contact_postal_code_home',
    'http://axschema.org/contact/city/home' => 'field_contact_city_home',
  );
  $export['openid_cp_field_map_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_profile_map';
  $strongarm->value = array(
    'http://axschema.org/namePerson/friendly' => 'name',
    'http://axschema.org/contact/email' => 'mail',
  );
  $export['openid_profile_map'] = $strongarm;

  return $export;
}
