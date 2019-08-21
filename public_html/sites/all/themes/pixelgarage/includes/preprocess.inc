<?php
/**
 * Created by PhpStorm.
 * User: ralph
 * Date: 06.02.15
 * Time: 17:23
 */

use Drupal\Core\Template\Attribute;

function pixelgarage_preprocess_html(&$vars) {
  //
  // add header position class to body
  $vars['attributes']['class'][] = 'header-' . theme_get_setting('bootstrap_barrio_header_position');
}

/**
 * Override or insert variables for the page templates.
 */
function pixelgarage_preprocess_page(&$vars) {
  //
  // declare attributes for header
  $vars['header_attributes'] = [
    'class' => [ 'header', theme_get_setting('bootstrap_barrio_header_position') ]
  ];
  $vars['header_attributes'] = new Attribute($vars['header_attributes']);

  // replace logo with .svg and make it language dependant
  $language = \Drupal::languageManager()->getCurrentLanguage();
  $path = drupal_get_path('module', 'pixelgarage');
  $logo = $path . '/images/logo.svg';
  $vars['logo'] = $logo ? file_create_url($logo) : '';

  switch ($language->getId()) {
    case 'en':
      $vars['logo'] = str_replace('_d.svg', '_e.svg', $vars['logo']);
      break;
    case 'fr':
      $vars['logo'] = str_replace('_d.svg', '_f.svg', $vars['logo']);
      break;
    case 'it':
      $vars['logo'] = str_replace('_d.svg', '_i.svg', $vars['logo']);
      break;
    case 'de':
    default:
      $vars['logo'] = str_replace('.png', '.svg', $vars['logo']);
      break;
  }
}


/**
 * Override or insert variables for the paragraph templates.
 */
function pixelgarage_preprocess_paragraph(&$vars) {
  $test = $vars;
}
