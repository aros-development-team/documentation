<?php
function customError($errno, $errstr)
 { 
 if($errno != 8) {
	if ($errno != 1024) {
 echo "<b>Guru Meditation:</b> [$errno] $errstr<br />";
	}
 }
 //die();
 }
?>
