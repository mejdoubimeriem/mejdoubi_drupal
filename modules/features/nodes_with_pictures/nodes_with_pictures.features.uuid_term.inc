<?php
/**
 * @file
 * nodes_with_pictures.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function nodes_with_pictures_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Men',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '05a4c50c-d934-489f-a88e-d4e495953919',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/men',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Summer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '07b636ff-0ec6-4098-b650-0e6425fa657b',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/summer',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '0f81bb17-5fa4-4157-b48a-703dc5645b12',
    ),
  );
  $terms[] = array(
    'name' => 'Footwear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '0f81bb17-5fa4-4157-b48a-703dc5645b12',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/footwear',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jackets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '4d153c5f-7b45-4d3c-af29-37987e702b3e',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/jackets',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '05a4c50c-d934-489f-a88e-d4e495953919',
    ),
  );
  $terms[] = array(
    'name' => 'Accessories Men',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '50775881-2c34-4cc5-b65d-64d8c854a0b4',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/accessories-men',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '6a184d99-d657-4b94-a836-77fab96807a6',
    ),
  );
  $terms[] = array(
    'name' => 'Accessories',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6a184d99-d657-4b94-a836-77fab96807a6',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/accessories',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Winter',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6ec3fe17-1937-4ac3-9734-295dcc2d2479',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/winter',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '0f81bb17-5fa4-4157-b48a-703dc5645b12',
    ),
  );
  $terms[] = array(
    'name' => 'Dresses',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '86bd1740-85a4-4f71-981c-7f1026f87441',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/dresses',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'b416e643-5c72-42ff-86a6-25edc0c4b389',
    ),
  );
  $terms[] = array(
    'name' => 'Jewelry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '8d9fa775-7a6b-4cbe-be44-f893ec081073',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/jewelry',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bags and Wallets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '9cc5b84e-83b9-4c1c-a675-715eadc1ba64',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/bags-and-wallets',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '6a184d99-d657-4b94-a836-77fab96807a6',
    ),
  );
  $terms[] = array(
    'name' => 'Women',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'b416e643-5c72-42ff-86a6-25edc0c4b389',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/women',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Diamond rings',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bca04e8c-a9bf-4f9d-b4f9-4e36aaebea8a',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/diamond-rings',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '8d9fa775-7a6b-4cbe-be44-f893ec081073',
    ),
  );
  $terms[] = array(
    'name' => 'Imitation jewelry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'edf25a9e-f267-48c7-a8d5-08e4f86c7dd0',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/imitation-jewelry',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '8d9fa775-7a6b-4cbe-be44-f893ec081073',
    ),
  );
  $terms[] = array(
    'name' => 'Jackets and tops',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'f2064a15-013a-417e-b913-4c6d69da8bbb',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/jackets-and-tops',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'b416e643-5c72-42ff-86a6-25edc0c4b389',
    ),
  );
  $terms[] = array(
    'name' => 'Tops',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fbfebb98-7f43-4d85-823d-b625477134e3',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'blog-categories/tops',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '05a4c50c-d934-489f-a88e-d4e495953919',
    ),
  );
  return $terms;
}
