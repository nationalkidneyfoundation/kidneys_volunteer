<?php


function kidneys_volunteer_add_metatags($version = 'main', $name = '') {
  $path = $base . '/' . drupal_get_path('module', 'kidneys_volunteer');
  $url = url(current_path(), array('absolute' => TRUE, 'query' => drupal_get_query_parameters()));

  switch ($version) {
    case 'office':
      $title = 'Volunteer for '. $name;
      $description = 'Better lives and healthier futures start with our volunteers. Become an NKF volunteer and help us carry out our mission.';
      $image = $path . '/images/meta-main.png';
      break;
    case 'campaign':
      $title = 'Volunteer for '. $name;
      $description = 'Better lives and healthier futures start with our volunteers. Become an NKF volunteer and help us carry out our mission.';
      $image = $path . '/images/meta-campaign.png';
      break;
    //walk
    case 'a3c3a000001fTh2AAE':
      $title = 'NKF Volunteer Opportunity: Kidney Walk Volunteer';
      $description = 'Provide logistical or customer service support at a Kidney Walk near you - the nation\'s largest walk to fight kidney disease.';
      $image = $path . '/images/meta-walk.png';
      break;
    //social
    case 'a3c3a000001fTgxAAE':
      $title = 'NKF Volunteer Opportunity: Social Event Volunteer';
      $description = 'Provide logistical and customer service support at an NKF fundraising gala, luncheon or a tasting event.';
      $image = $path . '/images/meta-social.png';
      break;
    // golf
    case 'a3c3a000001fTh7AAE':
      $title = 'NKF Volunteer Opportunity: Golf Classic Volunteer';
      $description = 'Provide logistical or customer service support for the NKF Konica Minolta Golf Classic tournament near you.';
      $image = $path . '/images/meta-golf.png';
      break;
    // babg
    case 'a3c3a000001fThbAAE':
      $title = 'NKF Volunteer Opportunity: Living Donation Program';
      $description = 'Support the delivery of in-person living donation workshops and other opportunities in your community.';
      $image = $path . '/images/meta-babg.png';
      break;
    // admin
    case 'a3c3a000001fThHAAU':
      $title = 'NKF Volunteer Opportunity: Office Support';
      $description = 'Provide part-time support for the day-to-day office activities.';
      $image = $path . '/images/meta-admin.png';
      break;
    // medical
    case 'a3c3a000001fThMAAU':
      $title = 'NKF Volunteer Opportunity: Medical Writer';
      $description = 'Draft and edit content to educate patients on your area of expertise or participate in the peer review process.';
      $image = $path . '/images/meta-medical.png';
      break;
    // keep
    case 'a3c3a000001fThcAAE':
      $title = 'NKF Volunteer Opportunity: Health Fair Volunteer';
      $description = 'Help administer kidney health checks in your area for people at risk for kidney disease.';
      $image = $path . '/images/meta-keep.png';
      break;
    // yk&y
    case 'a3c3a000001fThgAAE':
      $title = 'NKF Volunteer Opportunity: Kidney Health Seminar';
      $description = 'Use your public speaking skills to administer an in-person or web-based kidney health training in your local community.';
      $image = $path . '/images/meta-ykay.png';
      break;
    // media
    case 'a3c3a000001fThCAAU':
      $title = 'NKF Volunteer Opportunity: Media Volunteer';
      $description = 'Assist with public relations and marketing for local events and community-based awareness campaigns.';
      $image = $path . '/images/meta-media.png';
      break;

    case 'main':
    default:
      $title = 'Sign up to volunteer with National Kidney Foundation';
      $description = 'Take control of your kidney health. Answer a few questions and we’ll provide you with personalized information about kidneys and your health.';
      $image = $path . '/images/meta-main.png';
      break;
  }

  // Add url
  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      "property" => "og:url",
      "content" => $url,
    ),
  );
  drupal_add_html_head($element,'og_url');

  // Add page title
  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'title',
      'content' => $title,
    )
  );
  drupal_add_html_head($element, 'title');

  // Add og:title and og:description for the front page
  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      "property" => "og:title",
      "content" => $title,
    ),
  );
  drupal_add_html_head($element,'og_title');

  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      "property" => "twitter:title",
      "content" => $title,
    ),
  );
  drupal_add_html_head($element,'twitter_title');

  // Add description
  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'description',
      'content' => $description,
    )
  );
  drupal_add_html_head($element, 'description');

  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      "property" => "og:description",
      "content" => $description
    ),
  );
  drupal_add_html_head($element,'og_description');

  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      "property" => "twitter:description",
      "content" => $description
    ),
  );
  drupal_add_html_head($element,'twitter_description');

  // Add image.
  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      "property" => "og:image",
      "content" => $image,
    ),
  );
  drupal_add_html_head($element,'og_image');

  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      "property" => "twitter:image",
      "content" => $image,
    ),
  );
  drupal_add_html_head($element,'twitter_image');

  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      "name" => "twitter:card",
      "content" => 'photo',
    ),
  );
  drupal_add_html_head($element,'twitter_card');

}
