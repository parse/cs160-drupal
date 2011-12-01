<?php
/**
 * @file
 * recruiter_resume.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function recruiter_resume_default_rules_configuration() {
  $items = array();
  $items['rules_resume_initialization_insert'] = entity_import('rules_config', '{ "rules_resume_initialization_insert" : {
      "LABEL" : "Resume initialization on insert",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "3" : "3", "6" : "6" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "profile2",
              "param_type" : "resume",
              "param_user" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "resume" : "Resume" } }
          }
        }
      ]
    }
  }');
  $items['rules_resume_initialization_update'] = entity_import('rules_config', '{ "rules_resume_initialization_update" : {
      "LABEL" : "Resume initialization on update",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_update" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "3" : "3", "6" : "6" } },
            "operation" : "OR"
          }
        },
        { "NOT user_has_role" : {
            "account" : [ "account-unchanged" ],
            "roles" : { "value" : { "3" : "3", "6" : "6" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "profile2",
              "param_type" : "resume",
              "param_user" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "resume" : "Resume" } }
          }
        }
      ]
    }
  }');
  $items['rules_resume_status_complete'] = entity_import('rules_config', '{ "rules_resume_status_complete" : {
      "LABEL" : "Update resume status when it is completed",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : [ "profile2_update" ],
      "IF" : [
        { "data_is" : { "data" : [ "profile2:type" ], "value" : "resume" } },
        { "data_is" : { "data" : [ "profile2:field-resume-state" ], "value" : "incomplete" } },
        { "NOT data_is_empty" : { "data" : [ "profile2:field-resume-languages" ] } },
        { "NOT data_is_empty" : { "data" : [ "profile2:field-resume-personal-info" ] } },
        { "NOT data_is_empty" : { "data" : [ "profile2:field-resume-xp" ] } },
        { "NOT data_is_empty" : { "data" : [ "profile2:field-resume-skills-general" ] } },
        { "NOT data_is_empty" : { "data" : [ "profile2:field-resume-skills-it" ] } },
        { "NOT data_is_empty" : { "data" : [ "profile2:field-resume-job-preferences" ] } },
        { "NOT data_is_empty" : { "data" : [ "profile2:field-resume-education" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "profile2:field-resume-state" ], "value" : "visible" } }
      ]
    }
  }');
  return $items;
}
