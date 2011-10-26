<?php
/**
 * @file
 * itkore_spotbox_external_link.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function itkore_spotbox_external_link_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_spotbox';
  $strongarm->value = 0;
  $export['comment_anonymous_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_spotbox';
  $strongarm->value = 1;
  $export['comment_default_mode_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_spotbox';
  $strongarm->value = '50';
  $export['comment_default_per_page_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_spotbox';
  $strongarm->value = 1;
  $export['comment_form_location_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_spotbox';
  $strongarm->value = '0';
  $export['comment_preview_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_spotbox';
  $strongarm->value = '2';
  $export['comment_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_spotbox';
  $strongarm->value = 1;
  $export['comment_subject_field_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_spotbox';
  $strongarm->value = '0';
  $export['language_content_type_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_spotbox';
  $strongarm->value = array();
  $export['menu_options_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_spotbox';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodespotbox_spotbox';
  $strongarm->value = array(
    'enable' => '1',
    'always' => '0',
    'views' => array(
      'name' => 'spotbox_internal_link',
      'display_id' => 'spotbox_internal_link',
      'user' => '0',
    ),
  );
  $export['nodespotbox_spotbox'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_spotbox';
  $strongarm->value = array();
  $export['node_options_spotbox'] = $strongarm;

  return $export;
}