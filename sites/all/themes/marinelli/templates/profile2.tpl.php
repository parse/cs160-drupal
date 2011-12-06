<?php

/**
 * @file
 * Default theme implementation for profiles.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) profile type label.
 * - $url: The URL to view the current profile.
 * - $page: TRUE if this is the main view page $url points too.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-profile
 *   - profile-{TYPE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
  <style type="text/css" media="all">
    table.type td {
      vertical-align: top;
    }
  </style>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
        <a href="<?php print $url; ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <table class="type">
    <tr>
    <td width="200px">
      <?php print render($content['field_photo']); ?>

    </td>
    <td>
      <?php print render($content['field_rating_1']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_rating_2']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_rating_3']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_rating_4']); ?>
    </td>
    </tr>
    <tr>
    <td>
      <?php print render($content['field_firstname']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_lastname']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_studentid']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_studentstatus']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_grad_date']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_tech_area']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_comp_lang']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_os']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_databases']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_mobile_prog']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_gpa']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_bio']); ?>
      <p style="margin : 10px;">
      <?php print render($content['field_fave_course']); ?>
    </td>
    </table>
  </div>
</div>
