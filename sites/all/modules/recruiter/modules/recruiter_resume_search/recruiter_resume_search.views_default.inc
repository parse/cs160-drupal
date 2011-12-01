<?php
/**
 * @file
 * recruiter_resume_search.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function recruiter_resume_search_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'resume_search';
  $view->description = 'Recruiter resume search.';
  $view->tag = 'recruiter, resume';
  $view->base_table = 'search_api_index_resume_search';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Resume search';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'None.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Profile: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'search_api_index_resume_search';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['label']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['label']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['label']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['label']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['label']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['label']['alter']['html'] = 0;
  $handler->display->display_options['fields']['label']['hide_empty'] = 0;
  $handler->display->display_options['fields']['label']['empty_zero'] = 0;
  $handler->display->display_options['fields']['label']['link_to_entity'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['user:name']['id'] = 'user:name';
  $handler->display->display_options['fields']['user:name']['table'] = 'search_api_index_resume_search';
  $handler->display->display_options['fields']['user:name']['field'] = 'user:name';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_resume_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  /* Filter criterion: Profile: Resume state */
  $handler->display->display_options['filters']['field_resume_state']['id'] = 'field_resume_state';
  $handler->display->display_options['filters']['field_resume_state']['table'] = 'search_api_index_resume_search';
  $handler->display->display_options['filters']['field_resume_state']['field'] = 'field_resume_state';
  $handler->display->display_options['filters']['field_resume_state']['value'] = array(
    'visible' => 'visible',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'search_api_index_resume_search';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['label']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['label']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['label']['alter']['external'] = 0;
  $handler->display->display_options['fields']['label']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['label']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['label']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['label']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['label']['alter']['html'] = 0;
  $handler->display->display_options['fields']['label']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['label']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['label']['hide_empty'] = 0;
  $handler->display->display_options['fields']['label']['empty_zero'] = 0;
  $handler->display->display_options['fields']['label']['link_to_entity'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['user:name']['id'] = 'user:name';
  $handler->display->display_options['fields']['user:name']['table'] = 'search_api_index_resume_search';
  $handler->display->display_options['fields']['user:name']['field'] = 'user:name';
  $handler->display->display_options['fields']['user:name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['user:name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['user:name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['user:name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['user:name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['user:name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['user:name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['user:name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['user:name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['user:name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['user:name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['user:name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['user:name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['user:name']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'search/resume';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Resume search';
  $handler->display->display_options['menu']['description'] = 'Search for resumes.';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['resume_search'] = $view;

  return $export;
}
