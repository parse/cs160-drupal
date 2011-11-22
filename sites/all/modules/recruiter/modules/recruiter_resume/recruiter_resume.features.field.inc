<?php
/**
 * @file
 * recruiter_resume.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function recruiter_resume_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_resume_education-field_resume_edu_degree_level'
  $fields['field_collection_item-field_resume_education-field_resume_edu_degree_level'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_edu_degree_level',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'bachelor' => 'Bachelor\'s degree',
          'doctor' => 'Doctorate',
          'master' => 'Master\'s degree',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_education',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_edu_degree_level',
      'label' => 'Degree level',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_education-field_resume_education_instituti'
  $fields['field_collection_item-field_resume_education-field_resume_education_instituti'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_education_instituti',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_education',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_education_instituti',
      'label' => 'Institution name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_education-field_resume_of_study'
  $fields['field_collection_item-field_resume_education-field_resume_of_study'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_of_study',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'fields_of_study',
          ),
          1 => array(
            'content_taxonomy_ignore_in_suggestions' => 1,
            'parent' => 0,
            'vocabulary' => 'tags',
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_education',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_of_study',
      'label' => 'Field of study',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'autocomplete_path' => 'autocomplete_deluxe/taxonomy',
          'content_taxonomy_autocomplete_new_terms' => 'moderate',
          'size' => 60,
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_education-field_resume_summary'
  $fields['field_collection_item-field_resume_education-field_resume_summary'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_summary',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_education',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Additional information, i.e. topic of thesis, specialization, ...',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_summary',
      'label' => 'Summary',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_education-field_resume_time_period'
  $fields['field_collection_item-field_resume_education-field_resume_time_period'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_time_period',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'year' => 'year',
        ),
        'profile2_private' => FALSE,
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => 'required',
        'tz_handling' => 'none',
      ),
      'translatable' => '1',
      'type' => 'datestamp',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_education',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_time_period',
      'label' => 'Time period',
      'required' => 1,
      'settings' => array(
        'default' => array(
          'default_value_code' => '',
          'default_value_code2' => '',
        ),
        'default_format' => 'medium',
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'advanced' => array(
            'label_position' => 'within',
            'text_parts' => array(
              'day' => '0',
              'hour' => '0',
              'minute' => '0',
              'month' => '0',
              'second' => '0',
              'year' => '0',
            ),
          ),
          'format' => array(
            'input_format_custom' => '',
          ),
          'increment' => '1',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'within',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-30:+0',
        ),
        'type' => 'date_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_job_preferences-field_resume_job_availability'
  $fields['field_collection_item-field_resume_job_preferences-field_resume_job_availability'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_job_availability',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'year' => 'year',
        ),
        'profile2_private' => FALSE,
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '1',
      'type' => 'datestamp',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_job_preferences',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_job_availability',
      'label' => 'Available to start',
      'required' => 0,
      'settings' => array(
        'default' => array(
          'default_value_code' => '',
        ),
        'default_format' => 'medium',
        'default_value' => 'now',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'advanced' => array(
            'label_position' => 'within',
            'text_parts' => array(
              'day' => '0',
              'hour' => '0',
              'minute' => '0',
              'month' => '0',
              'second' => '0',
              'year' => '0',
            ),
          ),
          'format' => array(
            'input_format_custom' => '',
          ),
          'increment' => '1',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'within',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-0:+7',
        ),
        'type' => 'date_select',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_job_preferences-field_resume_job_title'
  $fields['field_collection_item-field_resume_job_preferences-field_resume_job_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_job_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_job_preferences',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_job_title',
      'label' => 'Desired job title',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_job_preferences-field_resume_jobpref_field'
  $fields['field_collection_item-field_resume_job_preferences-field_resume_jobpref_field'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_jobpref_field',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'occupational_fields',
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_job_preferences',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_jobpref_field',
      'label' => 'Desired occupation',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_job_preferences-field_resume_region'
  $fields['field_collection_item-field_resume_job_preferences-field_resume_region'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_region',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'geography',
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_job_preferences',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_region',
      'label' => 'Desired region',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_languages-field_resume_languages_level'
  $fields['field_collection_item-field_resume_languages-field_resume_languages_level'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_languages_level',
      'foreign keys' => array(),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'term_level',
      'settings' => array(
        'levels' => '1|Basic
2|Intermediate
3|Fluent
4|Native',
        'profile2_private' => FALSE,
        'voc' => 'languages',
      ),
      'translatable' => '1',
      'type' => 'term_level',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_languages',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'term_level',
          'settings' => array(),
          'type' => 'term_level_group',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_languages_level',
      'label' => 'Languages',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'term_level',
        'settings' => array(
          'tag_cloud' => 1,
          'term_entries_limit_per_group' => '3',
        ),
        'type' => 'term_level_widget',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_languages-field_resume_notes'
  $fields['field_collection_item-field_resume_languages-field_resume_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_languages',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_notes',
      'label' => 'Additional notes',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_personal_info-field_resume_address'
  $fields['field_collection_item-field_resume_personal_info-field_resume_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'addressfield',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_personal_info',
      'default_value' => array(
        0 => array(
          'administrative_area' => '',
          'country' => 'US',
          'element_key' => 'field_collection_item|field_resume_personal_info|field_resume_address|und|0',
          'first_name' => '',
          'last_name' => '',
          'locality' => '',
          'postal_code' => '',
          'premise' => '',
          'thoroughfare' => '',
          'xal' => '',
          'xnl' => '<NameDetails/>
',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_address',
      'label' => 'Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'format_handlers' => array(
            0 => 'address',
            1 => 'name-full',
          ),
          'name_format' => 'name_line',
        ),
        'type' => 'addressfield_standard',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_personal_info-field_resume_phone'
  $fields['field_collection_item-field_resume_personal_info-field_resume_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_phone',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_personal_info',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_personal_info-field_resume_photo'
  $fields['field_collection_item-field_resume_personal_info-field_resume_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'profile2_private' => FALSE,
        'uri_scheme' => 'private',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_personal_info',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_photo',
      'label' => 'Photo',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'file_directory' => 'photo',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '1 MB',
        'max_resolution' => '500x500',
        'min_resolution' => '100x100',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_skills_general-field_resume_notes'
  $fields['field_collection_item-field_resume_skills_general-field_resume_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_skills_general',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_notes',
      'label' => 'Additional notes',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_skills_general-field_resume_skills_general_lev'
  $fields['field_collection_item-field_resume_skills_general-field_resume_skills_general_lev'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_skills_general_lev',
      'foreign keys' => array(),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'term_level',
      'settings' => array(
        'levels' => '1|Basic
2|Intermediate
3|Expert',
        'profile2_private' => FALSE,
        'voc' => 'general_skills',
      ),
      'translatable' => '1',
      'type' => 'term_level',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_skills_general',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'term_level',
          'settings' => array(),
          'type' => 'term_level_group',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_skills_general_lev',
      'label' => 'General skills',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'term_level',
        'settings' => array(
          'tag_cloud' => 1,
          'term_entries_limit_per_group' => '3',
        ),
        'type' => 'term_level_widget',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_skills_it-field_resume_notes'
  $fields['field_collection_item-field_resume_skills_it-field_resume_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_skills_it',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_notes',
      'label' => 'Additional notes',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_skills_it-field_resume_skills_it_level'
  $fields['field_collection_item-field_resume_skills_it-field_resume_skills_it_level'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_skills_it_level',
      'foreign keys' => array(),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'term_level',
      'settings' => array(
        'levels' => '1|Basic
2|Intermediate
3|Expert',
        'profile2_private' => FALSE,
        'voc' => 'it_skills',
      ),
      'translatable' => '1',
      'type' => 'term_level',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_skills_it',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'term_level',
          'settings' => array(),
          'type' => 'term_level_group',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_skills_it_level',
      'label' => 'IT skills',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'term_level',
        'settings' => array(
          'tag_cloud' => 1,
          'term_entries_limit_per_group' => '3',
        ),
        'type' => 'term_level_widget',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_xp-field_resume_job_title'
  $fields['field_collection_item-field_resume_xp-field_resume_job_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_job_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_xp',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_job_title',
      'label' => 'Job title',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_xp-field_resume_summary'
  $fields['field_collection_item-field_resume_xp-field_resume_summary'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_summary',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_xp',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_summary',
      'label' => 'Summary',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_xp-field_resume_time_period'
  $fields['field_collection_item-field_resume_xp-field_resume_time_period'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_time_period',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'year' => 'year',
        ),
        'profile2_private' => FALSE,
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => 'required',
        'tz_handling' => 'none',
      ),
      'translatable' => '1',
      'type' => 'datestamp',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_xp',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_time_period',
      'label' => 'Time period',
      'required' => 1,
      'settings' => array(
        'default' => array(
          'default_value_code' => '',
          'default_value_code2' => '',
        ),
        'default_format' => 'medium',
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'advanced' => array(
            'label_position' => 'within',
            'text_parts' => array(
              'day' => '0',
              'hour' => '0',
              'minute' => '0',
              'month' => '0',
              'second' => '0',
              'year' => '0',
            ),
          ),
          'format' => array(
            'input_format_custom' => '',
          ),
          'increment' => '1',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'within',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-30:+0',
        ),
        'type' => 'date_select',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_xp-field_resume_xp_occupation_field'
  $fields['field_collection_item-field_resume_xp-field_resume_xp_occupation_field'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_xp_occupation_field',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'occupational_fields',
          ),
          1 => array(
            'content_taxonomy_ignore_in_suggestions' => 1,
            'parent' => 0,
            'vocabulary' => 'tags',
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_xp',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_xp_occupation_field',
      'label' => 'Occupational field',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'autocomplete_path' => 'autocomplete_deluxe/taxonomy',
          'content_taxonomy_autocomplete_new_terms' => 'moderate',
          'size' => 60,
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_resume_xp-field_resume_xp_organization'
  $fields['field_collection_item-field_resume_xp-field_resume_xp_organization'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_xp_organization',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_resume_xp',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_resume_xp_organization',
      'label' => 'Company name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'profile2-resume-field_resume_education'
  $fields['profile2-resume-field_resume_education'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_education',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'resume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'account' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_resume_education',
      'label' => 'Education',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'profile2-resume-field_resume_job_preferences'
  $fields['profile2-resume-field_resume_job_preferences'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_job_preferences',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'resume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'account' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => '',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => '',
            'delete' => '',
            'description' => 1,
            'edit' => '',
          ),
          'type' => 'field_collection_view',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_resume_job_preferences',
      'label' => 'Job preferences',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'profile2-resume-field_resume_languages'
  $fields['profile2-resume-field_resume_languages'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_languages',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'resume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'account' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => '',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => '',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_resume_languages',
      'label' => 'Language',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'profile2-resume-field_resume_personal_info'
  $fields['profile2-resume-field_resume_personal_info'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_personal_info',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
        'profile2_private' => 1,
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'resume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'account' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => '',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => '',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_resume_personal_info',
      'label' => 'Personal information',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'profile2-resume-field_resume_skills_general'
  $fields['profile2-resume-field_resume_skills_general'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_skills_general',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'resume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'account' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => '',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => '',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_resume_skills_general',
      'label' => 'General skills',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'profile2-resume-field_resume_skills_it'
  $fields['profile2-resume-field_resume_skills_it'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_skills_it',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'resume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'account' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => '',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => '',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_resume_skills_it',
      'label' => 'IT skills',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'profile2-resume-field_resume_state'
  $fields['profile2-resume-field_resume_state'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_state',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'hidden' => 'hidden',
          'incomplete' => 'incomplete',
          'visible' => 'visible',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 1,
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'resume',
      'default_value' => array(
        0 => array(
          'value' => 'incomplete',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_resume_state',
      'label' => 'Resume state',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'profile2-resume-field_resume_xp'
  $fields['profile2-resume-field_resume_xp'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resume_xp',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'resume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'account' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_view',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_resume_xp',
      'label' => 'Work experience',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '5',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional information, i.e. topic of thesis, specialization, ...');
  t('Additional notes');
  t('Address');
  t('Available to start');
  t('Company name');
  t('Degree level');
  t('Desired job title');
  t('Desired occupation');
  t('Desired region');
  t('Education');
  t('Field of study');
  t('General skills');
  t('IT skills');
  t('Institution name');
  t('Job preferences');
  t('Job title');
  t('Language');
  t('Languages');
  t('Occupational field');
  t('Personal information');
  t('Phone');
  t('Photo');
  t('Resume state');
  t('Summary');
  t('Time period');
  t('Work experience');

  return $fields;
}
