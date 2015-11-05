<h2 class="text-left"><?php echo $titulo; ?></h2>
<?php foreach (array_chunk($links, 3) as $key => $row) { ?>
  <div class="row row-over">
    <?php foreach ($row as $item) { ?>
    <div class="col-md-4 col-sm-4">
    <?php echo $item; ?>
    </div>
    <?php } ?>
  </div> 
<?php } ?>
<?php if(isset($boton)) { print $boton; } ?>

          
           