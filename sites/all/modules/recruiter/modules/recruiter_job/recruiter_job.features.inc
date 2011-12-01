<?php
/**
 * @file
 * recruiter_job.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recruiter_job_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function recruiter_job_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function recruiter_job_node_info() {
  $items = array(
    'job_per_file' => array(
      'name' => t('Job per file upload'),
      'base' => 'node_content',
      'description' => t('Create a new job by uploading a file, e.g. a PDF file.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'job_per_link' => array(
      'name' => t('Job per link'),
      'base' => 'node_content',
      'description' => t('Provide a reference to an already existing job.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'job_per_template' => array(
      'name' => t('Job per template'),
      'base' => 'node_content',
      'description' => t('Create a new job and provide the job details now.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
