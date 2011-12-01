<?php
/**
 * @file
 * recruiter_common.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function recruiter_common_user_default_roles() {
  $roles = array();

  // Exported role: recruiter
  $roles['recruiter'] = array(
    'name' => 'recruiter',
    'weight' => '3',
  );

  return $roles;
}
