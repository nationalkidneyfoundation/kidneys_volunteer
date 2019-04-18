<div class="container">
  <div class="display--flex flex-wrap--wrap">
    <div class="sm--width--50 width--100 padding-bottom--lg sm--padding-right--lg">
      <div class="margin-bottom--xl">
        <h2 class="pane-title">
          Sign Up to Volunteer
        </h2>
        <p>Thank you for your interest in becoming a volunteer. We just need some information from you to get started. After you complete the form we'll send you an email so you know we've received your information. Next, someone from our volunteer office will contact you.</p>
      </div>
      <div class="bg--white rounded  border border-color--gray-5 border-width--sm padding--md">
        <?php print $form;?>
      </div>
    </div>
    <div class="sm--width--50 width--100 padding-bottom--lg sm--padding-left--lg">
      <div class="padding-x--lg">
        <h1 class=""><?php print $title; ?></h1>
        <?php if(!empty($office)): ?>
          <div class="padding-top--lg padding-x--lg">
            <div class="font-size--sm  caps color--gray-4 bold">NKF Office</div>
            <div><?php $office; ?></div>
          </div>
          <img src="https://api.mapbox.com/styles/v1/mapbox/streets-v9/static/<?php print $lon; ?>,<?php print $lat; ?>,13/400x200@2x?access_token=pk.eyJ1IjoibmtmIiwiYSI6ImNpeXlycHIwdTAwdGozMnBvcHVyb3dsMHUifQ.Ga4ktI5QmMOipTSAG1If7g">
        <?php endif;?>
        <div class=" padding-bottom--md padding-x--md margin-top--lg padding-top--xxs">
          <div class="display--flex flex-wrap--wrap text-align--center">
            <div class="width--100 caps font-size--lg padding-y--xxs bold">share</div>
            <div class="width--33 color--gray-5 padding--xxs">
              <a href="#" class="width--100 button--facebook"><i class="icon-facebook"></i> Facebook</a>
            </div>
            <div class="width--33 color--gray-5 padding--xxs">
              <a data-track="social" data-network="twitter" data-action="share" data-target="" href="https://twitter.com/intent/tweet?url=<?php print $path; ?>" class="width--100 caps button--twitter js--share-link"><i class="icon-twitter"></i> <span class="display--none sm--display--inline">Tweet</span></a>
            </div>
            <div class="width--33 color--gray-5 padding--xxs">
              <a href="#" class="width--100 button--linkedin"><i class="icon-linkedin"></i> Linkedin</a>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
