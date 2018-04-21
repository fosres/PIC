// palindrome.cpp 
/*
Written 
by
Tanveer Salim

For reference, visit: https://medium.com/@ManBearPigCode/how-to-reverse-a-number-mathematically-
97c556626ec6

Mathematically reverses a number

and determines if the reversed

number is equivalent to the

original number. A palindrome.

Terms:

long long int number = input number

long long int last_digit = stores last digit of 

remaining digits in number

long long int reverse = stores reversed number

as it is appended into this variable

Conditions:

Input Range: [0, LLONG_MAX]

How it Works:

1. Store the last digit from input number by:

		last_digit = number % 10;

2. Append the last_digit to reverse by:

		reverse = (reverse * 10) + last_digit;

   The purpose of (reverse * 10) is to increase

   the number place of each digit already existing

   by ten: so ones column becomes tens column, and

   tens column becomes the hundreds column, and 

   so on.

   Ex: number is 94
   
       old value of reverse == 4

	   and last_digit == 9

   reverse = (4 * 10) + 9 == 49

   See how the digit that used to be 
   
   in the ones column (4) became the

   digit in THE TENS column (40)?

       And if the number == 904 and
	   
	   old value of reverse == 40

	   and last_digit == 9

	   then:

   reverse == (40 * 10) + 9 == 409 

   See the pattern?

3. After appending last_digit to reverse,
   
   remove the last digit from number:

		number = number / 10;

   Ex: If number == 49

   number = number / 10 == 4

   4. This process iterates 
   
			while (number > 0)

*/

#include <iostream>
using namespace std;

int main() {

	long long int number; // == input number

	cout << "Input a nonnegative integer:" << endl;

	cin >> number;

	// Stores number so value can be printed in cout below

	const long long int input = number;  

	long long int last_digit;

	long long int reverse = 0; // Must be initialized as zero
	
	while (number > 0) {

		last_digit = number % 10;

		reverse = ( reverse * 10 ) + last_digit;

		number = number / 10;
	}

	if (input == reverse) {

		cout << input << " is a palindromic number."
			 << endl;
	}

	else {

		cout << input << " is not a palindromic number."
			 << endl;
	}

	return 0;
}