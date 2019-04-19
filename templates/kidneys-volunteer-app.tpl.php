<div class="container">
  <div class="display--flex flex-wrap--wrap">
    <div class="md--width--50 width--100 padding-bottom--lg sm--padding-right--lg">
      <img class="center display--block margin-bottom--md" src="https://www.kidney.org/sites/default/files/volunteerhands_transparent.png">
      <p>Thank you for your interest in becoming a volunteer. We just need some information from you to get started. After you complete the form we'll send you an email so you know we've received your information. Next, someone from our volunteer office will contact you.</p>

      <h2>Volunteer Role</h2>

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
      <div class="max-width--xxl bg--white rounded border border-color--gray-5 border-width--sm padding-y--xxs padding-x--xxl">
        <?php print $form;?>
      </div>
      <p class="font-style--italic">By submitting this form, I agree to the terms of NKF’s Volunteer Service Agreement. NKF volunteers maintain accountability, are extended the right to meaningful duties and fair treatment. In exchange, NKF expects volunteers to perform their assigned duties to the best of their ability and remain loyal to the enterprise goals and procedures. NKF reserves the right to sever ties with any volunteer who fails to adhere to these procedures.</p>
    </div>
    <div class="width--100 margin-y--xxl border-top border-bottom padding-y--lg">
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
