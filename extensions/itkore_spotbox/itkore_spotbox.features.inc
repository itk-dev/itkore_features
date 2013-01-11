<?php
/**
 * @file
 * itkore_spotbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function itkore_spotbox_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function itkore_spotbox_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function itkore_spotbox_image_default_styles() {
  $styles = array();

  // Exported image style: spotbox_image.
  $styles['spotbox_image'] = array(
    'name' => 'spotbox_image',
    'effects' => array(
      2 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '700',
          'height' => '375',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
