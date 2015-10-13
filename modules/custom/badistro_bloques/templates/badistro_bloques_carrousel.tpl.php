<div id="badistro-carousel" class="carousel slide" data-ride="carousel">
  <ol class="carousel-indicators">
    <?php foreach (array_reverse($slides) as $key => $slide) { ?>
    <li data-target="#badistro-carousel" data-slide-to="<?php echo $key; ?>" class="<?php echo $key == 0 ? 'active' : ''; ?>"></li>
    <?php } ?>
  </ol>
  <div class="carousel-inner" role="listbox">
    <?php foreach ($slides as $key => $slide) { ?>
      <div class="item <?php echo $key == 0 ? 'active' : ''; ?>">
        <?php echo $slide->imagen; ?>
        <div class="carousel-caption">
          <h3><?php echo $slide->titulo; ?></h3>
          <p><?php echo $slide->caption; ?></p>
        </div>
      </div>
    <?php } ?>
  </div>
  <a class="left carousel-control" href="#badistro-carousel" role="button" data-slide="prev">
    <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
    <span class="sr-only"><?php echo t('Anterior'); ?></span>
  </a>
  <a class="right carousel-control" href="#badistro-carousel" role="button" data-slide="next">
    <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
    <span class="sr-only"><?php echo t('Siguiente'); ?></span>
  </a>
</div>