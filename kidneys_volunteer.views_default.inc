<?php

/**
 * @file
 * kidneys_volunteer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kidneys_volunteer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'volunteer_opportunties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Volunteer Opportunties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volunteer Opportunties';
  $handler->display->display_options['css_class'] = 'grid width--100';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-cell overflow--hidden width--100 sm--width--50 md--width--33 ';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_base_related_office_target_id']['id'] = 'field_base_related_office_target_id';
  $handler->display->display_options['relationships']['field_base_related_office_target_id']['table'] = 'field_data_field_base_related_office';
  $handler->display->display_options['relationships']['field_base_related_office_target_id']['field'] = 'field_base_related_office_target_id';
  $handler->display->display_options['relationships']['field_base_related_office_target_id']['label'] = 'office';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_base_location_reference_target_id']['id'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['relationships']['field_base_location_reference_target_id']['table'] = 'field_data_field_base_location_reference';
  $handler->display->display_options['relationships']['field_base_location_reference_target_id']['field'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['relationships']['field_base_location_reference_target_id']['relationship'] = 'field_base_related_office_target_id';
  $handler->display->display_options['relationships']['field_base_location_reference_target_id']['label'] = 'location';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm caps bold color--black">Description</div>
<div>[body]</div>
</div>';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_base_related_office_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="padding-y--xs font-size--sm  caps color--gray-4 bold">[title_1]</div>
';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Campaign */
  $handler->display->display_options['fields']['field_vol_campaign_name']['id'] = 'field_vol_campaign_name';
  $handler->display->display_options['fields']['field_vol_campaign_name']['table'] = 'field_data_field_vol_campaign_name';
  $handler->display->display_options['fields']['field_vol_campaign_name']['field'] = 'field_vol_campaign_name';
  $handler->display->display_options['fields']['field_vol_campaign_name']['label'] = '';
  $handler->display->display_options['fields']['field_vol_campaign_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vol_campaign_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vol_campaign_name']['alter']['text'] = '<div class="padding-y--xs font-size--sm  caps color--gray-4 bold">[field_vol_campaign_name]</div>';
  $handler->display->display_options['fields']['field_vol_campaign_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vol_campaign_name']['hide_empty'] = TRUE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_base_address_administrative_area']['id'] = 'field_base_address_administrative_area';
  $handler->display->display_options['fields']['field_base_address_administrative_area']['table'] = 'field_data_field_base_address';
  $handler->display->display_options['fields']['field_base_address_administrative_area']['field'] = 'field_base_address_administrative_area';
  $handler->display->display_options['fields']['field_base_address_administrative_area']['relationship'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['fields']['field_base_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_base_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_base_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_base_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_base_address_locality']['id'] = 'field_base_address_locality';
  $handler->display->display_options['fields']['field_base_address_locality']['table'] = 'field_data_field_base_address';
  $handler->display->display_options['fields']['field_base_address_locality']['field'] = 'field_base_address_locality';
  $handler->display->display_options['fields']['field_base_address_locality']['relationship'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['fields']['field_base_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_base_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_base_address_locality']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_vol_type']['id'] = 'field_vol_type';
  $handler->display->display_options['fields']['field_vol_type']['table'] = 'field_data_field_vol_type';
  $handler->display->display_options['fields']['field_vol_type']['field'] = 'field_vol_type';
  $handler->display->display_options['fields']['field_vol_type']['label'] = '';
  $handler->display->display_options['fields']['field_vol_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vol_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vol_type']['alter']['text'] = '<span class="bg--gray-4 color--white padding-x--xs font-size--sm caps">[field_vol_type]</span>';
  $handler->display->display_options['fields']['field_vol_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vol_type']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="margin-top--lg margin-right--lg bg--blue--o10 color--gray-4 height--lg1 1position--relative">

  <div class="color--black padding-x--lg padding-top--lg">
    <div class="padding-bottom--xs">[field_vol_type]</div>
    <div class="color--black font-size--xl  bold line-height--100">[title]</div>
  </div>
  <div class="padding-top--xs padding-x--lg font-size--sm  caps color--gray-4 bold"><i class="icon-location display--none"></i>[field_base_address_locality], [field_base_address_administrative_area]</div>
  <p class="color--gray-4 padding-x--lg padding-top--xs">[body]</p>
  <div class="padding-x--lg padding-y--sm bg--blue--o20 position--absolute1 width--100 bottom left right">
    <div class="width--100 grid">
      <div class="grid-cell width--50 text-align--left">
        <a class=" caps bold font-size--sm color--blue" href="/volunteer/application/[nid]">learn more</a>
      </div>
      <div class="grid-cell width--50 text-align--right">
        <a class="button--blue caps bold font-size--sm" href="/volunteer/application/[nid]">apply</a>
      </div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_opportunity' => 'volunteer_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is Active (field_vol_opp_active) */
  $handler->display->display_options['filters']['field_vol_opp_active_value']['id'] = 'field_vol_opp_active_value';
  $handler->display->display_options['filters']['field_vol_opp_active_value']['table'] = 'field_data_field_vol_opp_active';
  $handler->display->display_options['filters']['field_vol_opp_active_value']['field'] = 'field_vol_opp_active_value';
  $handler->display->display_options['filters']['field_vol_opp_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_vol_opp_active_value']['group'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Opportunity Detail */
  $handler = $view->new_display('panel_pane', 'Opportunity Detail', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-cell overflow--hidden width--100';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="color--black padding-x--lg padding-top--lg font-size--xxl bold line-height--110">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm caps bold color--black">Description</div>
<div>[body]</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_base_related_office_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm  caps color--black bold">Related office</div>
<div>[title_1]</div>
</div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Campaign */
  $handler->display->display_options['fields']['field_vol_campaign_name']['id'] = 'field_vol_campaign_name';
  $handler->display->display_options['fields']['field_vol_campaign_name']['table'] = 'field_data_field_vol_campaign_name';
  $handler->display->display_options['fields']['field_vol_campaign_name']['field'] = 'field_vol_campaign_name';
  $handler->display->display_options['fields']['field_vol_campaign_name']['label'] = '';
  $handler->display->display_options['fields']['field_vol_campaign_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vol_campaign_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vol_campaign_name']['alter']['text'] = '<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm caps color--black bold">Related campaign</div>
<div>[field_vol_campaign_name]</div>
</div>';
  $handler->display->display_options['fields']['field_vol_campaign_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vol_campaign_name']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="margin--md  color--gray-4">
[title]
[body]
[field_vol_campaign_name]
[title_1]
  <div class=" padding-bottom--md padding-x--md margin-top--lg padding-top--xxs">
    <div class="display--table width--100">
      <div class="display--table-cell width--50 vertical-align--bottom">
        <div class="grid">
          <div class="grid-cell text-align--center width--100 caps font-size--lg padding-y--xxs bold">share</div>
          <div class="grid-cell width--33 color--gray-5 text-align--center padding--xxs"><a href="#" class="width--100 button--facebook"><i class="icon-facebook"></i> Facebook</a></div>
          <div class="grid-cell width--33 color--gray-5 text-align--center padding--xxs"><a href="#" class="width--100 button--twitter"><i class="icon-twitter"></i> Twitter</a></div>
          <div class="grid-cell width--33 color--gray-5 text-align--center padding--xxs"><a href="#" class="width--100 button--linkedin"><i class="icon-linkedin"></i> Linkedin</a></div>
        </div>
      </div>

    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Geofield */
  $handler->display->display_options['fields']['field_base_geofield']['id'] = 'field_base_geofield';
  $handler->display->display_options['fields']['field_base_geofield']['table'] = 'field_data_field_base_geofield';
  $handler->display->display_options['fields']['field_base_geofield']['field'] = 'field_base_geofield';
  $handler->display->display_options['fields']['field_base_geofield']['relationship'] = 'field_base_related_office_target_id';
  $handler->display->display_options['fields']['field_base_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_base_geofield']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_base_geofield']['alter']['text'] = '<img src="https://api.mapbox.com/styles/v1/mapbox/streets-v9/static/[field_base_geofield-lon],[field_base_geofield-lat],13/400x200@2x?access_token=pk.eyJ1IjoibmtmIiwiYSI6ImNpeXlycHIwdTAwdGozMnBvcHVyb3dsMHUifQ.Ga4ktI5QmMOipTSAG1If7g"/>';
  $handler->display->display_options['fields']['field_base_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_base_geofield']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_base_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_base_geofield']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_base_geofield']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_opportunity' => 'volunteer_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is Active (field_vol_opp_active) */
  $handler->display->display_options['filters']['field_vol_opp_active_value']['id'] = 'field_vol_opp_active_value';
  $handler->display->display_options['filters']['field_vol_opp_active_value']['table'] = 'field_data_field_vol_opp_active';
  $handler->display->display_options['filters']['field_vol_opp_active_value']['field'] = 'field_vol_opp_active_value';
  $handler->display->display_options['filters']['field_vol_opp_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_vol_opp_active_value']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field-card-action-links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['volunteer_opportunties'] = array(
    t('Master'),
    t('Volunteer Opportunties'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('office'),
    t('location'),
    t('[title]'),
    t('<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm caps bold color--black">Description</div>
<div>[body]</div>
</div>'),
    t('<div class="padding-y--xs font-size--sm  caps color--gray-4 bold">[title_1]</div>
'),
    t('<div class="padding-y--xs font-size--sm  caps color--gray-4 bold">[field_vol_campaign_name]</div>'),
    t('<span class="bg--gray-4 color--white padding-x--xs font-size--sm caps">[field_vol_type]</span>'),
    t('<div class="margin-top--lg margin-right--lg bg--blue--o10 color--gray-4 height--lg1 1position--relative">

  <div class="color--black padding-x--lg padding-top--lg">
    <div class="padding-bottom--xs">[field_vol_type]</div>
    <div class="color--black font-size--xl  bold line-height--100">[title]</div>
  </div>
  <div class="padding-top--xs padding-x--lg font-size--sm  caps color--gray-4 bold"><i class="icon-location display--none"></i>[field_base_address_locality], [field_base_address_administrative_area]</div>
  <p class="color--gray-4 padding-x--lg padding-top--xs">[body]</p>
  <div class="padding-x--lg padding-y--sm bg--blue--o20 position--absolute1 width--100 bottom left right">
    <div class="width--100 grid">
      <div class="grid-cell width--50 text-align--left">
        <a class=" caps bold font-size--sm color--blue" href="/volunteer/application/[nid]">learn more</a>
      </div>
      <div class="grid-cell width--50 text-align--right">
        <a class="button--blue caps bold font-size--sm" href="/volunteer/application/[nid]">apply</a>
      </div>
    </div>
  </div>
</div>

'),
    t('All'),
    t('Content pane'),
    t('View panes'),
    t('Opportunity Detail'),
    t('<div class="color--black padding-x--lg padding-top--lg font-size--xxl bold line-height--110">[title]</div>'),
    t('<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm  caps color--black bold">Related office</div>
<div>[title_1]</div>
</div>'),
    t('<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm caps color--black bold">Related campaign</div>
<div>[field_vol_campaign_name]</div>
</div>'),
    t('<div class="margin--md  color--gray-4">
[title]
[body]
[field_vol_campaign_name]
[title_1]
  <div class=" padding-bottom--md padding-x--md margin-top--lg padding-top--xxs">
    <div class="display--table width--100">
      <div class="display--table-cell width--50 vertical-align--bottom">
        <div class="grid">
          <div class="grid-cell text-align--center width--100 caps font-size--lg padding-y--xxs bold">share</div>
          <div class="grid-cell width--33 color--gray-5 text-align--center padding--xxs"><a href="#" class="width--100 button--facebook"><i class="icon-facebook"></i> Facebook</a></div>
          <div class="grid-cell width--33 color--gray-5 text-align--center padding--xxs"><a href="#" class="width--100 button--twitter"><i class="icon-twitter"></i> Twitter</a></div>
          <div class="grid-cell width--33 color--gray-5 text-align--center padding--xxs"><a href="#" class="width--100 button--linkedin"><i class="icon-linkedin"></i> Linkedin</a></div>
        </div>
      </div>

    </div>
  </div>
</div>

'),
    t('<img src="https://api.mapbox.com/styles/v1/mapbox/streets-v9/static/[field_base_geofield-lon],[field_base_geofield-lat],13/400x200@2x?access_token=pk.eyJ1IjoibmtmIiwiYSI6ImNpeXlycHIwdTAwdGozMnBvcHVyb3dsMHUifQ.Ga4ktI5QmMOipTSAG1If7g"/>'),
  );
  $export['volunteer_opportunties'] = $view;

  return $export;
}
