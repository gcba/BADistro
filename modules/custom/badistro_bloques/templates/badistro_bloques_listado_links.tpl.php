<div class="separator clearfix"></div>
<div>
  <h2><?php echo $titulo; ?></h2>
  <ul class="list-group">
    <?php foreach ($links as $link) { ?>
      <li class="list-group-item">
        <?php echo l("<h4>" . $link->titulo . "</h4><p>" . $link->texto . "</p>", "node/" . $link->id, array('html' => TRUE)); ?>
      </li>
    <?php } ?>
  </ul>
  <button type="button" class="btn btn-default btn-lg btn-block">Ver todos trámites</button>
</div>
