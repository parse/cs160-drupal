<?php
/**
 * @file
 * recruiter_common.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function recruiter_common_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_load';
  $strongarm->value = 1;
  $export['colorbox_load'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_path';
  $strongarm->value = 'profiles/recruiter/libraries/colorbox';
  $export['colorbox_path'] = $strongarm;

  return $export;
}
