<div class="panel panel-default">
  <!-- Default panel contents -->
  <div class="panel-heading"><?php print t('Páginas relacionadas'); ?></div>
  <ul class="list-group">
  <?php foreach ($campo as $item) { ?>
    <li class="list-group-item">
      <?php print l($item['entity']->title, 'node/' . $item['entity']->nid); ?>
    </li>
  <?php } ?>
</ul>
</div>