<?php

/**
 * @file
 *   Views integration for the recruiter jobs module.
 */

/**
 * Implements hook_views_data().
 */
function recruiter_job_views_data() {
  $data['node']['job_url'] = array(
    'title' => t('Job URL'),
    'help' => t('The URL for viewing the job ad.'),
    'field' => array(
      'field' => 'nid',
      'handler' => 'recruiter_job_field_job_url',
      'click sortable' => FALSE,
    ),
  );
  return $data;
}
