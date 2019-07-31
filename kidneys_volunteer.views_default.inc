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
  $view->name = 'volunteer_office';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Volunteer Office';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Salesforce Mapping Object: Salesforce Mapping */
  $handler->display->display_options['relationships']['salesforce_mapping_object']['id'] = 'salesforce_mapping_object';
  $handler->display->display_options['relationships']['salesforce_mapping_object']['table'] = 'node';
  $handler->display->display_options['relationships']['salesforce_mapping_object']['field'] = 'salesforce_mapping_object';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_base_location_reference_target_id']['id'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['relationships']['field_base_location_reference_target_id']['table'] = 'field_data_field_base_location_reference';
  $handler->display->display_options['relationships']['field_base_location_reference_target_id']['field'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['relationships']['field_base_location_reference_target_id']['label'] = 'location';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_base_address']['id'] = 'field_base_address';
  $handler->display->display_options['fields']['field_base_address']['table'] = 'field_data_field_base_address';
  $handler->display->display_options['fields']['field_base_address']['field'] = 'field_base_address';
  $handler->display->display_options['fields']['field_base_address']['relationship'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['fields']['field_base_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_base_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_base_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_base_phone']['id'] = 'field_base_phone';
  $handler->display->display_options['fields']['field_base_phone']['table'] = 'field_data_field_base_phone';
  $handler->display->display_options['fields']['field_base_phone']['field'] = 'field_base_phone';
  $handler->display->display_options['fields']['field_base_phone']['relationship'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['fields']['field_base_phone']['exclude'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_base_email']['id'] = 'field_base_email';
  $handler->display->display_options['fields']['field_base_email']['table'] = 'field_data_field_base_email';
  $handler->display->display_options['fields']['field_base_email']['field'] = 'field_base_email';
  $handler->display->display_options['fields']['field_base_email']['relationship'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['fields']['field_base_email']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="bg--gray-1">
    <div class="container vol-background md--display--flex flex-wrap--wrap align-items--center">
        <div class="align-self--flex-start padding-top--lg padding-x--md padding-y--md md--padding-y--xxxl width--100 md--width--40 md--padding-right--xxxl margin-y--lg">
            <h1 class="display--inline padding-top--xl font-size--xl md--font-size--xxl font-weight--400">

            Volunteer for <div class="bold font-size--xl">[title]</div></h1>
            <div>[field_base_address]</div>
            <div>[field_base_phone]</div>
        </div>
    </div>
</div>
<div class="show md--hide">
    <img class="width--100 bg--gray-1" src="https://www.kidney.org/sites/default/files/volunteer3b_resize.png" alt="">
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Salesforce Object Mapping: Salesforce Id */
  $handler->display->display_options['arguments']['salesforce_id']['id'] = 'salesforce_id';
  $handler->display->display_options['arguments']['salesforce_id']['table'] = 'salesforce_mapping_object';
  $handler->display->display_options['arguments']['salesforce_id']['field'] = 'salesforce_id';
  $handler->display->display_options['arguments']['salesforce_id']['relationship'] = 'salesforce_mapping_object';
  $handler->display->display_options['arguments']['salesforce_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['salesforce_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['salesforce_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['salesforce_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['salesforce_id']['limit'] = '0';
  /* Filter criterion: Content: Published status */
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
    'office' => 'office',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'salesforce_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field-card-action-links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'office sf id',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['volunteer_office'] = array(
    t('Master'),
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
    t('Salesforce Object'),
    t('location'),
    t('Address'),
    t('Phone'),
    t('Email'),
    t('<div class="bg--gray-1">
    <div class="container vol-background md--display--flex flex-wrap--wrap align-items--center">
        <div class="align-self--flex-start padding-top--lg padding-x--md padding-y--md md--padding-y--xxxl width--100 md--width--40 md--padding-right--xxxl margin-y--lg">
            <h1 class="display--inline padding-top--xl font-size--xl md--font-size--xxl font-weight--400">

            Volunteer for <div class="bold font-size--xl">[title]</div></h1>
            <div>[field_base_address]</div>
            <div>[field_base_phone]</div>
        </div>
    </div>
</div>
<div class="show md--hide">
    <img class="width--100 bg--gray-1" src="https://www.kidney.org/sites/default/files/volunteer3b_resize.png" alt="">
</div>'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['volunteer_office'] = $view;

  $view = new view();
  $view->name = 'volunteer_opportunties';
  $view->description = '';
  $view->tag = 'default, proximity';
  $view->base_table = 'node';
  $view->human_name = 'Volunteer Opportunties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'border-width--xs border-style--solid rounded padding--md';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'salesforce_id' => 'salesforce_id',
    'field_vol_campaign_name' => 'field_vol_campaign_name',
    'field_base_address_administrative_area' => 'field_base_address_administrative_area',
    'title' => 'title',
    'field_base_address_locality' => 'field_base_address_locality',
    'field_vol_type' => 'field_vol_type',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'salesforce_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vol_campaign_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_base_address_administrative_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_base_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vol_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="font-size--lg text-align--center padding--lg center">
<p>We’re sorry, there aren’t any open opportunities near you—for now.  Everyone has unique talents that can help people with kidney disease—don’t let that go to waste!</p>
<p>Help us find the role that’s right for you: Please take a moment to <a class="bold color--gray-4 border-bottom-width--md border-color--orange border-style--solid border-width--none" href="/volunteer/app/a3g3a000002w1drAAA">sign up</a> and we’ll let you know HOW you can change lives everywhere!</p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Salesforce Mapping Object: Salesforce Mapping */
  $handler->display->display_options['relationships']['salesforce_mapping_object']['id'] = 'salesforce_mapping_object';
  $handler->display->display_options['relationships']['salesforce_mapping_object']['table'] = 'node';
  $handler->display->display_options['relationships']['salesforce_mapping_object']['field'] = 'salesforce_mapping_object';
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
  /* Field: Salesforce Object Mapping: Salesforce Id */
  $handler->display->display_options['fields']['salesforce_id']['id'] = 'salesforce_id';
  $handler->display->display_options['fields']['salesforce_id']['table'] = 'salesforce_mapping_object';
  $handler->display->display_options['fields']['salesforce_id']['field'] = 'salesforce_id';
  $handler->display->display_options['fields']['salesforce_id']['relationship'] = 'salesforce_mapping_object_1';
  $handler->display->display_options['fields']['salesforce_id']['exclude'] = TRUE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Opportunity';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'volunteer/app/[salesforce_id]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'color--gray-5 border-bottom-width--sm border-color--orange border-style--solid border-width--none';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_base_address_locality']['id'] = 'field_base_address_locality';
  $handler->display->display_options['fields']['field_base_address_locality']['table'] = 'field_data_field_base_address';
  $handler->display->display_options['fields']['field_base_address_locality']['field'] = 'field_base_address_locality';
  $handler->display->display_options['fields']['field_base_address_locality']['relationship'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['fields']['field_base_address_locality']['label'] = 'Location';
  $handler->display->display_options['fields']['field_base_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_base_address_locality']['alter']['text'] = '[field_base_address_locality], [field_base_address_administrative_area]';
  $handler->display->display_options['fields']['field_base_address_locality']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_vol_type']['id'] = 'field_vol_type';
  $handler->display->display_options['fields']['field_vol_type']['table'] = 'field_data_field_vol_type';
  $handler->display->display_options['fields']['field_vol_type']['field'] = 'field_vol_type';
  $handler->display->display_options['fields']['field_vol_type']['label'] = 'Program';
  $handler->display->display_options['fields']['field_vol_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vol_type']['alter']['text'] = '<div class="display--table">
  <div class="display--table-cell vertical-align--middle">
    <div class="square--xxxs circle border-width--xs border-style--solid type--[field_vol_type-value] margin-right--xxs"></div>
  </div>
  <div class="display--table-cell vertical-align--middle">[field_vol_type]</div>
</div>';
  $handler->display->display_options['fields']['field_vol_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vol_type']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Program';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="display--flex flex-wrap--nowrap flex-direction--row align-items--center justify-content--space-between">
  <div class="">[field_vol_type]</div> 
  <div class="md--show"> <a class="margin-left--md square--sm circle border-width--xs border-style--solid border-color--orange" href="/volunteer/app/[salesforce_id]"><i class="color--orange icon-right-open font-size--sm"></i></a></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Geofield (field_base_geofield) - proximity */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_base_geofield';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['relationship'] = 'field_base_related_office_target_id';
  $handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_base_geofield';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_base_geofield';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Salesforce Object Mapping: Salesforce Id */
  $handler->display->display_options['arguments']['salesforce_id']['id'] = 'salesforce_id';
  $handler->display->display_options['arguments']['salesforce_id']['table'] = 'salesforce_mapping_object';
  $handler->display->display_options['arguments']['salesforce_id']['field'] = 'salesforce_id';
  $handler->display->display_options['arguments']['salesforce_id']['relationship'] = 'salesforce_mapping_object';
  $handler->display->display_options['arguments']['salesforce_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['salesforce_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['salesforce_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['salesforce_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['salesforce_id']['limit'] = '0';
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Geofield (field_base_geofield) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_base_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['relationship'] = 'field_base_related_office_target_id';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '200',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => '',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Find an opportunity near you';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    9 => 0,
    40 => 0,
    7 => 0,
    8 => 0,
    11 => 0,
    14 => 0,
    13 => 0,
    41 => 0,
    15 => 0,
    10 => 0,
    16 => 0,
    17 => 0,
    20 => 0,
    12 => 0,
    38 => 0,
    19 => 0,
    37 => 0,
    18 => 0,
    21 => 0,
    22 => 0,
    39 => 0,
    28 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    30 => 0,
    29 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    42 => 0,
  );
  $handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_base_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_base_geofield';
  /* Filter criterion: Content: Published (field_vol_published) */
  $handler->display->display_options['filters']['field_vol_published_value']['id'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['table'] = 'field_data_field_vol_published';
  $handler->display->display_options['filters']['field_vol_published_value']['field'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['value'] = array(
    'publish' => 'publish',
  );
  /* Filter criterion: Content: Expiration date (field_vol_expiration_date) */
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['id'] = 'field_vol_expiration_date_value';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['table'] = 'field_data_field_vol_expiration_date';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['field'] = 'field_vol_expiration_date_value';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['default_date'] = 'now';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'salesforce_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field-card-action-links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Salesforce Id',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Opportunity Detail */
  $handler = $view->new_display('panel_pane', 'Opportunity Detail', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="color--gray-4 padding-x--lg padding-top--lg font-size--xxl bold line-height--110">[title]</div>';
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
<div class="font-size--sm caps bold color--gray-4">Description</div>
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
<div class="font-size--sm  caps color--gray-4 bold">NKF Office</div>
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
<div class="font-size--sm caps color--gray-4 bold">Opportunity</div>
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
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Published (field_vol_published) */
  $handler->display->display_options['filters']['field_vol_published_value']['id'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['table'] = 'field_data_field_vol_published';
  $handler->display->display_options['filters']['field_vol_published_value']['field'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['value'] = array(
    'publish' => 'publish',
  );
  $handler->display->display_options['argument_input'] = array(
    'salesforce_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field-card-action-links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Salesforce Id',
    ),
  );

  /* Display: opportunities */
  $handler = $view->new_display('panel_pane', 'opportunities', 'volunteer_opportunities');
  $handler->display->display_options['argument_input'] = array(
    'salesforce_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field-card-action-links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Salesforce Id',
    ),
  );

  /* Display: by office */
  $handler = $view->new_display('panel_pane', 'by office', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Volunteer opportunities';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="font-size--lg text-align--center padding--lg center">
<p>We’re sorry, there aren’t any open opportunities for this office</p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Salesforce Mapping Object: Salesforce Mapping */
  $handler->display->display_options['relationships']['salesforce_mapping_object_1']['id'] = 'salesforce_mapping_object_1';
  $handler->display->display_options['relationships']['salesforce_mapping_object_1']['table'] = 'node';
  $handler->display->display_options['relationships']['salesforce_mapping_object_1']['field'] = 'salesforce_mapping_object';
  $handler->display->display_options['relationships']['salesforce_mapping_object_1']['label'] = 'SFO Vol Op';
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
  /* Relationship: Salesforce Mapping Object: Salesforce Mapping */
  $handler->display->display_options['relationships']['salesforce_mapping_object']['id'] = 'salesforce_mapping_object';
  $handler->display->display_options['relationships']['salesforce_mapping_object']['table'] = 'node';
  $handler->display->display_options['relationships']['salesforce_mapping_object']['field'] = 'salesforce_mapping_object';
  $handler->display->display_options['relationships']['salesforce_mapping_object']['relationship'] = 'field_base_related_office_target_id';
  $handler->display->display_options['relationships']['salesforce_mapping_object']['label'] = 'SF Ob Office';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Salesforce Object Mapping: Salesforce Id */
  $handler->display->display_options['arguments']['salesforce_id']['id'] = 'salesforce_id';
  $handler->display->display_options['arguments']['salesforce_id']['table'] = 'salesforce_mapping_object';
  $handler->display->display_options['arguments']['salesforce_id']['field'] = 'salesforce_id';
  $handler->display->display_options['arguments']['salesforce_id']['relationship'] = 'salesforce_mapping_object';
  $handler->display->display_options['arguments']['salesforce_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['salesforce_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['salesforce_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['salesforce_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['salesforce_id']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Published (field_vol_published) */
  $handler->display->display_options['filters']['field_vol_published_value']['id'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['table'] = 'field_data_field_vol_published';
  $handler->display->display_options['filters']['field_vol_published_value']['field'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['value'] = array(
    'publish' => 'publish',
  );
  $handler->display->display_options['filters']['field_vol_published_value']['group'] = 1;
  /* Filter criterion: Content: Expiration date (field_vol_expiration_date) */
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['id'] = 'field_vol_expiration_date_value';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['table'] = 'field_data_field_vol_expiration_date';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['field'] = 'field_vol_expiration_date_value';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['default_date'] = 'now';
  $handler->display->display_options['argument_input'] = array(
    'salesforce_id' => array(
      'type' => 'user',
      'context' => 'entity:bean.field-card-action-links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'office sf id',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: by campaign */
  $handler = $view->new_display('panel_pane', 'by campaign', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Volunteer opportunities';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="font-size--lg text-align--center padding--lg center">
<p>We’re sorry, there aren’t any open opportunities for this event.</p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Salesforce Object Mapping: Salesforce Id */
  $handler->display->display_options['fields']['salesforce_id']['id'] = 'salesforce_id';
  $handler->display->display_options['fields']['salesforce_id']['table'] = 'salesforce_mapping_object';
  $handler->display->display_options['fields']['salesforce_id']['field'] = 'salesforce_id';
  $handler->display->display_options['fields']['salesforce_id']['relationship'] = 'salesforce_mapping_object';
  $handler->display->display_options['fields']['salesforce_id']['label'] = '';
  $handler->display->display_options['fields']['salesforce_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['salesforce_id']['element_label_colon'] = FALSE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Opportunity';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'volunteer/app/[salesforce_id]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'color--gray-5 border-bottom-width--sm border-color--orange border-style--solid border-width--none';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_base_address_locality']['id'] = 'field_base_address_locality';
  $handler->display->display_options['fields']['field_base_address_locality']['table'] = 'field_data_field_base_address';
  $handler->display->display_options['fields']['field_base_address_locality']['field'] = 'field_base_address_locality';
  $handler->display->display_options['fields']['field_base_address_locality']['relationship'] = 'field_base_location_reference_target_id';
  $handler->display->display_options['fields']['field_base_address_locality']['label'] = 'Location';
  $handler->display->display_options['fields']['field_base_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_base_address_locality']['alter']['text'] = '[field_base_address_locality], [field_base_address_administrative_area]';
  $handler->display->display_options['fields']['field_base_address_locality']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_vol_type']['id'] = 'field_vol_type';
  $handler->display->display_options['fields']['field_vol_type']['table'] = 'field_data_field_vol_type';
  $handler->display->display_options['fields']['field_vol_type']['field'] = 'field_vol_type';
  $handler->display->display_options['fields']['field_vol_type']['label'] = 'Program';
  $handler->display->display_options['fields']['field_vol_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vol_type']['alter']['text'] = '<div class="display--table">
  <div class="display--table-cell vertical-align--middle">
    <div class="square--xxxs circle border-width--xs border-style--solid type--[field_vol_type-value] margin-right--xxs"></div>
  </div>
  <div class="display--table-cell vertical-align--middle">[field_vol_type]</div>
</div>';
  $handler->display->display_options['fields']['field_vol_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vol_type']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Program';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="display--flex flex-wrap--nowrap flex-direction--row align-items--center justify-content--space-between">
  <div class="">[field_vol_type]</div> 
  <div class="md--show"> <a class="margin-left--md square--sm circle border-width--xs border-style--solid border-color--orange" href="/volunteer/app/[salesforce_id]"><i class="color--orange icon-right-open font-size--sm"></i></a></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Related SF Campaign (field_vol_related_sf_campaign) */
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['id'] = 'field_vol_related_sf_campaign_value';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['table'] = 'field_data_field_vol_related_sf_campaign';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['field'] = 'field_vol_related_sf_campaign_value';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Published (field_vol_published) */
  $handler->display->display_options['filters']['field_vol_published_value']['id'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['table'] = 'field_data_field_vol_published';
  $handler->display->display_options['filters']['field_vol_published_value']['field'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['value'] = array(
    'publish' => 'publish',
  );
  $handler->display->display_options['filters']['field_vol_published_value']['group'] = 1;
  /* Filter criterion: Content: Expiration date (field_vol_expiration_date) */
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['id'] = 'field_vol_expiration_date_value';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['table'] = 'field_data_field_vol_expiration_date';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['field'] = 'field_vol_expiration_date_value';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['default_date'] = 'now';
  $handler->display->display_options['argument_input'] = array(
    'field_vol_related_sf_campaign_value' => array(
      'type' => 'user',
      'context' => 'entity:bean.field-card-action-links',
      'context_optional' => 0,
      'panel' => '3',
      'fixed' => '',
      'label' => 'campaign sf id',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: first campaign */
  $handler = $view->new_display('panel_pane', 'first campaign', 'panel_pane_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Campaign */
  $handler->display->display_options['fields']['field_vol_campaign_name']['id'] = 'field_vol_campaign_name';
  $handler->display->display_options['fields']['field_vol_campaign_name']['table'] = 'field_data_field_vol_campaign_name';
  $handler->display->display_options['fields']['field_vol_campaign_name']['field'] = 'field_vol_campaign_name';
  $handler->display->display_options['fields']['field_vol_campaign_name']['label'] = '';
  $handler->display->display_options['fields']['field_vol_campaign_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vol_campaign_name']['alter']['text'] = '<div class="padding-y--xs font-size--sm  caps color--gray-4 bold">[field_vol_campaign_name]</div>';
  $handler->display->display_options['fields']['field_vol_campaign_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vol_campaign_name']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_base_address_locality']['label'] = 'Location';
  $handler->display->display_options['fields']['field_base_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_base_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_base_address_locality']['alter']['text'] = '[field_base_address_locality], [field_base_address_administrative_area]';
  $handler->display->display_options['fields']['field_base_address_locality']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="bg--gray-1">
    <div class="container vol-background md--display--flex flex-wrap--wrap align-items--center">
        <div class="align-self--flex-start padding-top--lg padding-x--md padding-y--md md--padding-y--xxxl width--100 md--width--40 md--padding-right--xxxl margin-y--lg">
            <h1 class="display--inline padding-top--xl font-size--xl md--font-size--xxl font-weight--400">

            Volunteer for <div class="bold font-size--xl">[field_vol_campaign_name]</div></h1>

        </div>
    </div>
</div>
<div class="show md--hide">
    <img class="width--100 bg--gray-1" src="https://www.kidney.org/sites/default/files/volunteer3b_resize.png" alt="">
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Related SF Campaign (field_vol_related_sf_campaign) */
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['id'] = 'field_vol_related_sf_campaign_value';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['table'] = 'field_data_field_vol_related_sf_campaign';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['field'] = 'field_vol_related_sf_campaign_value';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_vol_related_sf_campaign_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Published (field_vol_published) */
  $handler->display->display_options['filters']['field_vol_published_value']['id'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['table'] = 'field_data_field_vol_published';
  $handler->display->display_options['filters']['field_vol_published_value']['field'] = 'field_vol_published_value';
  $handler->display->display_options['filters']['field_vol_published_value']['value'] = array(
    'publish' => 'publish',
  );
  $handler->display->display_options['filters']['field_vol_published_value']['group'] = 1;
  /* Filter criterion: Content: Expiration date (field_vol_expiration_date) */
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['id'] = 'field_vol_expiration_date_value';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['table'] = 'field_data_field_vol_expiration_date';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['field'] = 'field_vol_expiration_date_value';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_vol_expiration_date_value']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_vol_related_sf_campaign_value' => array(
      'type' => 'user',
      'context' => 'entity:bean.field-card-action-links',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'campaign sf id',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['volunteer_opportunties'] = array(
    t('Master'),
    t('more'),
    t('search'),
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
    t('<div class="font-size--lg text-align--center padding--lg center">
<p>We’re sorry, there aren’t any open opportunities near you—for now.  Everyone has unique talents that can help people with kidney disease—don’t let that go to waste!</p>
<p>Help us find the role that’s right for you: Please take a moment to <a class="bold color--gray-4 border-bottom-width--md border-color--orange border-style--solid border-width--none" href="/volunteer/app/a3g3a000002w1drAAA">sign up</a> and we’ll let you know HOW you can change lives everywhere!</p>
</div>'),
    t('Salesforce Object'),
    t('office'),
    t('location'),
    t('Salesforce Id'),
    t('<div class="padding-y--xs font-size--sm  caps color--gray-4 bold">[field_vol_campaign_name]</div>'),
    t('Opportunity'),
    t('Location'),
    t('[field_base_address_locality], [field_base_address_administrative_area]'),
    t('Program'),
    t('<div class="display--table">
  <div class="display--table-cell vertical-align--middle">
    <div class="square--xxxs circle border-width--xs border-style--solid type--[field_vol_type-value] margin-right--xxs"></div>
  </div>
  <div class="display--table-cell vertical-align--middle">[field_vol_type]</div>
</div>'),
    t('<div class="display--flex flex-wrap--nowrap flex-direction--row align-items--center justify-content--space-between">
  <div class="">[field_vol_type]</div> 
  <div class="md--show"> <a class="margin-left--md square--sm circle border-width--xs border-style--solid border-color--orange" href="/volunteer/app/[salesforce_id]"><i class="color--orange icon-right-open font-size--sm"></i></a></div>
</div>'),
    t('All'),
    t('Find an opportunity near you'),
    t('Content pane'),
    t('View panes'),
    t('Opportunity Detail'),
    t('<div class="color--gray-4 padding-x--lg padding-top--lg font-size--xxl bold line-height--110">[title]</div>'),
    t('<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm caps bold color--gray-4">Description</div>
<div>[body]</div>
</div>'),
    t('<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm  caps color--gray-4 bold">NKF Office</div>
<div>[title_1]</div>
</div>'),
    t('<div class="padding-top--lg padding-x--lg">
<div class="font-size--sm caps color--gray-4 bold">Opportunity</div>
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
    t('opportunities'),
    t('by office'),
    t('Volunteer opportunities'),
    t('<div class="font-size--lg text-align--center padding--lg center">
<p>We’re sorry, there aren’t any open opportunities for this office</p>
</div>'),
    t('SFO Vol Op'),
    t('SF Ob Office'),
    t('by campaign'),
    t('<div class="font-size--lg text-align--center padding--lg center">
<p>We’re sorry, there aren’t any open opportunities for this event.</p>
</div>'),
    t('first campaign'),
    t('<div class="bg--gray-1">
    <div class="container vol-background md--display--flex flex-wrap--wrap align-items--center">
        <div class="align-self--flex-start padding-top--lg padding-x--md padding-y--md md--padding-y--xxxl width--100 md--width--40 md--padding-right--xxxl margin-y--lg">
            <h1 class="display--inline padding-top--xl font-size--xl md--font-size--xxl font-weight--400">

            Volunteer for <div class="bold font-size--xl">[field_vol_campaign_name]</div></h1>

        </div>
    </div>
</div>
<div class="show md--hide">
    <img class="width--100 bg--gray-1" src="https://www.kidney.org/sites/default/files/volunteer3b_resize.png" alt="">
</div>'),
  );
  $export['volunteer_opportunties'] = $view;

  return $export;
}
