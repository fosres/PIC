//decimal_to_hex.cpp
/*
Written by

Tanveer Salim

for PIC 10A 4/23/18 2:24 PM

For reference, visit: https://blog.angularindepth.com/the-simple-math-behind-decimal-binary-conversion-algorithms-d30c967c9724

Convert a NONNEGATIVE decimal number to

decimal (base 16) number.

Write a program that converts a nonnegative decimal number into a hexadecimal number. The
input and output should be exactly:

Enter a decimal number:
[USER ENTERS A NONNEGATIVE INTEGER]
Your number in hex is 0xXX.

For example, an input of 4095 should produce the output
Your number in hex is 0xFFF.

You may not use any libraries aside from iostream and string. You may not use the dec, hex,
or oct format flags provided by the iostream library. You may not use the stoi, stol, stoul,
stoll, stoull, stof, stod, and stold functions provided by the string library.

Hint. Consider the following code.

int i = 15;
char c = static_cast <char >( i -10+’A’);
string s = string (1,c ); // convert char into a string of length 1
cout << s << endl ;

The output is F.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {


	long long int input;
	
	string hex_num = "";

	cout << "Enter a decimal number:" << endl;

	cin >> input;

	while (input > 0) {

		if (input % 16 < 10) { // since input % 16, only need to concatenate digit
			
			char digit = (char)((input % 16) + 48); 
			
			hex_num = digit + hex_num;

		}

		else {// value of ( input % 16 ) >= 10. Need to use letters 

			char letter = (char)((input % 16 - 10) + 65); // 65 is the ASCII code of 'A'
			
			hex_num = letter + hex_num;

		}


		input /= 16;

	}

	cout << "Your number in hex is 0x" << hex_num << "." << endl;




	return 0;
}