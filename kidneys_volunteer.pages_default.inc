<?php
/**
 * @file
 * kidneys_volunteer.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function kidneys_volunteer_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'volunteer_application_form';
  $page->task = 'page';
  $page->admin_title = 'Volunteer Application Form';
  $page->admin_description = '';
  $page->path = 'volunteer/application/%opp';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'opp' => array(
      'id' => 1,
      'identifier' => 'opp: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_volunteer_application_form__panel';
  $handler->task = 'page';
  $handler->subtask = 'volunteer_application_form';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => 'input.form-text {
  width: 100%;
}
.main {
  background: #eee;
}',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = '50x50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1ad113f3-9186-4cb2-b3ff-a3da2b345fca';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_volunteer_application_form__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-363f748c-8d30-4852-92d9-c2409a16c45f';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'entityform_block-volunteer_application';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'padding-y--lg',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '363f748c-8d30-4852-92d9-c2409a16c45f';
  $display->content['new-363f748c-8d30-4852-92d9-c2409a16c45f'] = $pane;
  $display->panels['left'][0] = 'new-363f748c-8d30-4852-92d9-c2409a16c45f';
  $pane = new stdClass();
  $pane->pid = 'new-5ef28ae8-128e-4ddf-87c7-954215c6eec5';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'volunteer_opportunties-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '%opp:nid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5ef28ae8-128e-4ddf-87c7-954215c6eec5';
  $display->content['new-5ef28ae8-128e-4ddf-87c7-954215c6eec5'] = $pane;
  $display->panels['right'][0] = 'new-5ef28ae8-128e-4ddf-87c7-954215c6eec5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['volunteer_application_form'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'volunteer_application_submission_page';
  $page->task = 'page';
  $page->admin_title = 'Volunteer Application Submission Page';
  $page->admin_description = '';
  $page->path = 'volunteer/application/submission/%fid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'fid' => array(
      'id' => 1,
      'identifier' => 'Entityform Submission: ID',
      'name' => 'entity_id:entityform',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_volunteer_application_submission_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'volunteer_application_submission_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Volunteer Opportunity',
        'keyword' => 'opportunity',
        'name' => 'entity_from_field:field_vol_related_opp-entityform-node',
        'delta' => 0,
        'context' => 'argument_entity_id:entityform_1',
        'id' => 1,
      ),
    ),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flex-center';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%opportunity:title';
  $display->uuid = '96368982-23a3-4bb4-a4ac-0bf50330edfd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_volunteer_application_submission_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e655265d-7df3-496e-8504-de06327545ce';
  $pane->panel = 'main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'entityform:field_base_first_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_entity_id:entityform_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e655265d-7df3-496e-8504-de06327545ce';
  $display->content['new-e655265d-7df3-496e-8504-de06327545ce'] = $pane;
  $display->panels['main'][0] = 'new-e655265d-7df3-496e-8504-de06327545ce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e655265d-7df3-496e-8504-de06327545ce';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['volunteer_application_submission_page'] = $page;

  return $pages;

}
