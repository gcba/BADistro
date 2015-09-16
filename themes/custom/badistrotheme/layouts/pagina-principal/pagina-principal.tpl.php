<?php
/**
 * @file
 * Template for a 1 column panel layout.
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
<div class="homepage_content">
  <div class="news-slide">
    <div class="container">
        <?php if(isset($content['top'])): ?>
        <div><?php print $content['top']; ?></div>
      <?php endif; ?>
    </div>
  </div>
  <div class="panel-col-middle">
    <?php if(isset($content['middle'])): ?>
    <?php print $content['middle']; ?>
  <?php endif; ?>
  </div>
  <div class="panel-col-middle-bottom-left">
    <?php if(isset($content['middle_bottom_left'])): ?>
    <div><?php print $content['middle_bottom_left']; ?></div>
  <?php endif; ?>
  </div>
  <div class="panel-col-middle-bottom-center">
    <?php if(isset($content['middle_bottom_center'])): ?>
    <div><?php print $content['middle_bottom_center']; ?></div>
  <?php endif; ?>
  </div>
  <div class="panel-col-middle-bottom-right">
    <?php if(isset($content['middle_bottom_right'])): ?>
    <div><?php print $content['middle_bottom_right']; ?></div>
  <?php endif; ?>
  </div>
  <div class="panel-col-bottom">
    <?php if(isset($content['bottom'])): ?>
    <div><?php print $content['bottom']; ?></div>
  <?php endif; ?>
  </div>
</div>