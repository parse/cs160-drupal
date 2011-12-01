<?php
/**
 * @file
 * recruiter_register.rules_defaults.inc
 */

/**
 * Implementation of hook_default_rules_configuration().
 */
function recruiter_register_default_rules_configuration() {
  $items = array();
  $items['rules_register_as_applicant'] = entity_import('rules_config', '{ "rules_register_as_applicant" : {
      "LABEL" : "Register as applicant",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "site:current-page:path" ], "value" : "user\\/register" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  $items['rules_register_as_recruiter'] = entity_import('rules_config', '{ "rules_register_as_recruiter" : {
      "LABEL" : "Register as recruiter",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "data_is" : {
            "data" : [ "site:current-page:path" ],
            "value" : "user\\/register\\/recruiter"
          }
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  return $items;
}
