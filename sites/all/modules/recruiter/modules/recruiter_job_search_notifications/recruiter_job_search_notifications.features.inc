<?php
/**
 * @file
 * recruiter_job_search_notifications.features.inc
 */

/**
 * Implementation of hook_default_search_api_saved_searches_settings().
 */
function recruiter_job_search_notifications_default_search_api_saved_searches_settings() {
  $items = array();
  $items['job_search'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "job_search",
    "index_id" : "job_search",
    "enabled" : "1",
    "options" : {
      "registered_choose_mail" : 0,
      "default_true" : true,
      "ids_list" : [],
      "user_select_interval" : 1,
      "interval_options" : { "86400" : "Daily", "604800" : "Weekly" },
      "set_interval" : "86400",
      "mail" : {
        "activate" : {
          "send" : 1,
          "title" : "Activate your saved search at [site:name]",
          "body" : "A saved search on [site:name] with this e-mail address was created.\\r\\nTo activate this saved search, click the following link:\\r\\n\\r\\n[search-api-saved-search:activate-url]\\r\\n\\r\\nIf you didn\'t create this saved search, just ignore this mail and it will be deleted.\\r\\n\\r\\n--  [site:name] team"
        },
        "notify" : {
          "title" : "New results for your saved search at [site:name]",
          "body" : "[user:name],\\r\\n\\r\\nThere are new results for your saved search on [site:name]:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\n--  [site:name] team",
          "results" : "New results for search \\"[search-api-saved-search:name]\\":\\r\\n[search-api-saved-search:items]\\r\\n\\r\\nIf you want to delete this saved search, click here:\\r\\n[search-api-saved-search:delete-url]",
          "result" : "[search-api-saved-search-result:label] ([search-api-saved-search-result:url])"
        }
      },
      "manual" : {
        "allow" : 0,
        "fulltext" : 0,
        "fields" : [],
        "page" : { "path" : "", "fulltext" : "", "direct_filter_params" : "0" }
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}
