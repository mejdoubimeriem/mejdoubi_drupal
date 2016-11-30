<?php
/**
 * @file
 * custom_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function custom_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Accessories',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => '040fd5e5-0fa8-4e14-8acf-e26c173d32d3',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 296,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Winter',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0e755824-37df-41dc-8616-faa7a332fb10',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 222,
        ),
      ),
    ),
    'parent' => array(
      0 => '2fc66909-8bac-4e96-b25d-8e0c33f1f1ef',
    ),
  );
  $terms[] = array(
    'name' => 'Accessories Men',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '13acc841-c422-4b20-83b6-897b1f1576a2',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 666,
        ),
      ),
    ),
    'parent' => array(
      0 => '040fd5e5-0fa8-4e14-8acf-e26c173d32d3',
    ),
  );
  $terms[] = array(
    'name' => 'Jewelry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 12,
    'uuid' => '18cc380d-42f4-4431-abd4-cd5eee820c72',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 29,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Elit',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '1bdd0610-c623-4816-a487-2fb7307bbb46',
    'vocabulary_machine_name' => 'tags',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 29,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dolor',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '1df71269-ec36-4e4a-b8f9-fbaeca7e2db6',
    'vocabulary_machine_name' => 'tags',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 68,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sit amet',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '29e268a6-a102-4498-b474-be77b0a5b074',
    'vocabulary_machine_name' => 'tags',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 14,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Footwear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => '2fc66909-8bac-4e96-b25d-8e0c33f1f1ef',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 107,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dresses',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '32ad29fe-80ed-4175-a1eb-7b7f91aee82e',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 163,
        ),
      ),
    ),
    'parent' => array(
      0 => '4b641591-11ab-4f77-94eb-faa7d03c6dd9',
    ),
  );
  $terms[] = array(
    'name' => 'Men',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 13,
    'uuid' => '445c6830-f336-428c-a942-892e2e2f8140',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 33,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Women',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 14,
    'uuid' => '4b641591-11ab-4f77-94eb-faa7d03c6dd9',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 36,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Imitation jewelry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '4cd12449-1e2f-41ca-93c0-faa705315abb',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 26,
        ),
      ),
    ),
    'parent' => array(
      0 => '18cc380d-42f4-4431-abd4-cd5eee820c72',
    ),
  );
  $terms[] = array(
    'name' => 'Lorem',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '57caeedc-e5fe-42ea-90dd-60e0bff215e4',
    'vocabulary_machine_name' => 'tags',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 1219,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Adipiscing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '7f7f647e-a7cd-4c4c-bcd9-16e5a5e7f30c',
    'vocabulary_machine_name' => 'tags',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 95,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jackets and tops',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '877dcdfd-6090-4225-b31a-ddd0b6608200',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 41,
        ),
      ),
    ),
    'parent' => array(
      0 => '4b641591-11ab-4f77-94eb-faa7d03c6dd9',
    ),
  );
  $terms[] = array(
    'name' => 'Jackets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '8de16ed2-7551-4d23-b47f-f723631a0cd2',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 41,
        ),
      ),
    ),
    'parent' => array(
      0 => '445c6830-f336-428c-a942-892e2e2f8140',
    ),
  );
  $terms[] = array(
    'name' => 'Summer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '8e6b292c-1a51-428c-addf-b9c7e4131576',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 92,
        ),
      ),
    ),
    'parent' => array(
      0 => '2fc66909-8bac-4e96-b25d-8e0c33f1f1ef',
    ),
  );
  $terms[] = array(
    'name' => 'NEWSLETTER SUBSCRIBE',
    'description' => 'Ecommerce Theme newsletter categories.',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '907881cd-0c98-4b19-89e0-627d3fc0963f',
    'vocabulary_machine_name' => 'newsletter',
  );
  $terms[] = array(
    'name' => 'Ipsum',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'b3470b25-6430-4008-a091-f03a1adedc0c',
    'vocabulary_machine_name' => 'tags',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 250,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tops',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b89a9a6d-6204-4bb9-b8ad-64bae86ffe45',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 56,
        ),
      ),
    ),
    'parent' => array(
      0 => '445c6830-f336-428c-a942-892e2e2f8140',
    ),
  );
  $terms[] = array(
    'name' => 'Bags and Wallets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'c08b4e07-be83-4bc2-a470-a22e453858d3',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 152,
        ),
      ),
    ),
    'parent' => array(
      0 => '040fd5e5-0fa8-4e14-8acf-e26c173d32d3',
    ),
  );
  $terms[] = array(
    'name' => 'Diamond rings',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cd70fe1d-7545-447b-acba-b375b2bc7a6e',
    'vocabulary_machine_name' => 'categories',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 72,
        ),
      ),
    ),
    'parent' => array(
      0 => '18cc380d-42f4-4431-abd4-cd5eee820c72',
    ),
  );
  $terms[] = array(
    'name' => 'Aenean',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'e004c5f1-9371-435e-b4d4-9890cb529088',
    'vocabulary_machine_name' => 'tags',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 132,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Consectetuer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'e414d772-1e77-426f-8f9b-2072470d74dc',
    'vocabulary_machine_name' => 'tags',
    'field_count' => array(
      'und' => array(
        0 => array(
          'value' => 212,
        ),
      ),
    ),
  );
  return $terms;
}
