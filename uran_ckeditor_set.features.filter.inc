<?php
/**
 * @file
 * uran_ckeditor_set.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function uran_ckeditor_set_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_html' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <h1> <h2> <h3> <h4> <h5> <h6> <span> <table> <thead> <tbody> <tr> <th> <td> <img> <strong> <em> <strike> <u> <sup> <sub>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
