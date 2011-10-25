<?php
/**
 * @file
 * spotbox_external_link.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function itkore_spotbox_external_link_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'spotbox_external_link';
  $view->description = 'Spotboxes with external link';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotbox: External link';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_spotbox_image']['id'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['table'] = 'field_data_field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['field'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_spotbox_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_spotbox_image']['field_api_classes'] = 0;
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_spotbox_text']['id'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['table'] = 'field_data_field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['field'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['element_type'] = '0';
  $handler->display->display_options['fields']['field_spotbox_text']['element_class'] = 'content';
  $handler->display->display_options['fields']['field_spotbox_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_spotbox_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_text']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_spotbox_external_link']['id'] = 'field_spotbox_external_link';
  $handler->display->display_options['fields']['field_spotbox_external_link']['table'] = 'field_data_field_spotbox_external_link';
  $handler->display->display_options['fields']['field_spotbox_external_link']['field'] = 'field_spotbox_external_link';
  $handler->display->display_options['fields']['field_spotbox_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['path'] = '[field_spotbox_external_link-url]';
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['rel'] = 'external';
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['link_class'] = 'link';
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_external_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_spotbox_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotbox_external_link']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotbox' => 'spotbox',
  );

  /* Display: Spotbox: External link */
  $handler = $view->new_display('block', 'Spotbox: External link', 'spotbox_external_link');
  $handler->display->display_options['display_description'] = 'Spotbox with an external link';
  $handler->display->display_options['block_description'] = 'Spotbox: External link';
  $translatables['spotbox_external_link'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_spotbox_external_link-url]'),
    t('[title]'),
    t('Spotbox: External link'),
    t('Spotbox with an external link'),
  );
  $export['spotbox_external_link'] = $view;

  return $export;
}
