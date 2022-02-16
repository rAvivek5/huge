<?php 
	session_start();
    
	// initialize variables
	$name = "";
	$address = "";
	$id = 0;
	$email = "";
	$gr = "";
	$mobile = "" ;
	$edit_state = false; 
	//$update = false;

	//connec to database
    $db = mysqli_connect('localhost', 'root', '', 'crud2', '8111');
    
    //if save button is clicked
	if (isset($_POST['save'])) {
		$name = $_POST['name'];
		$address = $_POST['address'];
		$email = $_POST['email'];
		$gr = $_POST['gr'];
		$mobile = $_POST['mobile'];
		$query = "INSERT INTO info (name, address, email, gr, mobile) VALUES ('$name', '$address', '$email', '$gr', '$mobile')"; 
        mysqli_query($db, $query);
		$_SESSION['msg'] = "Data saved";
		header('location: index.php');// redirect to index page after inserting
	}
	
	//Update records 
	if(isset($_POST['update']))
	{
		$name = mysql_real_escape_string($db, $_POST['name']);
		$address = mysql_real_escape_string($db, $_POST['address']);
		$id = mysql_real_escape_string($_POST['id']);
		
		mysqli_query($db, "UPDATE info SET name='$name', address='$address' WHERE id=$id");
		$_SESSION['message'] = "Address updated!"; 
		header('location: index.php');
	}
	
	// Delete records 
	if (isset($_GET['del'])) {
	$id = $_GET['del'];
	mysqli_query($db, "DELETE FROM info WHERE id=$id");
	$_SESSION['message'] = "Record deleted!"; 
	header('location: index.php');
	}
	// Retrieve records 
	$results = mysqli_query($db, 'SELECT * FROM info');