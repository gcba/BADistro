<?php foreach (array_chunk($imagenes, 4) as $key => $row) { ?>
	<div class="row">	
		<?php foreach ($row as $k => $item) { ?>
			<div class="col-xs-6 col-md-3">
				<?php print $item['render']; ?>
			</div>
		<?php } ?>
	</div>
<?php } ?>