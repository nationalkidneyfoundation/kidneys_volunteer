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
  $field_group->identifier = 'group_vol_available|entityform|volunteer_application|form';
  $field_group->group_name = 'group_vol_available';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'volunteer_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When are you available?',
    'weight' => '3',
    'children' => array(
      0 => 'field_vol_available_daystimes',
      1 => 'field_vol_available_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'When are you available?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'grid-cell width--100 padding--lg border-bottom text-align--center',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vol_contact|entityform|volunteer_application|form';
  $field_group->group_name = 'group_vol_contact';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'volunteer_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How can we contact you?',
    'weight' => '1',
    'children' => array(
      0 => 'field_base_first_name',
      1 => 'field_base_last_name',
      2 => 'field_base_email',
      3 => 'field_base_address',
      4 => 'field_base_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'How can we contact you?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'grid-cell width--100 padding--lg border-bottom text-align--center',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

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
    'label' => 'What are your interests?',
    'weight' => '2',
    'children' => array(
      0 => 'field_vol_interest_admin',
      1 => 'field_vol_interest_advocacy',
      2 => 'field_vol_interest_prof_review',
      3 => 'field_vol_interest_screening',
      4 => 'field_vol_interest_walks',
      5 => 'field_vol_interest_events',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'What are your interests?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'grid-cell width--100 padding--lg border-bottom text-align--center',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('How can we contact you?');
  t('What are your interests?');
  t('When are you available?');

  return $field_groups;
}
