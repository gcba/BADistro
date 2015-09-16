<?php

// Plugin definition
$plugin = array(
  'title' => t('Tres columnas'),
  'category' => t('BA Distro'),
  'icon' => 'tres-columnas.png',
  'theme' => 'tres-columnas',
  'css' => 'tres-columnas.css',
  'regions' => array(
  	'top' => t('Superior'), 
  	'bottom' => t('Inferior'), 
  	'body-left' => t('Columna izquierda'),
    'body-middle'  => t('Columna central'),
    'body-right'  => t('Columna derecha'),
    'full'  => t('De lado a lado'),
  ),

);
