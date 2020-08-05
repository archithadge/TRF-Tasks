<?php
include('db.php');
if ($_POST['submit']) 
{
    $stud_id = $_POST['stud_id'];

    $query = "SELECT * FROM `student` WHERE `stud_id` = '$stud_id'";
    $run = mysqli_query($con,$query);

    $row = mysqli_num_rows($run);
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Details</title>
    <link rel="stylesheet" href="css/res.css">
    <link href="https://fonts.googleapis.com/css2?family=Josefin+Sans:ital@1&display=swap" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Ubuntu:wght@500&display=swap" rel="stylesheet">
</head>
<body>
    <h1>Student Database</h1>
    <p>
        <?php 
        if($row == 1)
        {
            $user_row = mysqli_fetch_assoc($run);

            echo "<br>Welcome, ".$user_row['stud_name'];
            echo "<br><br>Your Branch is : ".$user_row['stud_branch'];
            echo "<br><br>Your CGPA is : ".$user_row['stud_cgpa'];
        }
        else
        {
            echo "Access Denied!!";
            echo mysqli_error($con);
        }
        
        ?>
    </p>
</body>
</html>