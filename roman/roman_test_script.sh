#!/bin/bash
	
	lines=$(wc -l < smart_roman_tests.txt)
	echo "$lines"
	for i in {1..23};
	do
		sed -n "$i"p smart_roman_tests.txt | ./roman_testable.out
	done
