<?php
$con = mysqli_connect('localhost','root','','robospark');
if(!$con)
{
    echo "Connection Error".mysqli_connect_error();
}
else
{
    echo "<h3>Database Connection Success</h3>";
}

?>