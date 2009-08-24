<?php
/**
 * @file
 * Administrative page callbacks for the thickbox search module.
 */

/**
 * General configuration form for controlling the thickbox search behaviour.
 */
function thickbox_search_admin_settings() {
  
  $form['thickbox_search_width'] = array(
    '#type' => 'textfield',
    '#size' => 5,
    '#title' => t('Width'),
    '#default_value' => variable_get('thickbox_search_width', '320'),
    '#description' => t('The width of the thickbox.'),
  );
  
  $form['thickbox_search_height'] = array(
    '#type' => 'textfield',
    '#size' => 5,
    '#title' => t('Height'),
    '#default_value' => variable_get('thickbox_search_height', '160'),
    '#description' => t('The height of the thickbox.'),
  );

  return system_settings_form($form);
}
