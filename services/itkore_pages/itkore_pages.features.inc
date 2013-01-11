<?php
/**
 * @file
 * itkore_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function itkore_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function itkore_pages_image_default_styles() {
  $styles = array();

  // Exported image style: title_image.
  $styles['title_image'] = array(
    'name' => 'title_image',
    'effects' => array(
      3 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '1000',
          'height' => '300',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function itkore_pages_node_info() {
  $items = array(
    'static_page' => array(
      'name' => t('Pages'),
      'base' => 'node_content',
      'description' => t('Standard pages on the website, placeable in menus.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
