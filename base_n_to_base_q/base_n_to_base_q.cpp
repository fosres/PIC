//hex_to_bin.cpp
// NOW ALL THAT IS LEFT TO SET UP A CONDITIONAL SPECIFIC FOR HEXADECIMAL LETTERS
/* Write a program that converts a nonnegative 
 *
 * hexadecimal number into a base_q_result number. The input
 *
 * and output should be exactly:
 * Enter a hexadecimal number:
 *
 * [USER ENTERS A NONNEGATIVE HEXADECIMAL INTEGER]
 *
 * Your number in base_q_result is 0bXXXX.
 *
 * For example, an input of 0xffa should produce the output 1
 *
 * Your number in base_q_result is 0b111111111010.
 *
 * An input of 0x1C should produce the output
 *
 * Your number in base_q_result is 0b11100.
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
		base *= n;

	return base;
}

int main() {

	string input;
	
	int base n;

	int base q; // REMEMBER, n > q

	cout << "Enter a hexadecimal number:\n";

	cin >> input;

	cout << "Enter a base n number:\n";

	cin >> n;

	cout << "Enter a base q number.\n\nREMEMBER, n > q:\n" << endl;

	cin >> q

	const int A = 65; // ASCII code for 'A'

	const int zero = 48;

	long long int number; // Much later const long long int num = number

	for ( long long int c = input.length() - 1; c >= 2; c-- ) {
		
		int base_n_digit = (int)( input[c] );
		
		if ( base_n_digit >= 97 ) {

			base_n_digit -= 32;
		}

		if ( base_n_digit >= 65 ) {

			number += pow(n, input.length() - c - 1) * ( (base_n_digit - A) + 10 );
		}
		else { // The digit is less than 10

			number += pow(n, input.length() - c - 1) * (base_n_digit - zero);

		}

	}

	string base_q_result = "";

	char digit;

	const long long int num = number; //NEEDS TO HOLD ORIGINAL INPUT

	while ( number > 0 ) {

		digit = (char)( (number%q) + 48 );

		base_q_result = "( " + digit + " )" + base_q_result;

		number /= q;


	}

	cout << num << endl;

	if ( ( input.compare( "0" ) == 0 ) || (input.compare( "0" ) == 0 ) )
		cout << "Your number in base q is 0" << n << "x" << base_q_result <<  "." << endl;
	else
		cout << "Your number in base q is 0" << n << "x" << base_q_result << "." << endl;


}
