<h2><?php echo $titulo; ?></h2>
<ul class="list-group">
  <?php foreach ($links as $link) { ?>
    <li class="list-group-item">
      <?php echo $link; ?>
    </li>
  <?php } ?>
</ul>
<?php if(isset($boton)) { print $boton; } ?>
