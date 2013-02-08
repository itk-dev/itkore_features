<?php
/**
 * @file
 * itkore_spotbox.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function itkore_spotbox_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spotbox';
  $view->description = 'Spotbox created from other content types';
  $view->tag = 'itkore';
  $view->base_table = 'node';
  $view->human_name = 'Spotbox';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'block block-secondary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Spotbox title */
  $handler->display->display_options['fields']['field_spotbox_title']['id'] = 'field_spotbox_title';
  $handler->display->display_options['fields']['field_spotbox_title']['table'] = 'field_data_field_spotbox_title';
  $handler->display->display_options['fields']['field_spotbox_title']['field'] = 'field_spotbox_title';
  $handler->display->display_options['fields']['field_spotbox_title']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_spotbox_title']['alter']['path'] = 'node/!1';
  $handler->display->display_options['fields']['field_spotbox_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_spotbox_title']['element_class'] = 'spotbox-title';
  $handler->display->display_options['fields']['field_spotbox_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Spotbox image */
  $handler->display->display_options['fields']['field_spotbox_image']['id'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['table'] = 'field_data_field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['field'] = 'field_spotbox_image';
  $handler->display->display_options['fields']['field_spotbox_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_spotbox_image']['element_class'] = 'spotbox-image';
  $handler->display->display_options['fields']['field_spotbox_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_spotbox_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotbox_image']['settings'] = array(
    'image_style' => 'spotbox_image',
    'image_link' => 'content',
  );
  /* Felt: Image (News title image) */
  $handler->display->display_options['fields']['field_news_title_image']['id'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['table'] = 'field_data_field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['field'] = 'field_news_title_image';
  $handler->display->display_options['fields']['field_news_title_image']['ui_name'] = 'Image (News title image)';
  $handler->display->display_options['fields']['field_news_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_title_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_title_image']['element_class'] = 'spotbox-image';
  $handler->display->display_options['fields']['field_news_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_title_image']['settings'] = array(
    'image_style' => 'spotbox_image',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Text */
  $handler->display->display_options['fields']['field_spotbox_text']['id'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['table'] = 'field_data_field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['field'] = 'field_spotbox_text';
  $handler->display->display_options['fields']['field_spotbox_text']['label'] = '';
  $handler->display->display_options['fields']['field_spotbox_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_spotbox_text']['element_class'] = 'spotbox-content';
  $handler->display->display_options['fields']['field_spotbox_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotbox_text']['element_default_classes'] = FALSE;
  /* Felt: Link */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'spotbox-link';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
    'static_page' => 'static_page',
    'activity' => 'activity',
  );

  /* Display: Spotbox: Default */
  $handler = $view->new_display('block', 'Spotbox: Default', 'spotbox');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Spotbox: Standard';

  /* Display: Spotbox: Alternative Style */
  $handler = $view->new_display('block', 'Spotbox: Alternative Style', 'spotbox_variant');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block block-secondary style-alternative';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Spotbox: Alternative Style';

  /* Display: Spotbox: Image */
  $handler = $view->new_display('block', 'Spotbox: Image', 'spotbox_image');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block block-secondary block-image';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Image (excluded) */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['ui_name'] = 'Image (excluded)';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_title_image']['element_class'] = 'spotbox-image';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_title_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_title_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'spotbox_image',
    'image_link' => '',
  );
  /* Felt: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_title_image]
<div class="coverlayer"><h2 class="block-title">[title]</h2></div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_class'] = 'spotbox-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Content: Manchet (Excluded) */
  $handler->display->display_options['fields']['field_manchet']['id'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['table'] = 'field_data_field_manchet';
  $handler->display->display_options['fields']['field_manchet']['field'] = 'field_manchet';
  $handler->display->display_options['fields']['field_manchet']['ui_name'] = 'Content: Manchet (Excluded)';
  $handler->display->display_options['fields']['field_manchet']['label'] = '';
  $handler->display->display_options['fields']['field_manchet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_manchet']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_manchet']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_manchet']['element_class'] = 'spotbox-content';
  $handler->display->display_options['fields']['field_manchet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_manchet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_manchet']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_manchet']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Content */
  $handler->display->display_options['fields']['field_content']['id'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['table'] = 'field_data_field_content';
  $handler->display->display_options['fields']['field_content']['field'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['label'] = '';
  $handler->display->display_options['fields']['field_content']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_content']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_content']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_content']['element_class'] = 'spotbox-content';
  $handler->display->display_options['fields']['field_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_content']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_content']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Link */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'spotbox-link';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['block_description'] = 'Spotbox: Image';

  /* Display: Spotbox: Alternative 2 */
  $handler = $view->new_display('block', 'Spotbox: Alternative 2', 'spotbox_variant2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block block-secondary style-alt2';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Spotbox: Alternative 2';
  $translatables['spotbox'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Spotbox: Default'),
    t('Spotbox: Standard'),
    t('Spotbox: Alternative Style'),
    t('Spotbox: Image'),
    t('[field_title_image]
<div class="coverlayer"><h2 class="block-title">[title]</h2></div>'),
    t('Spotbox: Alternative 2'),
  );
  $export['spotbox'] = $view;

  return $export;
}
