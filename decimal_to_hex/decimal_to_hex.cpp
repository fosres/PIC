//decimal_to_hex.cpp
/*
Written by

Tanveer Salim

Specs: 

for PIC 10A 4/23/18 2:24 PM

For reference, visit: https://blog.angularindepth.com/the-simple-math-behind-decimal-binary-conversion-algorithms-d30c967c9724

Convert a NONNEGATIVE decimal number to

decimal (base 16) number.

Write a program that converts a nonnegative decimal number into a hexadecimal number. The
number and output should be exactly:

Enter a decimal number:
[USER ENTERS A NONNEGATIVE INTEGER]
Your number in hex is 0xXX.

For example, an number of 4095 should produce the output
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

Terms: 

long long int input

long long int number = stores original input

string hex_num = stores resulting hexadecimal value

How It Works:

After 

cin >> input

and

number = input,

while (number > 0)								{

	the computer evaluates number % 16 and

	checks if resulting number is less than

	10. 
	
	If so, 
	
	simply appends that digit

	to hex_num

	Else

	resulting number converted to one of the five chars below:

	10 = 'A'	ASCII Code: 65

	11 = 'B'	ASCII Code: 66

	12 = 'C'	ASCII Code: 67

	13 = 'D'	ASCII Code: 68

	14 = 'E'	ASCII Code: 69

	15 = 'F'	ASCII Code: 70

	and appends the char to hex_num

	Then number /= 16 and restart this while loop
}

At the end, the string is printed as: "0x" + hex_num + "."
*/

#include <iostream>
#include <string>
using namespace std;

int main() {


	long long int input;

	long long int number; //stores original number

	string hex_num = "";

	cout << "Enter a decimal number:" << endl;

	cin >> input;

	number = input;

	

		while (number > 0) {

			if (number % 16 < 10) {

				char digit = (char)((number % 16) + 48);

				hex_num = digit + hex_num;

			}

			else {

				char letter = (char)((number % 16 - 10) + 65);

				hex_num = letter + hex_num;

			}


			number /= 16;

		}

		if (input == 0)
			cout << "Your number in hex is 0x" << input << "." << endl;
		else
			cout << "Your number in hex is 0x" << hex_num << "." << endl;


		return 0;



}