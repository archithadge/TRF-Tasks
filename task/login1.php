<?php

session_start();
include('db.php');

if(isset($_POST['submit']))
{
    $st_id = $_POST['student_id'];

}

$query  = "SELECT * FROM  `user1` WHERE `stud_id`='$st_id' ";

$run = mysqli_query($con,$query);

$row = mysqli_num_rows($run);

if($row==1)
{
    $_SESSION['stud_id']=$st_id;
    $user_row = mysqli_fetch_assoc($run);
    echo "Login Sucsessful !!!"."<br>";
    echo "<br>"."Welcome"."<br>";
    echo "Name: ".$user_row['stud_name']."<br>";
	echo "Branch: ".$user_row['stud_branch']."<br>";
	echo "C.G.P.A.: ".$user_row['stud_cgpa']."<br>";
}

else
{
    echo "Login Unsuccessful";
	echo mysqli_error($con);
}

?>