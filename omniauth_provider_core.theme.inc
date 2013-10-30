<?php

/**
 * @file
 *
 * All this stuff was taken from http://drupal.org/node/54898#comment-6649066
 * and then modified. Another addition was to include classes for items in the list.
 */



 /**
 * Preprocesses variables for theme_description_list().
 *
 * "The dl element represents an association list consisting of zero or more
 * name-value groups (a description list). Each group must consist of one or
 * more names (dt elements) followed by one or more values (dd elements).
 * Within a single dl element, there should not be more than one dt element for
 * each name."
 *
 * @see http://html5doctor.com/the-dl-element/
 * @see http://www.w3.org/TR/html-markup/dl.html
 * @see http://www.w3.org/wiki/HTML_lists#Description_lists
 *
 * This means:
 * - The DL may be empty.
 * - If there is a DT, it must be followed by a DD.
 * - There can be multiple DTs followed by one or more DDs.
 * - Each set of DTs and DDs forms a group.
 * - The text of one DT must be unique within the DL.
 * - The DL must contain DT and DD elements only.
 *
 * @param array $variables
 *   An associative array containing:
 *   - groups: A list of groups to render. Each item is an array containing:
 *     - term: One of the following values:
 *       - A string containing the term.
 *       - A list of of strings containing terms.
 *       - A list of render arrays containing elements to render. Each child
 *         element will be wrapped into a DT element. Use #wrapper_attributes
 *         to specify attributes of the DT element.
 *     - description: One of the following values:
 *       - A string containing the description for the term.
 *       - A list of of strings containing descriptions for the term.
 *       - A list of render arrays containing elements to render. Each child
 *         element will be wrapped into a DD element. Use #wrapper_attributes
 *         to specify attributes of the DD element.
 *   - title: (optional) A heading for the list.
 *   - attributes: (optional) Attributes to apply to the DL element.
 *
 * @return void
 *   $variables['groups'] is processed into $variables['items'].
 */
function template_preprocess_omniauth_provider_core_description_list(&$variables) {
  $groups = &$variables['groups'];
  $variables['items'] = array();
  $items = &$variables['items'];
  // Loop over all groups and contained terms and descriptions to prepare the
  // simplified 'items' variable for theme_description_list(). But also
  // harmonize all items within 'groups' so subsequently invoked preprocess
  // functions as well as theme_description_list() can operate on a single,
  // reliable structure and syntax.
  foreach ($groups as $group) {

    // DTs always come before DDs, regardless of their order in the array.
    foreach (array('term' => 'dt', 'description' => 'dd') as $key => $tag) {
      $item = &$group[$key];

      // If the item is a string, then there is only one DT/DD.
      if (is_string($item)) {
        $items[] = array(
          'tag' => $tag,
          'attributes' => isset($group['attributes']) ? $group['attributes'] : array(),
          'value' => $item,
        );
        $item = array(array('#prefix' => "<$tag>", '#markup' => $item, '#suffix' => "</$tag>"));
      }
      // Otherwise, there are multiple DTs/DDs.
      else {
        foreach ($item as &$value) {
          if (is_string($value)) {
            $items[] = array(
              'tag' => $tag,
              'attributes' => isset($group['attributes']) ? $group['attributes'] : array(),
              'value' => $value,
            );
            $value = array('#prefix' => "<$tag>", '#markup' => $value, '#suffix' => "</$tag>");
          }
          else {
            $items[] = array(
              'tag' => $tag,
              'attributes' => isset($group['attributes']) ? $group['attributes'] : array(),
              'value' => drupal_render($value),
            );
            $value += array('#prefix' => '', '#suffix' => '');
            $value['#prefix'] = "<$tag>" . $value['#prefix'];
            $value['#suffix'] = $value['#suffix'] . "</$tag>";
          }
        }
      }
    }
  }
}

/**
 * Returns HTML for a description list.
 *
 * @param array $variables
 *   An associative array containing:
 *   - items: The preprocessed list of description list elements to render. Each
 *     item is an associative array containing:
 *     - tag: Either 'dt' or 'dd'.
 *     - attributes: An array of attributes to apply to the tag.
 *     - value: The rendered content for the tag.
 *   - groups: The original list of groups to render. Each item is an array
 *     containing:
 *     - term: One of the following values:
 *       - A string containing the term.
 *       - A list of of strings containing terms.
 *       - A list of render arrays containing elements to render. Each child
 *         element will be wrapped into a DT element. Use #wrapper_attributes
 *         to specify attributes of the DT element.
 *     - description: One of the following values:
 *       - A string containing the description for the term.
 *       - A list of of strings containing descriptions for the term.
 *       - A list of render arrays containing elements to render. Each child
 *         element will be wrapped into a DD element. Use #wrapper_attributes
 *         to specify attributes of the DD element.
 *   - title: (optional) A heading for the list.
 *   - attributes: (optional) Attributes to apply to the DL element.
 *
 * @return string
 *   The rendered description list.
 */
function theme_omniauth_provider_core_description_list($variables) {

  $items = $variables['items'];
  $title = $variables['title'];
  $attributes = $variables['attributes'];
  $classes_orig = $attributes['class'];

  $output = '';
  foreach ($items as $item) {
    $item_classes = array();
    $item_classes = array_merge($classes_orig, $item['attributes']['class']);
    $attributes['class'] = $item_classes;

    $output .= '<' . $item['tag'] . drupal_attributes($attributes) . '>';
    $output .= $item['value'];
    $output .= '</' . $item['tag'] . '>';
  }
  // Only output the list, container, and title, if there are any groups.
  if ($output !== '') {
    $output = '<dl' . drupal_attributes($attributes) . '>' . $output . '</dl>';
    $title = '';
    if (isset($variables['title'])) {
      $title = '<header>' . $variables['title'] . '</header>';
    }
    // If not used for styling purposes, this DIV should be an ASIDE.
    $output = '<section class="definition-list">' . $title . $output . '</section>';
  }
  return $output;
}
