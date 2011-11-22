<?php
//============================================================+
// File name   : convert_html2pdf.php
// Begin       : 5-5-2011
// Last Update : 5-5-2011
//
// Description : Converts html to pdf
//               adapted from example at www.tcpdf.org
//
// Author: Lambert Fong
//============================================================+

//connect to database
include("../phpcodes/dbconnect.php");
require_once('../phpcodes/tcpdf/config/lang/eng.php');
require_once('../phpcodes/tcpdf/tcpdf.php');

// create new PDF document
$pdf = new TCPDF(PDF_PAGE_ORIENTATION, PDF_UNIT, PDF_PAGE_FORMAT, true, 'UTF-8', false);

// set document information
$pdf->SetCreator(PDF_CREATOR);
$pdf->SetAuthor('AUTHOR NAME');
$pdf->SetTitle('TITLE');
$pdf->SetSubject('SUBJECT');
$pdf->SetKeywords('TCPDF, PDF, example, test, guide');

// remove default header/footer
$pdf->setPrintHeader(false);
$pdf->setPrintFooter(false);

// set default monospaced font
$pdf->SetDefaultMonospacedFont(PDF_FONT_MONOSPACED);

//set margins
$pdf->SetMargins(PDF_MARGIN_LEFT, PDF_MARGIN_TOP, PDF_MARGIN_RIGHT);
$pdf->SetHeaderMargin(PDF_MARGIN_HEADER);
$pdf->SetFooterMargin(PDF_MARGIN_FOOTER);

//set auto page breaks
$pdf->SetAutoPageBreak(TRUE, PDF_MARGIN_BOTTOM);

//set image scale factor
$pdf->setImageScale(PDF_IMAGE_SCALE_RATIO);

//set some language-dependent strings
$pdf->setLanguageArray($l);

// ---------------------------------------------------------

// set font
$pdf->SetFont('helvetica', '', 12);

// add a page
$pdf->AddPage();

//get HTML data from Database
$instr_uid = $_POST['i_uid'];
$node_id = $_POST['nid'];
include("../phpcodes/dbconnect.php");
$query = "SELECT letter_text FROM instr_saved_letters WHERE instructor_uid = '$instr_uid' AND request_id = '$node_id' ";
$result = mysql_query($query);
$c_row = mysql_fetch_array($result, MYSQL_NUM);
//print($c_row[0]);
$html = $c_row[0];
mysql_close();
mysql_free_result($result);

// output the HTML content
// We'll be outputting a PDF
//print("Downloading file...");
$pdf->writeHTML($html, true, false, true, false, '');

// reset pointer to the last page
$pdf->lastPage();

// ---------------------------------------------------------

//Close and output PDF document
$file_name = 'instr-'.$instr_uid.'-request-'.$node_id;
header('Content-type: application/pdf');
header('Content-Disposition: attachment; filename='.$file_name.'.pdf');

$pdf->Output('../saved_pdf/'.$file_name.'.pdf', 'F');

// The PDF source sent to browser with $filename.pdf
readfile('../saved_pdf/'.$file_name.'.pdf');
//============================================================+
// END OF FILE                                                
//============================================================+
?>