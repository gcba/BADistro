<?php foreach (array_chunk($links, 1) as $key => $row) { ?>
<div class="row">
  <?php foreach ($row as $item) { ?>
    <?php print $item; ?>
  <?php } ?>
</div> 
<?php } ?>