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
        'identifier' => 'opportunity',
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
  $display->layout = 'widescreen';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'main' => NULL,
      'one' => NULL,
      'two' => NULL,
      'three' => NULL,
      'four' => NULL,
      'five' => NULL,
      'six' => NULL,
      'seven' => NULL,
      'eight' => NULL,
      'nine' => NULL,
      'ten' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Thanks';
  $display->uuid = '96368982-23a3-4bb4-a4ac-0bf50330edfd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_volunteer_application_submission_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3ec58122-9acf-4d6c-aa97-d581a4c5e4fa';
  $pane->panel = 'one';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="container">
    <div class="prose center">
        <div class="text-align--center">
            <img src="https://www.kidney.org/sites/default/files/volunteerhands_transparent.png" alt="">
            <div class="display--flex margin-y--md align-items--center justify-content--center">
                <div class="font-size--xxl bold padding-right--sm">
                    Thanks
                </div>
                <div class="width--15">
                    <i class="border-width--sn border-style--solid border-color--lime icon-ok color--lime circle width--md height--md font-size--xxxl "></i>
                </div>
            </div>
        </div>
        <div class="margin-bottom--md">
            <p>Thank you for your interest in volunteering your time, talent and expertise with the National Kidney Foundation (NKF). You\'re already on your way to making a measurable impact in the kidney community!</p>

            <p>We have received and are reviewing the information that you\'ve submitted. A member of our team will be in touch shortly to get you started on your path of service with NKF!</p>

            <p>In the interim, please contact <a href="mailto:volunteers@kidney.org">volunteers@kidney.org</a> with any questions you may have.</p>

            <p>Thank you for taking up the fight against kidney disease by our side. </p>

            <p>Gratefully,
                <br> NKF Team</p>
        </div>
    </div>
</div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'width--100',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3ec58122-9acf-4d6c-aa97-d581a4c5e4fa';
  $display->content['new-3ec58122-9acf-4d6c-aa97-d581a4c5e4fa'] = $pane;
  $display->panels['one'][0] = 'new-3ec58122-9acf-4d6c-aa97-d581a4c5e4fa';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['volunteer_application_submission_page'] = $page;

  return $pages;

}
