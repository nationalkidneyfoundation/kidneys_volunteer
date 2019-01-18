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
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_interest_admin" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_interest_admin" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_interest_advocacy" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_interest_advocacy" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_interest_prof_review" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_interest_prof_review" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_interest_screening" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_interest_screening" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_interest_walks" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_interest_walks" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_interest_events" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_interest_events" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_available_daystimes" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_available_daystimes" } },
        { "entity_has_field" : { "entity" : [ "form" ], "field" : "field_vol_available_notes" } },
        { "entity_has_field" : { "entity" : [ "contact" ], "field" : "field_vol_available_notes" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "contact:field-vol-interest-admin" ],
            "value" : [ "form:field-vol-interest-admin" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-interest-advocacy" ],
            "value" : [ "form:field-vol-interest-advocacy" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-interest-prof-review" ],
            "value" : [ "form:field-vol-interest-prof-review" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-interest-screening" ],
            "value" : [ "form:field-vol-interest-screening" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-interest-walks" ],
            "value" : [ "form:field-vol-interest-walks" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-interest-events" ],
            "value" : [ "form:field-vol-interest-events" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-available-daystimes" ],
            "value" : [ "form:field-vol-available-daystimes" ]
          }
        },
        { "data_set" : {
            "data" : [ "contact:field-vol-available-notes" ],
            "value" : [ "form:field-vol-available-notes" ]
          }
        }
      ]
    }
  }');
  $items['rules_volunteer_application_save'] = entity_import('rules_config', '{ "rules_volunteer_application_save" : {
      "LABEL" : "Volunteer Application Save",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "eck" ],
      "ON" : { "volunteer_application_presave" : [] },
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "volunteer-application" ],
            "field" : "field_base_related_contact"
          }
        },
        { "data_is_empty" : { "data" : [ "volunteer-application:field-base-related-contact" ] } },
        { "entity_has_field" : { "entity" : [ "volunteer-application" ], "field" : "field_base_email" } }
      ],
      "DO" : [
        { "component_rules_volunteer_app_connect_existing_contact" : [] },
        { "component_rules_volunteer_app_create_new_contact" : [] }
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
        { "component_rules_volunteer_app_save_vol_preferences" : { "form" : [ "volunteer-app" ], "contact" : [ "created-created" ] } },
        { "entity_save" : { "data" : [ "created-created" ], "immediate" : "1" } },
        { "data_set" : {
            "data" : [ "volunteer-app:field-base-related-contact" ],
            "value" : [ "created-created" ]
          }
        }
      ]
    }
  }');
  return $items;
}
