<?php
/**
 * @file
 * recruiter_resume.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function recruiter_resume_user_default_permissions() {
  $permissions = array();

  // Exported permission: access overlay
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'administrator',
      1 => 'applicant',
      2 => 'recruiter',
    ),
    'module' => 'overlay',
  );

  // Exported permission: edit any resume profile
  $permissions['edit any resume profile'] = array(
    'name' => 'edit any resume profile',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own resume profile
  $permissions['edit own resume profile'] = array(
    'name' => 'edit own resume profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'applicant',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any resume profile
  $permissions['view any resume profile'] = array(
    'name' => 'view any resume profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'recruiter',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own resume profile
  $permissions['view own resume profile'] = array(
    'name' => 'view own resume profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'applicant',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
