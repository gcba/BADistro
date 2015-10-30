<footer>
  <div class="container">
    <div class="row">
      <div class="col-md-6">
        <div class="row logo-footer">
          <a href="<?php print $front_page; ?>">
            <img src="<?php print $logo; ?>"/>
          </a>
        </div>
       <?php print render($page['footer_left']); ?>
      </div>
      <div class="col-md-6">
        <?php print render($page['footer_right']); ?>
      </div>
    </div>
  </div>
</footer>