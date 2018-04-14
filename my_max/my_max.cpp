/* my_max.cpp
 * Written by 
 * Tanveer Salim
 *
 * for PIC-10A
 *
 * 
 * Terms: 
 *
 * n is the number of doubles
 * inputted into the program
 *
 * input is the currentmost
 * double entered into the 
 * command line.
 *
 * max is the is currentmost
 * maximum double entered thus
 * far
 *
 * Conditions:
 * 
 * Whatever double
 * is highest out of
 * the n doubles
 * entered, is the
 * maximum value
 * that is printed.
 *
 * If the input value
 * is greater than the maximum
 * value, that input becomes
 * the new maximum
 *
 * The maximum
 */

#include <iostream>
using namespace std;
int main() {

	long long int n;

	cout << "How many numbers do you have?" << endl;

	cin >> n;

	double input; double max;

	for ( long long int c = 1 ; c <= n; c++) {

		cout << "Input number (count " << c << "):" << endl;
		
		if ( c == 1 ) {
			
			cin >> max;
			
			continue;

		}

		cin >> input;

		if ( input > max )
			max = input;


	}

	cout << "The maximum value is " << max << endl;
}



