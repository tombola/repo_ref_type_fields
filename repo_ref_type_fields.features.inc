<?php
/**
 * @file
 * repo_ref_type_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function repo_ref_type_fields_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function repo_ref_type_fields_node_info() {
  $items = array(
    'res_output_artefact_physical' => array(
      'name' => t('Physical artefact'),
      'base' => 'node_content',
      'description' => t('A research output of type Physical artefact for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_artefact_product' => array(
      'name' => t('Device/Product'),
      'base' => 'node_content',
      'description' => t('A research output of type Device/Product for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_book_authored' => array(
      'name' => t('Authored book'),
      'base' => 'node_content',
      'description' => t('A research output of type Authored book for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_book_chapter' => array(
      'name' => t('Chapter'),
      'base' => 'node_content',
      'description' => t('A research output of type Chapter for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_book_edited' => array(
      'name' => t('Edited book'),
      'base' => 'node_content',
      'description' => t('A research output of type Edited book for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_book_scholarly' => array(
      'name' => t('Scholarly edition'),
      'base' => 'node_content',
      'description' => t('A research output of type Scholarly edition for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_digital_dataset' => array(
      'name' => t('Dataset'),
      'base' => 'node_content',
      'description' => t('A research output of type Dataset for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_digital_media' => array(
      'name' => t('Media'),
      'base' => 'node_content',
      'description' => t('A research output of type Media for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_digital_software' => array(
      'name' => t('Software'),
      'base' => 'node_content',
      'description' => t('A research output of type Software for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_digital_website' => array(
      'name' => t('Website content'),
      'base' => 'node_content',
      'description' => t('A research output of type Website content for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_doc_composition' => array(
      'name' => t('Composition'),
      'base' => 'node_content',
      'description' => t('A research output of type Composition for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_doc_confreport' => array(
      'name' => t('Confidential report'),
      'base' => 'node_content',
      'description' => t('A research output of type Confidential report for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_doc_design' => array(
      'name' => t('Design'),
      'base' => 'node_content',
      'description' => t('A research output of type Design for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_doc_patent' => array(
      'name' => t('Patent'),
      'base' => 'node_content',
      'description' => t('A research output of type Patent for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_doc_resreport' => array(
      'name' => t('Research report'),
      'base' => 'node_content',
      'description' => t('A research output of type Research report for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_event_exhibition' => array(
      'name' => t('Exhibition'),
      'base' => 'node_content',
      'description' => t('A research output of type Exhibition for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_event_performance' => array(
      'name' => t('Performance'),
      'base' => 'node_content',
      'description' => t('A research output of type Performance for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_journal_article' => array(
      'name' => t('Journal article'),
      'base' => 'node_content',
      'description' => t('A research output of type Journal article for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_journal_conference' => array(
      'name' => t('Conference contribution'),
      'base' => 'node_content',
      'description' => t('A research output of type Conference contribution for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_journal_workingpaper' => array(
      'name' => t('Working paper'),
      'base' => 'node_content',
      'description' => t('A research output of type Working paper for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'res_output_other' => array(
      'name' => t('Other'),
      'base' => 'node_content',
      'description' => t('A research output of type Other for display and potential REF submission'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
