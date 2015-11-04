<h2 class="text-left"><?php echo $titulo; ?></h2>
<ul class="list-group">
<?php foreach (array_chunk($links, 3) as $key => $row) { ?>
    <div class="clearfix">
    <?php foreach ($row as $item) { ?>
      <li class="list-group-item col-md-4 col-sm-4">
        <?php echo $item; ?>
      </li>
    <?php } ?>
    </div>
    <?php } ?>
 </ul>
<?php if(isset($boton)) { print $boton; } ?>
