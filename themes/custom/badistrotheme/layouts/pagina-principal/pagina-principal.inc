<?php

// Plugin definition
$plugin = array(
  'title' => t('Página principal'),
  'category' => t('BA Distro'),
  'icon' => 'pagina-principal.png',
  'theme' => 'pagina-principal',
  'css' => 'pagina-principal.css',
  'regions' => array(
    'top' => t('Top'), 
    'middle' => t('Middle'), 
    'middle_bottom_left' => t('Middle bottom left'),
    'middle_bottom_center' => t('Middle bottom center'),
    'middle_bottom_right' => t('Middle bottom right'),
    'bottom' => t('Bottom')
  ),

);
