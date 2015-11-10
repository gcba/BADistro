<div class="panel panel-default">
  <!-- Default panel contents -->
  <div class="panel-heading"><?php print t('Links relacionados'); ?></div>
  <ul class="list-group">
  <?php foreach ($campo as $item) { ?>
    <li class="list-group-item">
      <?php echo l($item['title'], $item['url']); ?>
    </li>
  <?php } ?>
</ul>
</div>
