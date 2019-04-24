<?php

/**
 * @file
 * kidneys_volunteer.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kidneys_volunteer_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_demo|entityform|volunteer_application|form';
  $field_group->group_name = 'group_demo';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'volunteer_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tell us a bit about yourself',
    'weight' => '0',
    'children' => array(
      0 => 'field_base_address',
      1 => 'field_base_email',
      2 => 'field_base_first_name',
      3 => 'field_base_last_name',
      4 => 'field_base_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tell us a bit about yourself',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step grid-cell display--block',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_demo|entityform|volunteer_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_skills|entityform|volunteer_application|form';
  $field_group->group_name = 'group_skills';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'volunteer_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skills: tell us about yourself',
    'weight' => '7',
    'children' => array(
      0 => 'field_vol_public_speaking',
      1 => 'field_vol_multilingual',
      2 => 'field_vol_computer_skills',
      3 => 'field_vol_customer_service',
      4 => 'field_vol_licensed_medical_prof',
      5 => 'field_professional_category',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skills: tell us about yourself',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step grid-cell display--block',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_skills|entityform|volunteer_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vol_availability|redhen_contact|general|form';
  $field_group->group_name = 'group_vol_availability';
  $field_group->entity_type = 'redhen_contact';
  $field_group->bundle = 'general';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteer Availability',
    'weight' => '23',
    'children' => array(
      0 => 'field_vol_available_weekday_days',
      1 => 'field_vol_available_weekday_even',
      2 => 'field_vol_available_weekends',
      3 => 'field_vol_available_notes',
      4 => 'field_vol_available_other',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-vol-availability field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vol_availability|redhen_contact|general|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vol_available|entityform|volunteer_application|form';
  $field_group->group_name = 'group_vol_available';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'volunteer_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When are you available?',
    'weight' => '8',
    'children' => array(
      0 => 'field_vol_available_notes',
      1 => 'field_vol_available_weekday_days',
      2 => 'field_vol_available_weekday_even',
      3 => 'field_vol_available_weekends',
      4 => 'field_vol_available_other',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'When are you available?',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step grid-cell display--block',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_vol_available|entityform|volunteer_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vol_interests|redhen_contact|general|form';
  $field_group->group_name = 'group_vol_interests';
  $field_group->entity_type = 'redhen_contact';
  $field_group->bundle = 'general';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteer Interests',
    'weight' => '24',
    'children' => array(
      0 => 'field_vol_fundraising_event',
      1 => 'field_vol_patient_com_support',
      2 => 'field_vol_media',
      3 => 'field_vol_admin_office_support',
      4 => 'field_vol_med_prog_reviewer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-vol-interests field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vol_interests|redhen_contact|general|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vol_interest|entityform|volunteer_application|form';
  $field_group->group_name = 'group_vol_interest';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'volunteer_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How are you interested in volunteering?',
    'weight' => '6',
    'children' => array(
      0 => 'field_vol_patient_com_support',
      1 => 'field_vol_social_events',
      2 => 'field_vol_kidney_walk',
      3 => 'field_vol_golf_classic',
      4 => 'field_vol_media',
      5 => 'field_vol_admin_office_support',
      6 => 'field_vol_med_prog_reviewer',
      7 => 'field_vol_fundraising_event',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'How are you interested in volunteering?',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'step grid-cell display--block',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_vol_interest|entityform|volunteer_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vol_skills|redhen_contact|general|form';
  $field_group->group_name = 'group_vol_skills';
  $field_group->entity_type = 'redhen_contact';
  $field_group->bundle = 'general';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volunteer Skills',
    'weight' => '22',
    'children' => array(
      0 => 'field_vol_computer_skills',
      1 => 'field_vol_customer_service',
      2 => 'field_vol_licensed_medical_prof',
      3 => 'field_vol_multilingual',
      4 => 'field_vol_public_speaking',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-vol-skills field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vol_skills|redhen_contact|general|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('How are you interested in volunteering?');
  t('Skills: tell us about yourself');
  t('Tell us a bit about yourself');
  t('Volunteer Availability');
  t('Volunteer Interests');
  t('Volunteer Skills');
  t('When are you available?');

  return $field_groups;
}
