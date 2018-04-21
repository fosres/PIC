// roman_testable.cpp

/* For background information,
 * please see:
 *
 * https://www.rapidtables.com/convert/number/how-number-to-roman-numerals.html
 * 
 * Terms:
 *
 * x = input
 *
 * v = one of the constant numbers explained below
 * Input Range: [1,3999]
 * Conditions:
 *
 * How the program works:
 *
 * 1. From the following table,
 *    
 *    find the highest value v
 *
 *    that x is greater than or
 *
 *    equal to.
 *
 *
 *    1		I
 *    
 *    4		IV
 *
 *    5		V
 *
 *    9		IX
 *
 *    10	X
 *
 *    40	XL
 *
 *    50	L
 *
 *    90	XC
 *
 *    100	C
 *
 *    400 	CD
 *
 *    500	D
 *
 *    900	CM
 *
 *    1000	M
 *    
 *    These are the possible
 *    values for v. 
 *
 *    2. Write the roman numeral n that you
 *
 *    	 found and subtract its value from
 *
 *    	 the x = input:
 *
 *    	 input = input - v;
 *
 *    3. Recursively do steps 1 then 2 until
 *
 *    	 x == 0
 *
 */

#include <iostream>
#include <string>
using namespace std;

int input;

string roman_numeral;

int main() {

	cin >> input;

    while ( input != 0 ) {

	if ( input >= 1000 ) {

		input = input - 1000;

		roman_numeral += "M";

		continue;
	}	

	if ( input >= 900 ) {

		input = input - 900;

		roman_numeral += "CM";

		continue;
	}	

	if ( input >= 500 ) {

		input = input - 500;

		roman_numeral += "D";

		continue;
	}	

	if ( input >= 400 ) {

		input = input - 400;

		roman_numeral += "CD";

		continue;
	}	

	if ( input >= 100 ) {

		input = input - 100;

		roman_numeral += "C";

		continue;
	}	

	if ( input >= 90 ) {

		input = input - 90;

		roman_numeral += "XC";

		continue;
	}	

	if ( input >= 50 ) {

		input = input - 50;

		roman_numeral += "L";

		continue;
	}	

	if ( input >= 40 ) {

		input = input - 40;

		roman_numeral += "XL";

		continue;
	}	

	if ( input >= 10 ) {

		input = input - 10;

		roman_numeral += "X";

		continue;
	}	

	if ( input >= 9 ) {

		input = input - 9;

		roman_numeral += "IX";

		continue;
	}	

	if ( input >= 5 ) {

		input = input - 5;

		roman_numeral += "V";

		continue;
	}	

	if ( input >= 4 ) {

		input = input - 4;

		roman_numeral += "IV";

		continue;
	}	

	if ( input >= 1 ) {

		input = input - 1;

		roman_numeral += "I";

		continue;
	}	

    }

	
	cout << roman_numeral << endl;
	
	return 0;



}









