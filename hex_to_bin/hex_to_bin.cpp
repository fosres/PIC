//hex_to_bin.cpp
/* 
Specs:

Write a program that converts a nonnegative
*
* hexadecimal number into a binary number. The input
*
* and output should be exactly:
* Enter a hexadecimal number:
*
* [USER ENTERS A NONNEGATIVE HEXADECIMAL INTEGER]
*
* Your number in binary is 0bXXXX.
*
* For example, an input of 0xffa should produce the output:
*
* Your number in binary is 0b111111111010.
*
* An input of 0x1C should produce the output:
*
* Your number in binary is 0b11100.
*
* Assume the input starts with 0x or 0X. Your
*
* program must work with both capital and lower case
*
* inputs. You may not use any libraries aside from
*
* iostream and string. You may not use the
*
* dec, hex, or oct format flags provided by the iostream
*
* library. You may not use the stoi, stol,
*
* stoul, stoll, stoull, stof, stod, and stold functions
*
* provided by the string library.
*
* Hint. You may find s.erase(.., ..) and s.input.length() useful,
*
* where s is of type string.
*/

/* 

Terms:

string input;

const int ASCII_of_A = 65; 

const int ASCII_of_0 = 48;

long long int number = 0;


*/

/* 

How It Works:

Conceptually, the program converts the hexadecimal

to a long long int by doing the following:

Say we have "0xffa" as input.

The computer converts the chars to long long ints

and does this:

0	x	f	f	a
		2	1	0

		See the index numbers above?

		Those are the exponents in the below equation:

		15(f) * 16^2 + 15(f) * 16^1 + 10(a) * 16^0 

		= 0b111111111010

This example makes clear the general format of

hexadecimal to decimal conversion:

char f, l; 

0	x	l	..	f
		n	..	0

		(long long int)f) * 16^0 + .. + (long long int)f) * 16^n =

		= 0b...

The computer exactly does this by doing the following:

Program first converts hexadecimal to decimal by:

	1. Line 148: Reading digits of hexadecimal string from 
	
		right to left before reaching the 'x'

		char. Once it reads the 'x' char, for

		loop ends.

	2. But while in for loop:
		
		1. The char is converted to a long
		
			long int by

			typecasting. 
			
			If the char is one of the six 
			
			hexadecimal letters in lowercase, 
				
				the char is immediately

				CAPITALIZED by subtracting 32 from

				the int ASCII code.

		2. The computer converts the

			char to a long long int, multiply
			
			this to pow function, and add the 
			
			result to number.  

			






*/

#include <iostream>
#include <string>
using namespace std;

long long int pow(long long int base, long long int exponent) {

	if (exponent == 0)
		return 1;
	for (int c = 1; c < exponent; c++)
		base *= 16;

	return base;
}

int main() {

	string input;

	cout << "Enter a hexadecimal number:\n";

	cin >> input;

	const int ASCII_of_A = 65; 

	const int ASCII_of_0 = 48;

	long long int number = 0; 

	for (long long int c = input.length() - 1; c >= 2; c--) { // starting from last char to third char, inclusive

		long long int base_16_digit = (long long int)(input[c]);

		if (base_16_digit >= 97) {

			base_16_digit -= 32; // since the letter is lowercase, CAPITALIZE IT
		}

		if (base_16_digit >= 65) {

			number += pow(16, input.length() - c - 1) * ((base_16_digit - ASCII_of_A) + 10);
		}
		else { // The digit is less than 10

			number += pow(16, input.length() - c - 1) * (base_16_digit - ASCII_of_0 );

		}

	}

	string binary = "";

	char digit;

	while (number > 0) {

		digit = (char)((number % 2) + 48);

		binary = digit + binary;

		number /= 2;

	}

	if ((input.compare("0x0") == 0) || (input.compare("0x0") == 0)) {

		cout << "Your number in binary is 0b0" << "." << endl;
	}
	
	else {
		
		cout << "Your number in binary is 0b" << binary << "." << endl;

	}


}