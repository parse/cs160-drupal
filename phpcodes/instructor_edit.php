<!-- this page is for editing an existing letter in the database-->
<!--Connect to database-->
<?php include("../phpcodes/dbconnect.php"); ?>
<html>
<head>
<!--script for the text editor-->
<script type="text/javascript" src="./ckeditor/ckeditor.js"></script>
<title>Instructor - Edit Letter Page</title>
</head>
<body>
<?php 
//get information posted to this page
$stud_name = $_POST['student_name']; //stident name
$confidential = $_POST['confidential']; // letter type
$req_date = $_POST['request_date']; // date of request
$node_id = $_POST['node_id']; // node id
$requester = $_POST['requester_uid']; // students uid
$instr_uid = $_POST['instr_uid'];// instructors uid
//print_r($_POST);

//get the entry from the database
$query = "SELECT letter_text FROM `instr_saved_letters` WHERE instructor_uid = '$instr_uid' 
AND request_id = '$node_id' ";
$result = mysql_query($query);
$data = mysql_fetch_array($result, MYSQL_NUM);
//print_r($data);
?>
<h1>Reviewing/Editing Letter</h1>
<br />

<p>You are writing a letter for <?php print("<b>".$stud_name."</b>"); ?></p>
<p>This letter is 
<?php
//display the letter type
if($confidential == 1)
	print("Confidential");
else
	print("Non-Confidential");
?>
</p> 
<!-- update the saved info in the database-->
<form action= "./instructor_update_letter.php" name= "instr_compose" method= "post">
<input type= "hidden" name= "request_nid" value= "<?php print($node_id); ?>">
<input type= "hidden" name= "confidential" value= "<?php print($confidential); ?>">
<input type= "hidden" name= "student_uid" value= "<?php print($requester); ?>">
<input type= "hidden" name= "instr_uid" value= "<?php print($instr_uid); ?>">
Letter Body<br />
<textarea id="editor" name= "letter_reply" cols = "60" rows = "15"><?php print($data[0]); ?></textarea>
<script type="text/javascript">
			//<![CDATA[
				// Replace the <textarea id="editor"> with an CKEditor
				// instance, using default configurations.
				CKEDITOR.replace( 'editor',
				{
					enterMode : CKEDITOR.ENTER_BR,
					shiftEnterMode: CKEDITOR.ENTER_P,
					height:"300", width:"550",
					toolbar : [ [ 'Bold', 'Italic', 'Underline', '-', 'Subscript', 'Superscript'],
								['JustifyLeft','JustifyCenter','JustifyRight','JustifyBlock'],	
								['NumberedList', 'BulletedList'], 
								['Outdent', 'Indent', 'Blockquote'],							  
								['Link','Unlink'],
								['Font','FontSize']
							  ]
				});
			//]]>
</script>
Enter key - Goes to the next line<br />Shift+Enter - Starts a new paragraph<br /> 
<input type= "submit" value="Save" title="Save Letter" class = "form-submit">
</form>
</body>
</html>