<?php

// Plugin definition
$plugin = array(
  'title' => t('Columna + Sidebar'),
  'category' => t('BA Distro'),
  'icon' => 'columna-sidebar.png',
  'theme' => 'columna-sidebar',
  'css' => 'columna-sidebar.css',
  'regions' => array(
  	'top' => t('Top'), 
  	'bottom' => t('Bottom'), 
  	'sidebar' => t('Sidebar'),
    'column'  => t('Content'),
    'full'  => t('Ancho máximo'),
  ),

);

