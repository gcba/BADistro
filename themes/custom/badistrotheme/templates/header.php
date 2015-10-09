<!-- menu drupal 
<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="container">
    <div class="navbar-header">
      <?php if ($logo): ?>
      <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
      <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
      <?php endif; ?>

     .btn-navbar is used as the toggle for collapsed navbar content 
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
    </div>

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
      <div class="navbar-collapse collapse">
        <nav role="navigation">
          <?php if (!empty($primary_nav)): ?>
            <?php print render($primary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($secondary_nav)): ?>
            <?php print render($secondary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($page['navigation'])): ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>
        </nav>
      </div>
    <?php endif; ?>
  </div>
</header>
-->

<!-- header BADistro -->

<nav class="navbar transparent navbar-fixed-top" role="navigation">
      <nav class="navbar-inner">
        <div class="container-fluid">
          <div class="navbar-header">
            <button type="button" class="navbar-toggle"  data-toggle="collapse" data-target="#example-nav-collapse">
              <span class="sr-only">Toggle navigation</span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
            </button>
            

<!-- titulo del header + buscador-->
 
<div class="logo-BADistro">
 <a href="#"><img src="/BADistro/profiles/badistro/themes/custom/badistrotheme/img/logo-footer.png"/></a>

</div>
</div>

<form class="navbar-form navbar-right" role="search">
        <div class="form-group">
          <input type="text" class="form-control" placeholder="Buscar...">
        </div>
        <button type="submit" class="btn btn-default">Buscar</button>
      </form>
</div>


<!end titulo del header + buscador-->




<div class="separator-nav clearfix"></div>
         
    <div class="collapse navbar-collapse" id="example-nav-collapse">
            <ul class="nav navbar-nav navbar-left">
              <li><a href="index.html">Inicio</a></li>
              <li><a href="music.html">BADistro</a></li>
              <li><a href="pedagogy.html">Componentes</a></li>
              <li><a href="blog.php">Estilos</a></li>
              <li><a href="contact.html">Contacto</a></li>
            </ul>
          </div>
        </div>
      </nav>
    </nav>




<!-- end menu fixed top-->