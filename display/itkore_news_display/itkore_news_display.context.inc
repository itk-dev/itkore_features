<?php
/**
 * @file
 * itkore_news_display.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function itkore_news_display_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_configuration';
  $context->description = 'Places news related blocks on news pages';
  $context->tag = 'configuration';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nyheder' => 'nyheder',
        'nyheder/*' => 'nyheder/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-1e5943a2e3f34736bbf7de4509382e08' => array(
          'module' => 'views',
          'delta' => '1e5943a2e3f34736bbf7de4509382e08',
          'region' => 'sidebar_first',
          'weight' => '-28',
        ),
        'views-news_taxonomy_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'news_taxonomy_blocks-block_1',
          'region' => 'sidebar_first',
          'weight' => '-27',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places news related blocks on news pages');
  t('configuration');
  $export['news_configuration'] = $context;

  return $export;
}
