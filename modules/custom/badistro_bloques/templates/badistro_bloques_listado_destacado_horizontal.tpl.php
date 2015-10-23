<div class="panel panel-default panel-tramites">
  <div class="panel-body">
    <div class="docs-colores">
      <span class="bg-success-dk">
        <span class="glyphicon-tramites glyphicon <?php print $icono; ?>"></span>
      </span>
    </div>
    <?php foreach (array_chunk($links, 3) as $key => $row) { ?>
    <div class="row">
      <?php foreach ($row as $item) { ?>
        <?php print $item; ?>
      <?php } ?>
    </div> 
    <?php } ?>
  </div>
</div>