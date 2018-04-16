#!/bin/bash
# spit_output.sh
# This program iteratively
# feeds lines of tests into
# roman_testable.out until
# last line is reached

# Terms:
# n is number of lines
# i is variable that
# iterates through line
# number.

n=$(wc -l < smart_roman_tests.txt)
for i in 'seq 1 $n'
	do echo "$i"	#sed -n ${i}p smart_roman_tests.txt | ./roman_testable.out # >> smart_output.txt 
done
