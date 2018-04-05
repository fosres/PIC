/*
Week 1
M Introduction to PIC 10A


*/

#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	
	char character = getchar();
	if (character == EOF) {
		putchar(character);
		return 0;
	}
	putchar(character);
	main();


	
}
