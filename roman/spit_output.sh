
#!/bin/bash
# This is the 
# template you should follow
# to do a successful
# for loop
# for reference, please visit: https://ryanstutorials.net/bash-scripting-tutorial/bash-loops.php

n=$(cat smart_roman_tests.txt | wc -l)
echo "$n"
for i in {1.."$n"}
do
sed -n "$i"p smart_roman_tests.txt > smart_output.txt 
./$roman_testable.out < smart_output.txt
done
