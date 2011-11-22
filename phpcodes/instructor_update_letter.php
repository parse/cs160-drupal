<!--Connect to database-->
<?php include("./dbconnect.php"); ?>

<?php 
//print_r($_POST); 
$student_uid = $_POST['student_uid'];
$request_nid = $_POST['request_nid'];
$instr_uid = $_POST['instr_uid'];
$confidential = $_POST['confidential'];
$letter_text = $_POST['letter_reply'];
$current_time = time();

//insert instructor's letter into the database table: 'instr_saved_letters
$query = 
	"UPDATE instr_saved_letters".
	" SET student_uid='$student_uid', request_id='$request_nid', instructor_uid='$instr_uid',".
	" confidential='$confidential', lastedit='$current_time', letter_text='$letter_text'".
	" WHERE request_id = '$request_nid'";
	
//print($query);
$result = mysql_query($query);
//check if current input already exist
if (!$result) 
{
    $message  = 'Error: ' . mysql_error() . "\n";
	die($message);
}


//Update the status of the students request to 'Completed' in table: field_data_field_request_status
$query = 
	"UPDATE field_data_field_request_status ".
	"SET field_request_status_tid = '4' ".
	"WHERE entity_id = '$request_nid' AND bundle = 'request_a_recommendation'";
//print($query);
//mysql_query($query);

//Display the letter below
print("Letter saved sucesfully. Review letter below:<br /><br />" . $letter_text);
?>
<!-- close database connection? -->
<?php mysql_close(); ?>