<?php
/**
 * @file
 * commerce_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function commerce_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'categores_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'categories' => 'categories',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-categories_page-block_1' => array(
          'module' => 'views',
          'delta' => 'categories_page-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-categories_page-block_2' => array(
          'module' => 'views',
          'delta' => 'categories_page-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['categores_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'categories_display';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'categories/*' => 'categories/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-products_for_homepage-block_6' => array(
          'module' => 'views',
          'delta' => 'products_for_homepage-block_6',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['categories_display'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'common';
  $context->description = 'All pages except product pages';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~product/*/*' => '~product/*/*',
        '~admin' => '~admin',
        '~user' => '~user',
        '~user/register' => '~user/register',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-categories-block' => array(
          'module' => 'views',
          'delta' => 'categories-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-popular_tags-block' => array(
          'module' => 'views',
          'delta' => 'popular_tags-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'commerce_cart-cart' => array(
          'module' => 'commerce_cart',
          'delta' => 'cart',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-products_for_homepage-block_2' => array(
          'module' => 'views',
          'delta' => 'products_for_homepage-block_2',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-products_for_homepage-block_5' => array(
          'module' => 'views',
          'delta' => 'products_for_homepage-block_5',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages except product pages');
  $export['common'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-popular_categories-block' => array(
          'module' => 'views',
          'delta' => 'popular_categories-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-popular_categories-block_1' => array(
          'module' => 'views',
          'delta' => 'popular_categories-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-popular_categories-block_3' => array(
          'module' => 'views',
          'delta' => 'popular_categories-block_3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-frontpage_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_slideshow-block',
          'region' => 'region_slider',
          'weight' => '-10',
        ),
        'views-important_information-block' => array(
          'module' => 'views',
          'delta' => 'important_information-block',
          'region' => 'region_slider',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main';
  $context->description = 'All pages';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'logintoboggan-logintoboggan_logged_in' => array(
          'module' => 'logintoboggan',
          'delta' => 'logintoboggan_logged_in',
          'region' => 'leaderboard',
          'weight' => '-8',
        ),
        'delta_blocks-logo' => array(
          'module' => 'delta_blocks',
          'delta' => 'logo',
          'region' => 'header',
          'weight' => '-31',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-29',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-28',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'menu_bar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages');
  $export['main'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'product/*' => 'product/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-categories-block' => array(
          'module' => 'views',
          'delta' => 'categories-block',
          'region' => 'sidebar_first',
          'weight' => '-29',
        ),
        'views-popular_tags-block' => array(
          'module' => 'views',
          'delta' => 'popular_tags-block',
          'region' => 'sidebar_first',
          'weight' => '-28',
        ),
        'commerce_cart-cart' => array(
          'module' => 'commerce_cart',
          'delta' => 'cart',
          'region' => 'sidebar_first',
          'weight' => '-27',
        ),
        'views-popular_categories-block_2' => array(
          'module' => 'views',
          'delta' => 'popular_categories-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['product_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tags_display';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'tags/*' => 'tags/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-products_for_homepage-block_7' => array(
          'module' => 'views',
          'delta' => 'products_for_homepage-block_7',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['tags_display'] = $context;

  return $export;
}
