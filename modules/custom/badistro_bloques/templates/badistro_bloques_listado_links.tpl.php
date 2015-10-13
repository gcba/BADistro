<h2><?php echo $titulo; ?></h2>
<ul class="list-group">
  <?php foreach ($links as $link) { ?>
    <li class="list-group-item">
      <?php echo $link; ?>
    </li>
  <?php } ?>
</ul>
<button type="button" class="btn btn-default btn-lg btn-block">Ver todos trámites</button>
