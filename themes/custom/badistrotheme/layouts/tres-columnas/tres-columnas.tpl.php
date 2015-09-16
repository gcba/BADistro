<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['top']: The top panel in the layout.
 *   $content['middle_top']: The top panel in the layout.
 *   $content['middle']: The middle panel in the layout.
 *   $content['middle_bottom_left']: The middle bottom left panel in the layout.
 *   $content['middle_bottom_center']: The middle bottom center panel in the layout.
 *   $content['middle_bottom_right']: The middle bottom right panel in the layout.
 *   $content['bottom']: The bottom panel in the layout.
 */
?>
<div class="panel-display clearfix panel-layout-tres-columnas" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
	<div class="panel-panel panel-panel-full-width clearfix">
		<div><?php print $content['full']; ?></div>
	</div>
	<div class="container">
		<div class="clearfix">
			<?php print $content['top']; ?>
		</div>
		<div class="clearfix">
			<div class="col-md-4 col-sm-6">
				<div><?php print $content['body-left']; ?></div>
			</div>
			<div class="col-md-4 col-sm-6">
				<div><?php print $content['body-middle']; ?></div>
			</div>
			<div class="col-md-4 col-sm-12">
				<div><?php print $content['body-right']; ?></div>
			</div>
		</div>
		<div class="clearfix">
			<div><?php print $content['bottom']; ?></div>
		</div>
	</div>
</div>