<div class="clearfix panel-layout-una-columna-estrecha" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel-full-width">
    <?php print $content['full']; ?>
  </div>
  <div class="container">
    <div class="col-md-12">
      <div class="row">
        <?php print $content['top']; ?>
      </div>
    </div>
    <div class="separator"></div>
    <!-- Middle column -->
    <div class="col-md-12">
      <div class="row">
        <?php print $content['body-middle']; ?>
      </div>
    </div>
    <!-- Bottom content -->
    <div class="col-md-8 col-md-offset-2">
      <div class="row">
        <?php print $content['bottom']; ?>
      </div>
    </div>
  </div>
</div>