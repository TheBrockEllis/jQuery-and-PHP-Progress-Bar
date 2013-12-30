<?php
require_once("object.php");
?>

<!DOCTYPE html>
<html>
<head>
    <meta charset='UTF-8'>
    <title>Progress Bars</title>
</head>

<body>
    <div id="page-wrap" style='width: 50%; margin: auto;'>
		
        <h1>ProgressObj Test</h1>

        <?php        
            //create new progress bar object
            $po = new ProgressObj();

            //in records present, set loading text and display bar
            $po->text = "Grabbing first 10 users...";
            $po->DisplayMeter(); 

            //grab some data from a database to loop through
            $count = 10;

            //give the number of units in your loop to the object
            $po->Calculate($count);

            //loop through the returned data 
            for($i=0; $i < $count; $i++){

                //do something, like print a number
                print("User ID: $i <br />");
                
                // This is for the buffer achieve the minimum size in order to flush data
                echo str_repeat(' ', 2480);

                //simulate long, complex function function
                usleep(500000);

                //at the end of each loop, run Animate() to move the bar
                $po->Animate();

                //push the content out to the browser
                ob_flush();
                flush();
                
            }

            //hide the progress bar after everything is done
            $po->Hide();        

        ?>
    </div>
    
</body>
</html>
