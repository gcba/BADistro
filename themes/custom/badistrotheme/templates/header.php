<nav class="navbar navbar-default navbar-fixed-top" role="navigation">
  <div class="navbar-inner">
    <div class="container-fluid">
      <div class="container">
        <div class="row">
          <div class="col-md-6">
            <div class="navbar-header">
              <button type="button" class="navbar-toggle"  data-toggle="collapse" data-target="#example-nav-collapse">
                <span class="sr-only"><?php print t('Activar navegación'); ?></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
              </button>
              <?php if ($logo): ?>
              <div class="logo-BADistro">
                <a href="<?php print $front_page; ?>"><img src="<?php print $logo; ?>" alt="<?php print t('Inicio'); ?>" /></a>
              </div>
              <?php endif; ?>
            </div>
          </div>
          <?php if (!empty($page['header_right'])): ?>
          <div class="col-md-6">
            <?php print render($page['header_right']); ?>
          </div>
          <?php endif; ?>
        </div>
      </div>
    </div>
    <div class="collapse navbar-collapse" id="example-nav-collapse">
      <div class="container">
        <div class="row">
          <?php if (!empty($page['header_left'])): ?>
          <div class="col-md-12">
            <?php print render($page['header_left']); ?>
          </div>
          <?php endif; ?>
        </div>
      </div>
    </div>
  </div>
</nav>









