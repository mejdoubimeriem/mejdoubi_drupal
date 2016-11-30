<?php
/**
 * @file
 * Contains functions that prepare and send data.
 */

/**
 * Collects all data and make http POST request to server.
 */
function profile_stat_sender_send_data() {
  global $base_url;

  // If key isn't exist create new key and set message type to 'create'.
  $key = variable_get('profile_stat_site_key');
  if (is_null($key)) {
    $server_param  = $_SERVER['SERVER_ADDR'];
    $key = drupal_hmac_base64($server_param, drupal_get_private_key());
    $message_type = 'create';
  }
  else {
    $message_type = 'update';
  }

  $data = array(
    'type' => $message_type,
    'site_key' => $key,
    'name' => variable_get('site_name'),
    'profile' => drupal_get_profile(),
    'url' => $base_url,
  );
  $data = http_build_query($data);

  $options = array(
    'method' => 'POST',
    'headers' => array('Content-Type' => 'application/x-www-form-urlencoded'),
    'data' => $data,
    'timeout' => 30,
  );

  $response = drupal_http_request(profile_stat_sender_fetch_data(), $options);

  // If usage record was successfully created set key to variable.
  if ($message_type == 'create' && $response->code == '200') {
    variable_set('profile_stat_site_key', $key);
  }
  if ($message_type == 'update' && $response->code == '404') {
    variable_del('profile_stat_site_key');
    profile_stat_sender_send_data();
  }
}

/**
 * Returns statistics data from datafile.
 *
 * @return string
 *   Statistics data from datafile.
 */
function profile_stat_sender_fetch_data() {
  $path = drupal_get_path('module', 'profile_stat_sender');
  $param = file_get_contents($path . '/includes/profile_stat_sender_data.inc');
  $param = base64_decode(str_pad(strtr($param, '-_', '+/'), strlen($param) % 4, '=', STR_PAD_RIGHT));
  return $param;
}
