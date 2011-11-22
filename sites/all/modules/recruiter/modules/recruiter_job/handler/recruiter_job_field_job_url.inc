<?php
// $Id$

/**
 * Field handler for the job URL.
 */
class recruiter_job_field_job_url extends views_handler_field {

  protected $entity_type = 'node';

  /**
   * Use entity_load() to load all entities at once if they aren't loaded yet.
   */
  public function pre_render($results) {
    $this->entities = array();
    foreach ($results as $result) {
      if (is_object($result)) {
        $this->entities[entity_id($this->entity_type, $result)] = $result;
      }
      elseif (is_array($result) && isset($result['entity'])) {
        $id = is_object($result['entity']) ? entity_id($this->entity_type, $result['entity']) : $result['entity'];
        $this->entities[$id] = $result['entity'];
      }
    }
    $this->entities = entity_load($this->entity_type, array_keys($this->entities));
  }

  public function render($result) {
    if (is_object($result)) {
      $id = entity_id($this->entity_type, $result);
    }
    elseif (is_array($result) && isset($result['entity'])) {
      $id = is_object($result['entity']) ? entity_id($this->entity_type, $result['entity']) : $result['entity'];
    }
    if (isset($id)) {
      $node = $this->entities[$id];
      return check_plain(recruiter_job_get_url($node));
    }
  }
}