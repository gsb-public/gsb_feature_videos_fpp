<?php
/**
 * @file
 * gsb_feature_videos_fpp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_videos_fpp_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_video|field_collection_item|field_video|default';
  $field_group->group_name = 'group_wrapper_video';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_video_url',
      1 => 'gsb_feature_videos_fpp_video_duration',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Video wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-video field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_video|field_collection_item|field_video|default'] = $field_group;

  return $export;
}
