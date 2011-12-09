<?php

/**
 * Menu callback; display all achievements for the passed user.
 *
 * @param $account
 *   The user object this request applies against.
 */
function history_user_page($account) {
  drupal_set_title(t('Project History for @name, @id', array('@name' => $account->name, '@id' => $account->uid)));
  
  $build = array();
  return $build;
}
