<?php

function esNodo(){
  return arg(0) == 'node' && is_numeric(arg(1));
}
function esArea(){
  return (esNodo() && es('area', node_load(arg(1))));
}
function esTramite(){
  return (esNodo() && es('tramite', node_load(arg(1))));
}
function esNoticia(){
  return (esNodo() && es('noticia', node_load(arg(1))));
}
function es($tipo, $nodo){
  return ($nodo->type == $tipo);
}
$badistro_iconos = array(
  'glyphicon-home' => t('Casa'),
  'glyphicon-paperclip' => t('Clip'),
  'glyphicon-star' => t('Estrella'),
  'glyphicon-heart' => t('Corazón'),
  'glyphicon-music' => t('Música'),
  'glyphicon-info-sign' => t('Información'),
  'glyphicon-fire' => t('Fuego'),
  'glyphicon-tree-deciduous' => t('Árbol'),
  'glyphicon-gift' => t('Regalo'),
  'glyphicon-ok-sign' => t('OK'),
  'glyphicon-remove-sign' => t('Error'),
  'glyphicon-search' => t('Buscar'),
  'glyphicon-lock' => t('Candado'),
  'glyphicon-cog' => t('Configuración'),
  'glyphicon-plus' => t('Más'),
  'glyphicon-minus' => t('Menos'),
  'glyphicon-envelope' => t('Correo'),
  'glyphicon-share-alt' => t('Compartir'),
  'glyphicon-chevron-right' => t('Flecha Derecha'),
  'glyphicon-chevron-left' => t('Flecha Izquierda'),
  'glyphicon-question-sign' => t('Signo de interrogación'),
  'glyphicon-calendar' => t('Calendario'),
  'glyphicon-certificate' => t('Certificado'),
  'glyphicon-link' => t('Link'),
  'glyphicon-briefcase' => t('Maletín'),
  'glyphicon-send' => t('Enviar'),
  'glyphicon-earphone' => t('Teléfono'),
  'glyphicon-alert' => t('Alerta'),
  'glyphicon-piggy-bank' => t('Ahorro'),
  'glyphicon-education' => t('Educación'),
  'glyphicon-grain' => t('Campo'),
  'glyphicon-globe' => t('Planeta'),
  'glyphicon-shopping-cart' => t('Carrito de compra'),
  'glyphicon-comment' => t('Diálogo'),
  'glyphicon-gift' => t('Regalo'),
  'glyphicon-map-marker' => t('Marcador'),
  'glyphicon-flag' => t('Bandera'),
  'glyphicon-list-alt' => t('Listado'),
  'glyphicon-cloud' => t('Nube'),
  'glyphicon-time' => t('Reloj'),
  'glyphicon-camera' => t('Cámara'),
  'glyphicon-leaf' => t('Hoja'),
  'glyphicon-warning-sign' => t('Peligro'),
  'glyphicon-usd' => t('Dinero'),
  'glyphicon-flash' => t('Rayo'),
  'glyphicon-transfer' => t('Transferencia'),
  'glyphicon glyphicon-book' => t('Libro'),
);
function obtenerCampo($nodo, $tipo_campo) {
  switch ($tipo_campo) {
    case 'costo':
      $campo = field_get_items('node', $nodo, 'field_tramite_costo', NULL);
      $campo = $campo[0]['safe_value'];
      break;
    case 'requisitos':
      $campo = field_get_items('node', $nodo, 'field_requisitos', NULL);
      $campo = $campo[0]['safe_value'];
      break;
    case 'siglas_area':
      $campo = field_get_items('node', $nodo, 'field_siglas', NULL);
      $campo = $campo[0]['safe_value'];
      break;
    case 'links_relacionados':
      $campo = field_get_items('node', $nodo, 'field_links_relacionados', NULL);
      $campo = obtener($tipo_campo, $campo);
      break;
    case 'paginas_relacionadas':
      $campo = field_get_items('node', $nodo, 'field_paginas_relacionadas', NULL);
      $campo = obtener($tipo_campo, $campo);
      break;
    case 'tipo_tramite':
      $campo = field_get_items('node', $nodo, 'field_tramite_tipo', NULL);
      $campo = isset($campo) ? taxonomy_term_load($campo[0]["target_id"]) : NULL;
      $campo = isset($campo) ? $campo->name : NULL;
      break;
    case 'categoria_noticia':
      $campo = field_get_items('node', $nodo, 'field_categoria', NULL);
      $campo = isset($campo) ? taxonomy_term_load($campo[0]["target_id"]) : NULL;
      $campo = isset($campo) ? $campo->name : NULL;
      break;
    case 'tags':
      $campo = field_get_items('node', $nodo, 'field_tags', NULL);
      $campo = obtener($tipo_campo, $campo);
    default:
      # code...
      break;
  }
  return $campo;
}

function obtener($nombreCampo, $campo){
  $items = array();
  switch ($nombreCampo) {
    case 'tags':
      foreach ($campo as $item) {
        $items[] = $item['taxonomy_term']->name;
      }
      break;
    case 'paginas_relacionadas':
      foreach ($campo as $item) {
        $items[] = $item;
      }
      break;
    case 'links_relacionados':
      foreach ($campo as $item) {
        $items[] = $item;
      }
      break;
    default:
      # code...
      break;
  }
  return $items;
}