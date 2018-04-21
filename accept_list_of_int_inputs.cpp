/*
Week 1
M Introduction to PIC 10A

Recursively accepts the long long int input 
from each and every line from command prompt 
until EOF




*/

#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	long long int input;
	cin >> input;
	if (input == -1) // input isn't supposed to be less than 0
		return 0;
//	method_here(input);
	main();
	
}
