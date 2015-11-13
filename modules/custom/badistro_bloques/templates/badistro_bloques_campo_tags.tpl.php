<?php if(sizeof($campo) > 0) { ?>
<div class="pane-campo-tags">
  <h5>Etiquetas</h5>
  <div class="clearfix">
  <?php foreach ($campo as $value) { ?>
    <span class="label label-default"><?php print $value; ?></span>
  <?php } ?>
  </div>
</div>
<?php } ?>
