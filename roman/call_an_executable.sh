#!/bin/bash

	line_limit="$(wc -l smart_roman_tests.txt)"

	for x in {1..line_limit};
	do
		 ./roman_testable.out < "$(sed -n "$xp" smart_roman_tests.txt)" >> smart_output.txt
	done
