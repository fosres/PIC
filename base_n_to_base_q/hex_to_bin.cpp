//hex_to_bin.cpp
/* Write a program that converts a nonnegative 
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
 * For example, an input of 0xffa should produce the output 1
 *
 * Your number in binary is 0b111111111010.
 *
 * An input of 0x1C should produce the output
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
 *
 */

#include <iostream>
#include <string>
using namespace std;

long long int pow( long long int base, long long int exponent) {

	if ( exponent == 0)
		return 1;
	for ( int c = 1; c < exponent; c++)
		base *= 16;

	return base;
}

int main() {

	string input;

	cout << "Enter a hexadecimal number:\n";

	cin >> input;

	const int A = 65; // ASCII code for 'A'

	const int zero = 48;

	long long int number; // Much later const long long int num = number

	for ( long long int c = input.length() - 1; c >= 2; c-- ) {
		
		int base_16_digit = (int)( input[c] );
		
		if ( base_16_digit >= 97 ) {

			base_16_digit -= 32;
		}

		if ( base_16_digit >= 65 ) {

			number += pow(16, input.length() - c - 1) * ( (base_16_digit - A) + 10 );
		}
		else { // The digit is less than 10

			number += pow(16, input.length() - c - 1) * (base_16_digit - zero);

		}

	}

	string binary = "";

	char digit;

	const long long int num = number; //NEEDS TO HOLD ORIGINAL INPUT

	while ( number > 0 ) {

		digit = (char)( (number%2) + 48 );

		binary = digit + binary;

		number /= 2;


	}

	cout << num << endl;

	if ( ( input.compare( "0x0" ) == 0 ) || (input.compare( "0x0" ) == 0 ) )
		cout << "Your number in binary is 0b0" <<  "." << endl;
	else
		cout << "Your number in binary is 0b" << binary << "." << endl;


}
