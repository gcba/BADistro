<?php foreach (array_chunk($imagenes, 4) as $key => $row) { ?>
	<div class="row">	
		<?php foreach ($row as $k => $item) { ?>
			<div class="col-xs-6 col-md-3">
				<div class="thumbnail">
		      <?php print $item['thumb']; ?>
			    <div class="modal fade badistro-bloques-galeria-imagenes-<?php print $k; ?>" tabindex="-1" role="dialog" aria-labelledby="myLargeModalLabel">
					  <div class="modal-dialog modal-lg">
					    <div class="modal-content">
					      <?php print $item['original']; ?>
					    </div>
					  </div>
					</div>
				</div>
			</div>
		<?php } ?>
	</div>
<?php } ?>