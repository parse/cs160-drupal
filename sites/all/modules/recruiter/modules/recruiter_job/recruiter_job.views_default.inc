<?php
/**
 * @file
 * recruiter_job.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function recruiter_job_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'job_administration';
  $view->description = 'View all jobs in the system';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Job administration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Job administration';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any job_per_link content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'changed' => 'changed',
    'field_job_workflow_state' => 'field_job_workflow_state',
    'field_job_organization' => 'field_job_organization',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
    ),
    'field_job_workflow_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_job_organization' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Content: Workflow state */
  $handler->display->display_options['fields']['field_job_workflow_state']['id'] = 'field_job_workflow_state';
  $handler->display->display_options['fields']['field_job_workflow_state']['table'] = 'field_data_field_job_workflow_state';
  $handler->display->display_options['fields']['field_job_workflow_state']['field'] = 'field_job_workflow_state';
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_job_workflow_state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_job_workflow_state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_job_workflow_state']['field_api_classes'] = 0;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_job_organization']['id'] = 'field_job_organization';
  $handler->display->display_options['fields']['field_job_organization']['table'] = 'field_data_field_job_organization';
  $handler->display->display_options['fields']['field_job_organization']['field'] = 'field_job_organization';
  $handler->display->display_options['fields']['field_job_organization']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_job_organization']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_job_organization']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_job_organization']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_job_organization']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['field_api_classes'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job_per_file' => 'job_per_file',
    'job_per_link' => 'job_per_link',
    'job_per_template' => 'job_per_template',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Job type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  /* Filter criterion: Content: Organization (field_job_organization) */
  $handler->display->display_options['filters']['field_job_organization_value']['id'] = 'field_job_organization_value';
  $handler->display->display_options['filters']['field_job_organization_value']['table'] = 'field_data_field_job_organization';
  $handler->display->display_options['filters']['field_job_organization_value']['field'] = 'field_job_organization_value';
  $handler->display->display_options['filters']['field_job_organization_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_job_organization_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_organization_value']['expose']['operator_id'] = 'field_job_organization_value_op';
  $handler->display->display_options['filters']['field_job_organization_value']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_job_organization_value']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_job_organization_value']['expose']['operator'] = 'field_job_organization_value_op';
  $handler->display->display_options['filters']['field_job_organization_value']['expose']['identifier'] = 'field_job_organization_value';
  $handler->display->display_options['filters']['field_job_organization_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '1970-01-01 00:00:00';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Job created date';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>';
  $handler->display->display_options['filters']['changed']['value']['value'] = '1970-01-01 00:00:00';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Job updated date';
  $handler->display->display_options['filters']['changed']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/recruiter/job';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Job administration';
  $handler->display->display_options['menu']['description'] = 'Manage all jobs on your site.';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'management';
  $export['job_administration'] = $view;

  $view = new view;
  $view->name = 'job_manage';
  $view->description = 'UI for managing jobs.';
  $view->tag = 'recruiter, job';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Manage jobs';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'type' => 'type',
    'title' => 'title',
    'entity_id' => 'entity_id',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '  ',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add links';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<ul class="action-links">
<li><a href="/?q=node/add/job-per-link&destination=manage/job">Add job per link</a></li>
<li><a href="/?q=node/add/job-per-file&destination=manage/job">Add job per file upload</a></li>
<li><a href="/?q=node/add/job-per-template&destination=manage/job">Add job per template</a></li>
</ul>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty text.';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Empty.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Content: Job URL */
  $handler->display->display_options['fields']['job_url']['id'] = 'job_url';
  $handler->display->display_options['fields']['job_url']['table'] = 'node';
  $handler->display->display_options['fields']['job_url']['field'] = 'job_url';
  $handler->display->display_options['fields']['job_url']['label'] = '';
  $handler->display->display_options['fields']['job_url']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['job_url']['alter']['text'] = 'preview';
  $handler->display->display_options['fields']['job_url']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['job_url']['alter']['path'] = '[job_url]';
  $handler->display->display_options['fields']['job_url']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['job_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['link_class'] = 'recruiter-colorbox';
  $handler->display->display_options['fields']['job_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['job_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['job_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['job_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['job_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['job_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['job_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['job_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['job_url']['hide_alter_empty'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job_per_file' => 'job_per_file',
    'job_per_link' => 'job_per_link',
    'job_per_template' => 'job_per_template',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Content: Workflow state (field_job_workflow_state) */
  $handler->display->display_options['filters']['field_job_workflow_state_value']['id'] = 'field_job_workflow_state_value';
  $handler->display->display_options['filters']['field_job_workflow_state_value']['table'] = 'field_data_field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state_value']['field'] = 'field_job_workflow_state_value';
  $handler->display->display_options['filters']['field_job_workflow_state_value']['value'] = array(
    'published' => 'published',
  );

  /* Display: Page published */
  $handler = $view->new_display('page', 'Page published', 'page_1');
  $handler->display->display_options['path'] = 'manage/job/published';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Published';
  $handler->display->display_options['menu']['description'] = 'Manage published jobs.';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Manage jobs';
  $handler->display->display_options['tab_options']['description'] = 'Manage your jobs.';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page unpublished */
  $handler = $view->new_display('page', 'Page unpublished', 'page_2');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job_per_link' => 'job_per_link',
    'job_per_template' => 'job_per_template',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Content: Workflow state (field_job_workflow_state) */
  $handler->display->display_options['filters']['field_job_workflow_state_value']['id'] = 'field_job_workflow_state_value';
  $handler->display->display_options['filters']['field_job_workflow_state_value']['table'] = 'field_data_field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state_value']['field'] = 'field_job_workflow_state_value';
  $handler->display->display_options['filters']['field_job_workflow_state_value']['value'] = array(
    'unpublished' => 'unpublished',
  );
  $handler->display->display_options['path'] = 'manage/job/unpublished';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Unpublished';
  $handler->display->display_options['menu']['description'] = 'Manage unpublished jobs.';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['job_manage'] = $view;

  return $export;
}
