<div class="clearfix panel-layout-columna-sidebar" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
	<div class="panel-panel-full-width clearfix">
    <?php print $content['full']; ?>
  </div>
  <div class="container">
		<!-- Top content -->
		<div class="col-md-12">
	  	<?php print $content['top']; ?>
	  </div>
	  <div class="clearfix">
			<!-- Main content -->
			<div class="col-md-8 col-sm-8 col-xs-12">
				<div><?php print $content['column']; ?></div>
			</div>
			<!-- Sidebar content -->
			<div class="col-md-4 col-sm-4 col-xs-12">
				<div><?php print $content['sidebar']; ?></div>
			</div>
		</div>
		<!-- Bottom content -->
		<div class="col-md-12">
			<div><?php print $content['bottom']; ?></div>
		</div>
	</div>
</div>