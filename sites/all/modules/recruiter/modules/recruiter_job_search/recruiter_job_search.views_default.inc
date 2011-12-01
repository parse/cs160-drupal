<?php
/**
 * @file
 * recruiter_job_search.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function recruiter_job_search_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'job_search';
  $view->description = 'Recruiter job search';
  $view->tag = 'recruiter, job_search, job';
  $view->base_table = 'search_api_index_job_search';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Recruiter jobs';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'changed' => 'changed',
    'title' => 'title',
    'field_job_organization' => 'field_job_organization',
    'field_job_link' => 'field_job_link',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'changed' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_job_organization' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_job_link' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty text.';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Empty.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Node: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'search_api_index_job_search';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Date';
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
  $handler->display->display_options['fields']['changed']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['changed']['format'] = array(
    'type' => 'custom',
    'custom' => 'd M Y',
  );
  /* Field: Node: Job URL */
  $handler->display->display_options['fields']['job_url']['id'] = 'job_url';
  $handler->display->display_options['fields']['job_url']['table'] = 'search_api_index_job_search';
  $handler->display->display_options['fields']['job_url']['field'] = 'job_url';
  $handler->display->display_options['fields']['job_url']['label'] = '';
  $handler->display->display_options['fields']['job_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['job_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['text'] = 'view';
  $handler->display->display_options['fields']['job_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['path'] = '[job_url]';
  $handler->display->display_options['fields']['job_url']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['job_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['link_class'] = 'recruiter-colorbox';
  $handler->display->display_options['fields']['job_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['job_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['job_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['job_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['job_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['job_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['job_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['job_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['job_url']['link_to_entity'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_job_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[job_url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'recruiter-colorbox';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
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
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Node: Organization */
  $handler->display->display_options['fields']['field_job_organization']['id'] = 'field_job_organization';
  $handler->display->display_options['fields']['field_job_organization']['table'] = 'search_api_index_job_search';
  $handler->display->display_options['fields']['field_job_organization']['field'] = 'field_job_organization';
  $handler->display->display_options['fields']['field_job_organization']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_job_organization']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_job_organization']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_job_organization']['link_to_entity'] = 0;
  /* Filter criterion: Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_job_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job_per_file' => 'job_per_file',
    'job_per_link' => 'job_per_link',
    'job_per_template' => 'job_per_template',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_job_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  /* Filter criterion: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_job_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Node: Workflow state */
  $handler->display->display_options['filters']['field_job_workflow_state']['id'] = 'field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state']['table'] = 'search_api_index_job_search';
  $handler->display->display_options['filters']['field_job_workflow_state']['field'] = 'field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state']['value'] = array(
    'published' => 'published',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'search/job';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Job search';
  $handler->display->display_options['menu']['description'] = 'Search for jobs.';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['job_search'] = $view;

  return $export;
}
