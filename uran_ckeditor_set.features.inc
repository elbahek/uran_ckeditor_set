<?php
/**
 * @file
 * uran_ckeditor_set.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uran_ckeditor_set_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
