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

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'volunteer_opps_by_campaign';
  $page->task = 'page';
  $page->admin_title = 'volunteer opps by campaign';
  $page->admin_description = '';
  $page->path = 'volunteer/opportunities/campaign/%sfid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'sfid' => array(
      'id' => 1,
      'identifier' => 'sfid',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_volunteer_opps_by_campaign__panel';
  $handler->task = 'page';
  $handler->subtask = 'volunteer_opps_by_campaign';
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
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'widescreen';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
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
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '36da94b3-7d57-4c84-b727-39cadf4e7ab2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_volunteer_opps_by_campaign__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5300d765-3351-411b-8a72-bd82d4110790';
  $pane->panel = 'nine';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'css hack',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<style>
thead th {
    border-color: inherit;
}
.pill {
    border: 1px solid;
    padding: 5px;
    border-radius: 100px;
    margin-top: 17px;
}
.pill .form-item {
  padding: 0;
}
.pill input {
  border: none;
}

.pill input[type=submit] {
  background-color: #F15E22;
  color: white;
  border-radius: 100px;
  text-transform: uppercase;
  letter-spacing: .11rem;
}

.type--fundraiser,
.type--golf {
  border-color: #F15E22;
  background-color: #F15E22;
}
.type--Media,
.type--media {
  border-color: #FEDC00;
  background-color: #FEDC00; 
}
.type--admin {
  border-color: #048499;
  background-color:  #048499;
}
.type--medical {
  border-color: #1E4497;
  background-color: #1E4497;
}
h2.pane-titleTEST {
    box-shadow: inset 0 -11px 0 0 #f5956d;
    padding-bottom: 0;
display: inline-block;
margin-bottom: 1rem;
}
.mobile-background {
  background-image: url("https://www.kidney.org/sites/default/files/volunteer3b_resize.png");
  background-size: contain;
  background-repeat: no-repeat;
  background-position: 100% 0;
 }
.vol-background {
  background-image: none;
}


@media only screen and (min-width: 52em) {
 .vol-background {
  background-image: url("https://www.kidney.org/sites/default/files/volunteer3b_resize.png");
  background-size: contain;
  background-repeat: no-repeat;
  background-position: 100% 0;
 }
}  


</style>',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5300d765-3351-411b-8a72-bd82d4110790';
  $display->content['new-5300d765-3351-411b-8a72-bd82d4110790'] = $pane;
  $display->panels['nine'][0] = 'new-5300d765-3351-411b-8a72-bd82d4110790';
  $pane = new stdClass();
  $pane->pid = 'new-4587ef3d-fd9a-4776-ab8c-d96a98c4a1e2';
  $pane->panel = 'one';
  $pane->type = 'views_panes';
  $pane->subtype = 'volunteer_opportunties-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_vol_related_sf_campaign_value' => '%sfid:html_safe',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'width--100 center margin-bottom--xxl',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4587ef3d-fd9a-4776-ab8c-d96a98c4a1e2';
  $display->content['new-4587ef3d-fd9a-4776-ab8c-d96a98c4a1e2'] = $pane;
  $display->panels['one'][0] = 'new-4587ef3d-fd9a-4776-ab8c-d96a98c4a1e2';
  $pane = new stdClass();
  $pane->pid = 'new-51f8c8df-d94c-467e-b6e6-ff65cb12ced1';
  $pane->panel = 'one';
  $pane->type = 'views_panes';
  $pane->subtype = 'volunteer_opportunties-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_vol_related_sf_campaign_value' => '%sfid:html_safe',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'prose center margin-bottom--xxl',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '51f8c8df-d94c-467e-b6e6-ff65cb12ced1';
  $display->content['new-51f8c8df-d94c-467e-b6e6-ff65cb12ced1'] = $pane;
  $display->panels['one'][1] = 'new-51f8c8df-d94c-467e-b6e6-ff65cb12ced1';
  $pane = new stdClass();
  $pane->pid = 'new-69289908-d5b3-4014-b2d4-c3ea61d17cd2';
  $pane->panel = 'one';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'back to volunteers',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="padding-y--xxl border-top 1 margin-y--xl padding-x--md">
  <div class="prose center text-align--center">
    <h2>Didn’t find what you’re looking for?</h2>
    <p class="font-size--lg">Take a look at all of our <a class="bold color--gray-4 border-bottom-width--md border-color--orange border-style--solid border-width--none" href="/volunteer/opportunities">volunteer opportunities</a>.</p>
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '69289908-d5b3-4014-b2d4-c3ea61d17cd2';
  $display->content['new-69289908-d5b3-4014-b2d4-c3ea61d17cd2'] = $pane;
  $display->panels['one'][2] = 'new-69289908-d5b3-4014-b2d4-c3ea61d17cd2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['volunteer_opps_by_campaign'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'volunteer_opps_by_office';
  $page->task = 'page';
  $page->admin_title = 'volunteer opps by office';
  $page->admin_description = '';
  $page->path = 'volunteer/opportunities/office/%sfid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'sfid' => array(
      'id' => 1,
      'identifier' => 'sfid',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_volunteer_opps_by_office__panel_context_fd73405b-5d7d-4d42-a74b-a825a227d835';
  $handler->task = 'page';
  $handler->subtask = 'volunteer_opps_by_office';
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
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'widescreen';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
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
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '36da94b3-7d57-4c84-b727-39cadf4e7ab2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_volunteer_opps_by_campaign__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5300d765-3351-411b-8a72-bd82d4110790';
  $pane->panel = 'nine';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'css hack',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<style>
thead th {
    border-color: inherit;
}
.pill {
    border: 1px solid;
    padding: 5px;
    border-radius: 100px;
    margin-top: 17px;
}
.pill .form-item {
  padding: 0;
}
.pill input {
  border: none;
}

.pill input[type=submit] {
  background-color: #F15E22;
  color: white;
  border-radius: 100px;
  text-transform: uppercase;
  letter-spacing: .11rem;
}

.type--fundraiser,
.type--golf {
  border-color: #F15E22;
  background-color: #F15E22;
}
.type--Media,
.type--media {
  border-color: #FEDC00;
  background-color: #FEDC00; 
}
.type--admin {
  border-color: #048499;
  background-color:  #048499;
}
.type--medical {
  border-color: #1E4497;
  background-color: #1E4497;
}
h2.pane-titleTEST {
    box-shadow: inset 0 -11px 0 0 #f5956d;
    padding-bottom: 0;
display: inline-block;
margin-bottom: 1rem;
}
.mobile-background {
  background-image: url("https://www.kidney.org/sites/default/files/volunteer3b_resize.png");
  background-size: contain;
  background-repeat: no-repeat;
  background-position: 100% 0;
 }
.vol-background {
  background-image: none;
}


@media only screen and (min-width: 52em) {
 .vol-background {
  background-image: url("https://www.kidney.org/sites/default/files/volunteer3b_resize.png");
  background-size: contain;
  background-repeat: no-repeat;
  background-position: 100% 0;
 }
}  


</style>',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5300d765-3351-411b-8a72-bd82d4110790';
  $display->content['new-5300d765-3351-411b-8a72-bd82d4110790'] = $pane;
  $display->panels['nine'][0] = 'new-5300d765-3351-411b-8a72-bd82d4110790';
  $pane = new stdClass();
  $pane->pid = 'new-fbdf45f6-1da4-4fe6-8c31-222e5cb99086';
  $pane->panel = 'one';
  $pane->type = 'views_panes';
  $pane->subtype = 'volunteer_office-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'salesforce_id' => '%sfid:html_safe',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'width--100 margin-bottom--xl',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fbdf45f6-1da4-4fe6-8c31-222e5cb99086';
  $display->content['new-fbdf45f6-1da4-4fe6-8c31-222e5cb99086'] = $pane;
  $display->panels['one'][0] = 'new-fbdf45f6-1da4-4fe6-8c31-222e5cb99086';
  $pane = new stdClass();
  $pane->pid = 'new-55535b89-21be-4a0e-af9f-b140280cec01';
  $pane->panel = 'one';
  $pane->type = 'views_panes';
  $pane->subtype = 'volunteer_opportunties-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'salesforce_id' => '%sfid:html_safe',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'center prose margin-bottom--xl',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '55535b89-21be-4a0e-af9f-b140280cec01';
  $display->content['new-55535b89-21be-4a0e-af9f-b140280cec01'] = $pane;
  $display->panels['one'][1] = 'new-55535b89-21be-4a0e-af9f-b140280cec01';
  $pane = new stdClass();
  $pane->pid = 'new-69289908-d5b3-4014-b2d4-c3ea61d17cd2';
  $pane->panel = 'one';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'back to volunteers',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="padding-y--xxl border-top 1 margin-y--xl padding-x--md">
  <div class="prose center text-align--center">
    <h2>Didn’t find what you’re looking for?</h2>
    <p class="font-size--lg">Take a look at all of our <a class="bold color--gray-4 border-bottom-width--md border-color--orange border-style--solid border-width--none" href="/volunteer/opportunities">volunteer opportunities</a>.</p>
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '69289908-d5b3-4014-b2d4-c3ea61d17cd2';
  $display->content['new-69289908-d5b3-4014-b2d4-c3ea61d17cd2'] = $pane;
  $display->panels['one'][2] = 'new-69289908-d5b3-4014-b2d4-c3ea61d17cd2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['volunteer_opps_by_office'] = $page;

  return $pages;

}
