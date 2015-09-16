<div class="clearfix panel-layout-columna-main" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
	<!-- Top content -->
	<div class="panel-panel clearfix">
		<div><?php print $content['top']; ?></div>
	</div>
	<!-- Sidebar content -->
	<div class="col-md-4 col-sm-4 col-xs-12">
		<!-- <nav> ? -->
		<div><?php print $content['sidebar']; ?></div>
	</div>
	<!-- Main content -->
	<div class="col-md-8 col-sm-8 col-xs-12">
		<!-- <article> ? -->
		<div><?php print $content['column']; ?></div>
	</div>
	<!-- Bottom content -->
	<div class="clearfix">
		<div><?php print $content['bottom']; ?></div>
	</div>
</div>