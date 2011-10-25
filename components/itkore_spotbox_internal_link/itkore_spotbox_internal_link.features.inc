<?php
/**
 * @file
 * spotbox_internal_link.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function itkore_spotbox_internal_link_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function itkore_spotbox_internal_link_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function itkore_spotbox_internal_link_image_default_styles() {
  $styles = array();

  // Exported image style: spotbox_internal_link_image
  $styles['spotbox_internal_link_image'] = array(
    'name' => 'spotbox_internal_link_image',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '375',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
