<div class="panel panel-default panel-tramites">
  <div class="panel-body">
  <div class="docs-colores">
    <span class="bg-success-dk">
      <span class="glyphicon-tramites glyphicon <?php print $icono; ?>"></span>
    </span>
  </div>
  <?php foreach (array_chunk($links, 1) as $key => $row) { ?>
  <div class="row">
    <div class="item-vertical">
    <?php foreach ($row as $item) { ?>
      <?php print $item; ?>
    <?php } ?>
  </div>
  </div> 
  <?php } ?>
  </div>
</div>