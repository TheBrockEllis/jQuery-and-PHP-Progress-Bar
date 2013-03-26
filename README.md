jQuery-and-PHP-Progress-Bar
===========================

A progress bar created with PHP and jQuery to give users a visual indicator when long scripts are executing

This progress bar was made out of necessity because we kept dealing with long scripts. We would execute a script
that would take > 3 minutes to complete and users would get upset because they weren't sure if any progress was being
made or not. Sometimes they would navigate away from the page and become even more upset, or worse, the script would
time out.

This script uses a PHP object to control the PHP code for the progress bar. There is a simple CSS file for the style 
which looks amazing in webkit browsers and gracefully degrades in older browsers. The .htaccess file is needed to 
disable gzipping which can cause the buffers to fail and nothing be echoed to the browser. 

The original code for this progress bar is credited to ______. 

This work is credited to Brock Ellis and Brent Zuch of Sycamore Leaf Solutions.
