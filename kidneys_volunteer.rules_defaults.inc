<?php

/**
 * @file
 * kidneys_volunteer.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function kidneys_volunteer_default_rules_configuration() {
  $items = array();
  $items['rules_volunteer_app_save_vol_preferences'] = entity_import('rules_config', '{ "rules_volunteer_app_save_vol_preferences" : {
      "LABEL" : "Volunteer App Save Vol Preferences",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "volunteer" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "form" : { "label" : "form", "type" : "entityform" },
        "contact" : { "label" : "contact", "type" : "redhen_contact" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_fundraising_event" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_fundraising_event" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_media" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_media" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_admin_office_support" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_admin_office_support" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_available_other" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_available_other" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_available_weekday_days" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_available_weekday_days" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_available_notes" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_available_notes" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_computer_skills" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_computer_skills" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_customer_service" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_customer_service" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_licensed_medical_prof" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_licensed_medical_prof" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_multilingual" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_multilingual" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_public_speaking" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_public_speaking" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_available_weekday_even" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_available_weekday_even" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_available_weekends" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_available_weekends" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_med_prog_reviewer" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_med_prog_reviewer" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_professional_category" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_professional_category" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_connection_kidney_disease" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_connection_kidney_disease" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "contact:field-vol-available-notes" ],
            "value" : [ "form:field-vol-available-notes" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-available-weekday-days" ],
            "value" : [ "form:field-vol-available-weekday-days" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-available-weekday-even" ],
            "value" : [ "form:field-vol-available-weekday-even" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-available-weekends" ],
            "value" : [ "form:field-vol-available-weekends" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-available-other" ],
            "value" : [ "form:field-vol-available-other" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-computer-skills" ],
            "value" : [ "form:field-vol-computer-skills" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-customer-service" ],
            "value" : [ "form:field-vol-customer-service" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-licensed-medical-prof" ],
            "value" : [ "form:field-vol-licensed-medical-prof" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-multilingual" ],
            "value" : [ "form:field-vol-multilingual" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-public-speaking" ],
            "value" : [ "form:field-vol-public-speaking" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-fundraising-event" ],
            "value" : [ "form:field-vol-fundraising-event" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-media" ],
            "value" : [ "form:field-vol-media" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-admin-office-support" ],
            "value" : [ "form:field-vol-admin-office-support" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-med-prog-reviewer" ],
            "value" : [ "form:field-vol-med-prog-reviewer" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-professional-category" ],
            "value" : [ "form:field-professional-category" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-connection-kidney-disease" ],
            "value" : [ "form:field-connection-kidney-disease" ]
          }
        }
      ]
    }
  }');
  $items['rules_volunteer_form_app_after_save'] = entity_import('rules_config', '{ "rules_volunteer_form_app_after_save" : {
      "LABEL" : "Volunteer Form App After Save",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "volunteer" ],
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "volunteer_application" : "volunteer_application" } }
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "volunteer\\/application\\/submission\\/[entityform:entityform-id]" } }
      ]
    }
  }');
  $items['rules_volunteer_form_app_connect_existing_contact_'] = entity_import('rules_config', '{ "rules_volunteer_form_app_connect_existing_contact_" : {
      "LABEL" : "Volunteer Form App Connect Existing Contact ",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "volunteer" ],
      "REQUIRES" : [ "rules", "kidneys_misc" ],
      "USES VARIABLES" : { "volunteer_app" : { "label" : "volunteer_app", "type" : "entityform" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "volunteer-app" ], "field" : "field_base_email" } },
        { "entity_has_field" : { "entity" : [ "volunteer-app" ], "field" : "field_base_related_contact" } },
        { "kidneys_misc_exists_by_email" : { "mail" : [ "volunteer-app:field-base-email" ] } }
      ],
      "DO" : [
        { "kidneys_misc_fetch_by_mail" : {
            "USING" : { "mail" : [ "volunteer-app:field-base-email" ] },
            "PROVIDE" : { "fetched_contact" : { "fetched_contact" : "Fetched contact" } }
          }
        },
        { "data_set" : {
            "data" : [ "volunteer-app:field-base-related-contact" ],
            "value" : [ "fetched-contact" ]
          }
        },
        { "component_rules_volunteer_app_save_vol_preferences" : { "form" : [ "volunteer-app" ], "contact" : [ "fetched-contact" ] } }
      ]
    }
  }');
  $items['rules_volunteer_form_app_create_new_contact'] = entity_import('rules_config', '{ "rules_volunteer_form_app_create_new_contact" : {
      "LABEL" : "Volunteer Form App Create New Contact",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "volunteer" ],
      "REQUIRES" : [ "rules", "kidneys_misc" ],
      "USES VARIABLES" : { "volunteer_app" : { "label" : "volunteer_app", "type" : "entityform" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "volunteer-app" ], "field" : "field_base_email" } },
        { "entity_has_field" : { "entity" : [ "volunteer-app" ], "field" : "field_base_related_contact" } },
        { "entity_has_field" : { "entity" : [ "volunteer-app" ], "field" : "field_base_first_name" } },
        { "entity_has_field" : { "entity" : [ "volunteer-app" ], "field" : "field_base_last_name" } },
        { "entity_has_field" : { "entity" : [ "volunteer-app" ], "field" : "field_base_address" } },
        { "NOT kidneys_misc_exists_by_email" : { "mail" : [ "volunteer-app:field-base-email" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "redhen_contact",
              "param_type" : "general",
              "param_first_name" : [ "volunteer-app:field-base-first-name" ],
              "param_last_name" : [ "volunteer-app:field-base-last-name" ],
              "param_redhen_state" : "1"
            },
            "PROVIDE" : { "entity_created" : { "created_created" : "Created contact" } }
          }
        },
        { "data_set" : {
            "data" : [ "created-created:field-address" ],
            "value" : [ "volunteer-app:field-base-address" ]
          }
        },
        { "data_set" : {
            "data" : [ "created-created:redhen-contact-email:value" ],
            "value" : [ "volunteer-app:field-base-email" ]
          }
        },
        { "entity_save" : { "data" : [ "created-created" ], "immediate" : "1" } },
        { "data_set" : {
            "data" : [ "volunteer-app:field-base-related-contact" ],
            "value" : [ "created-created" ]
          }
        },
        { "component_rules_volunteer_app_save_vol_preferences" : { "form" : [ "volunteer-app" ], "contact" : [ "created-created" ] } }
      ]
    }
  }');
  $items['rules_volunteer_form_application_save'] = entity_import('rules_config', '{ "rules_volunteer_form_application_save" : {
      "LABEL" : "Volunteer Form Application Save",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "volunteer" ],
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_presave" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "volunteer_application" : "volunteer_application" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_base_related_contact" } }
      ],
      "DO" : [
        { "component_rules_volunteer_form_app_connect_existing_contact_" : { "volunteer_app" : [ "entityform" ] } },
        { "component_rules_volunteer_form_app_create_new_contact" : { "volunteer_app" : [ "entityform" ] } }
      ]
    }
  }');
  return $items;
}
