<?php
/**
 * @file
 * recruiter_common.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function recruiter_common_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
