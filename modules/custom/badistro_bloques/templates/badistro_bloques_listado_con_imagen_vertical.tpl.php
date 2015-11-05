<h2 class="text-left"><?php echo $titulo; ?></h2>
<?php foreach ($links as $key => $link) { ?>
  <div class="row-over">
  <?php echo $link; ?>
  </div> 
<?php } ?>
<div class="separator clearfix"></div>  
<?php if(isset($boton)) { print $boton; } ?>