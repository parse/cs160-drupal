<!--Connect to database-->
<?php include("../phpcodes/dbconnect.php"); ?>

<?php 
$confidential_tid = 426;//this is the tid from taxonomy_term_data
//print_r($_POST); 
$student_uid = $_POST['student_uid'];
$request_nid = $_POST['request_nid'];
$instr_uid = $_POST['instr_uid'];
$confidential = $_POST['confidential'];
$letter_text = $_POST['letter_reply'];
$current_time = time();
//insert instructor's letter into the database table: 'instr_saved_letters
$query = 
	"INSERT INTO instr_saved_letters".
	" (student_uid, request_id, instructor_uid, confidential, lastedit, letter_text) VALUES ".
	"('$student_uid', '$request_nid', '$instr_uid', '$confidential', '$current_time','$letter_text')";
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
	"UPDATE field_data_field_letter_status ".
	"SET field_letter_status_tid = '$confidential_tid' ".
	"WHERE entity_id = '$request_nid' AND bundle = 'recommendation_request'";
//print($query);
mysql_query($query);

//Display the letter below
print("Letter saved sucesfully. Review letter below:<br /><br />" . $letter_text);
?>
<!-- close database connection? -->
<?php mysql_close(); ?>