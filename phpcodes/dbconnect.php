<?php
$username="cssjsuor_160s1g1";
$password="dbteamwork";
$database="cssjsuor_160s1g1";
$dblocal="localhost";

mysql_connect($dblocal,$username,$password);
@mysql_select_db($database) or die("Unable to select database");
?>