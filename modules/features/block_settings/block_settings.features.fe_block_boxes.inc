<?php
/**
 * @file
 * block_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function block_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact info';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contact_info';
  $fe_block_boxes->body = '<div class="footer-info-list">
<ul>
	<li>Call us <a href="tel:+123 456 789">+123 456 789</a></li>
	<li>Fax <a href="tel:+123 456 000">+123 456 000</a></li>
	<br />
	<li><a href="mailto:example@example.com">example@example.com</a></li>
	<li><a href="mailto:second_example@example.com">second_example@example.com</a></li>
	<br />
	<li>skype: contact_us</li>
	<li>skype: support_skype</li>
</ul>
</div>
';

  $export['contact_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Customer service';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'customer_service';
  $fe_block_boxes->body = '<div class="footer-info-list">
<ul>
	<li><a href="#" target="_blank">Delivery</a></li>
	<li><a href="#" target="_blank">Shipping methods</a></li>
	<li><a href="#" target="_blank">Payment</a></li>
	<li><a href="#" target="_blank">Returns &amp; Refunds</a></li>
	<li><a href="#" target="_blank">Customers</a></li>
</ul>
</div>
';

  $export['customer_service'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer information';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_info';
  $fe_block_boxes->body = '<div class="footer-information-image"><img alt="" src="/sites/default/files/plastic-cards.png" /></div>

<div class="footer-information"><a href="/" style="line-height: 1.6;">Home</a>&nbsp;|&nbsp;<a href="/categories" style="line-height: 1.6;">Categories</a>&nbsp;|&nbsp;<a href="/blog" style="line-height: 1.6;">Blog</a>&nbsp;|&nbsp;<a href="/contact-us" style="line-height: 1.6;">Contacts</a>
</div>
';

  $export['footer_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shopping cart';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'shopping_cart_block';
  $fe_block_boxes->body = '<p><a href="/cart">Shopping cart</a></p>
';

  $export['shopping_cart_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Show menu';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'show_menu';
  $fe_block_boxes->body = '<div class="mobile-menu-button"><a href="#">&nbsp;</a></div>
';

  $export['show_menu'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social media';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_media';
  $fe_block_boxes->body = '<div class="footer-social-links"><a class="facebook" href="http://facebook.com">facebook</a> <a class="twitter" href="http://twitter.com">twitter</a> <a class="linkedin" href="https://www.linkedin.com/">in</a> <a class="google-plus" href="https://plus.google.com/">G+</a></div>
';

  $export['social_media'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'User login';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'user_login';
  $fe_block_boxes->body = '<p><a href="../user/register">Register</a>&nbsp;|&nbsp;<a href="../user">Sign in</a>&nbsp;</p>
';

  $export['user_login'] = $fe_block_boxes;

  return $export;
}
