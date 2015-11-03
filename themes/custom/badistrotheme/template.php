<?php
/**
* theme_menu_link()
*/
function badistrotheme_menu_link(array $variables) {
  $variables['element']['#attributes']['id'][] = $variables['element']['#original_link']['menu_name'] . '-' . $variables['element']['#original_link']['mlid'];
  $variables['element']['#attributes']['class'][] = 'menu-' . $variables['element']['#original_link']['mlid'];
  $variables['element']['#localized_options']['attributes']['class'][] = 'menu-' . $variables['element']['#original_link']['mlid'];
  return theme_menu_link($variables);
}
?>