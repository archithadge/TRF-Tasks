<?php

$con = mysqli_connect('localhost','root','','noddy1');
if(!$con)
{
    echo "Connection error". mysqli_connect_error();
}
else
{
    echo "<h3>Database connection successfull</h3>";
}

?>