<?php
/**
 * @file
 * dkan_nkod.features.inc
 */

/**
 * Implements hook_open_data_schema_apis_defaults().
 */
function dkan_nkod_open_data_schema_apis_defaults() {
  $open_data_schema_apis = array();

  // Exported Open Data API Map: NKOD package_show
  $open_data_schema_apis['nkod_package_show'] = array(
    'name' => 'NKOD package_show',
    'enabled' => 1,
    'machine_name' => 'nkod_package_show',
    'api_schema' => 'nkod_dataset',
    'description' => NULL,
    'type' => 'node',
    'bundle' => 'dataset',
    'mapping' => array(
      'id' => array(
        'value' => '[node:uuid]',
        'type' => 'string',
      ),
      'name' => array(
        'value' => '[node:url:args:last]',
        'type' => 'string',
      ),
      'title' => array(
        'value' => '[node:title]',
        'type' => 'string',
      ),
      'notes' => array(
        'value' => '[node:body]',
        'type' => 'string',
      ),
      'frequency' => array(
        'value' => '[node:field-frequency-ods]',
        'type' => 'string',
      ),
      'ruian_type' => array(
        'value' => '[node:field-ruian-type]',
        'type' => 'string',
      ),
      'ruian_code' => array(
        'value' => '[node:field-ruian-code]',
        'type' => 'string',
      ),
      'theme' => array(
        'value' => '[node:field-theme]',
        'type' => 'string',
      ),
      'maintainer' => array(
        'value' => '[node:field-maintainer]',
        'type' => 'string',
      ),
      'maintainer_email' => array(
        'value' => '[node:field-maintainer-email]',
        'type' => 'string',
      ),
      'schema' => array(
        'value' => '[node:field-schema]',
        'type' => 'string',
      ),
      'temporal_start' => array(
        'value' => '[node:field-temporal-start]',
        'type' => 'string',
      ),
      'temporal_end' => array(
        'value' => '[node:field-temporal-end]',
        'type' => 'string',
      ),
      'publisher_uri' => array(
        'value' => '[node:field-publisher-uri]',
        'type' => 'string',
      ),
      'publisher_name' => array(
        'value' => '[node:field-publisher-name]',
        'type' => 'string',
      ),
      'metadata_created' => array(
        'value' => '[node:metadata-created]',
        'type' => 'string',
      ),
      'metadata_modified' => array(
        'value' => '[node:metadata-modified]',
        'type' => 'string',
      ),
      'type' => array(
        'value' => '',
        'type' => 'string',
      ),
      'resources' => array(
        'odsm_entity_reference' => array(
          'value' => 'field_resources',
          'type' => '',
        ),
        'id' => array(
          'value' => '',
          'type' => '',
        ),
        'url' => array(
          'value' => '[node:field-resources:Nth:field-link-api:url] || [node:field-resources:Nth:field_link_remote_file] || [node:field-resources:Nth:field-upload:url]',
          'type' => '',
        ),
        'license_link' => array(
          'value' => '[node:field-resources:Nth:field_licence]',
          'type' => '',
        ),
        'format' => array(
          'value' => '[node:field-resources:Nth:field_mimetype]',
          'type' => '',
        ),
        'name' => array(
          'value' => '[node:field-resources:Nth:title]',
          'type' => '',
        ),
        'describedBy' => array(
          'value' => '[node:field-resources:Nth:field-described-by]',
          'type' => '',
        ),
        'describedByType' => array(
          'value' => '[node:field-resources:Nth:field-described-by-type]',
          'type' => '',
        ),
        'temporal_start' => array(
          'value' => '[node:field-resources:Nth:field-resource-temporal-start]',
          'type' => '',
        ),
        'temporal_end' => array(
          'value' => '[node:field-resources:Nth:field-resource-temporal-end]',
          'type' => '',
        ),
      ),
      'tags' => array(
        'odsm_entity_reference' => array(
          'value' => 'field_tags',
          'type' => '',
        ),
        'id' => array(
          'value' => '',
          'type' => '',
        ),
        'vocabulary_id' => array(
          'value' => '',
          'type' => '',
        ),
        'name' => array(
          'value' => '[node:field-tags:Nth:name]',
          'type' => '',
        ),
      ),
      'groups' => array(
        'odsm_entity_reference' => array(
          'value' => '',
          'type' => '',
        ),
        'display_name' => array(
          'value' => '',
          'type' => '',
        ),
        'description' => array(
          'value' => '',
          'type' => '',
        ),
        'id' => array(
          'value' => '',
          'type' => '',
        ),
        'image_display_url' => array(
          'value' => '',
          'type' => '',
        ),
        'title' => array(
          'value' => '',
          'type' => '',
        ),
        'name' => array(
          'value' => '',
          'type' => '',
        ),
      ),
    ),
    'outputformat' => 'json',
    'endpoint' => 'api/3/action/package_show',
    'arguments' => array(
      1 => array(
        'field' => 'name',
        'required' => 0,
      ),
      2 => array(
        'field' => 'id',
        'required' => 1,
      ),
    ),
  );
  return $open_data_schema_apis;
}
