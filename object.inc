<?
class ProgressObj{

var $increment;
var $addWidth;
var $text;

    function ProgressObj(){
        $this->text = "Loading...";
    }

    function DisplayMeter(){
        print(" <script type='text/javascript' src='http://ajax.googleapis.com/ajax/libs/jquery/1.5.0/jquery.min.js'></script> ");
        print(" <link rel='stylesheet' type='text/css' href='style.css' /> ");

        print(" <div class='meter_container'> ");
        print("     <h1>" . $this->text . "</h1> ");
        print("     <div class='meter'> ");
		print("         <span style='width: 0%'></span> ");
        print("         <h4></h4> ");
		print("     </div> ");
		print(" </div> ");
    }

    function Calculate($count){
        $this->increment = 100 / $count;
    }

    function Animate(){
        $this->addWidth += $this->increment;
        $rounded = round($this->addWidth, 2);

        ?><script> 
            $('.meter > span').stop().animate({width: "<?= $this->addWidth ?>%"}, "fast");
            $('.meter > h4').html("Percent done: " + <?= $rounded; ?> + "%");
        </script><?php    
    }

    function Hide(){
        ?><script>
            setTimeout(function(){
                $(".meter_container").fadeOut();
            }, 2000);
        </script><?php
    }

} //end class

?>