<?php

// Plugin definition
$plugin = array(
  'title' => t('1 Columna [Estrecha]'),
  'category' => t('BA Distro'),
  'icon' => 'una-columna-estrecha.png',
  'theme' => 'una-columna-estrecha',
  'css' => 'una-columna.css',
  'regions' => array(
    'top' => t('Superior'), 
    'bottom' => t('Inferior'), 
    'body-middle'  => t('Medio'),
    'full'  => t('Ancho máximo'),
  ),

);
