<div class="container">
  <div class="display--flex flex-wrap--wrap">
    <div class="width--100 margin-y--xl text-align--center">
      <img class="width--md" src="https://www.kidney.org/sites/default/files/volunteerhands_transparent.png">
      <h1 class="md--font-size--xxxl padding-top--sm padding-bottom--lg">Sign Up to Volunteer</h1>
    </div>
    <div class="md--width--50 width--100 padding-bottom--lg sm--padding-right--lg">
      <p>Thank you for your interest in volunteering your time, talent and expertise with NKF. You're already on
        your way to making a measurable impact in the kidney community!</p>
      <p>Please take a moment to provide us with some information about you, your volunteer interests and availability. Once the form has been submitted, a member of our team will be in touch shortly to get you started on your path of service with NKF.</p>
      <h3 class=""><?php print $title; ?></h3>

      <div><?php print $description; ?></div>
      <?php if(!empty($office)): ?>
        <div class="padding-top--lg">
          <div class="font-size--sm  caps color--gray-4 bold">NKF Office</div>
          <div><?php print $office; ?></div>
        </div>
        <!--<img src="https://api.mapbox.com/styles/v1/mapbox/streets-v9/static/<?php print $lon; ?>,<?php print $lat; ?>,13/400x200@2x?access_token=pk.eyJ1IjoibmtmIiwiYSI6ImNpeXlycHIwdTAwdGozMnBvcHVyb3dsMHUifQ.Ga4ktI5QmMOipTSAG1If7g">-->
      <?php endif;?>
    </div>
    <div class="md--width--50 width--100 padding-bottom--lg sm--padding-left--lg">
      <div class="max-width--xxl margin-bottom--lg bg--white rounded border border-color--gray-5 border-width--sm padding-y--xxs padding-x--xxl">
        <?php print $form;?>
      </div>
      <p class="max-width--xxl font-style--italic">By submitting this form, I agree to the terms of NKF’s Volunteer Service Agreement and Volunteer Code of Conduct.</p>
    </div>
    <div class="width--100 margin-y--xxl border-top padding-y--lg">
      <div class=" max-width--xxl center">
        <div class="display--flex flex-wrap--wrap text-align--center">
          <div class="width--100 caps font-size--lg padding-y--xxs bold">share</div>
          <div class="width--33 color--gray-5 padding--xxs">
            <a data-track="social" data-network="facebook" data-action="share" data-target="" href="https://www.facebook.com/sharer/sharer.php?u=<?php print $path; ?>" class="width--100 caps button--facebook js--share-link"><i class="icon-facebook"></i> <span class="display--none sm--display--inline">Share</span></a>
          </div>
          <div class="width--33 color--gray-5 padding--xxs">
            <a data-track="social" data-network="twitter" data-action="share" data-target="" href="https://twitter.com/intent/tweet?url=<?php print $path; ?>" class="width--100 caps button--twitter js--share-link"><i class="icon-twitter"></i> <span class="display--none sm--display--inline">Tweet</span></a>
          </div>
          <div class="width--33 color--gray-5 padding--xxs">
            <a data-track="event" data-category="cta" data-action="email" data-label="" href="mailto:?subject=Shared%20from%20National%20Kidney%20Foundation&amp;body=%3Cp%3EHere%20is%20an%20article%20from%20National%20Kidney%20Foundation%20you%20might%20be%20interested%20in%3A%3C%2Fp%3E%3Cp%3E<?php print $path; ?>" class="width--100 caps button--gray-4"><i class="icon-mail-alt"></i> <span class="display--none sm--display--inline">Email</span></a>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
