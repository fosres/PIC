// cap.cpp
/*
WRITTEN BY

Tanveer Salim

for PIC10A


Specs:

Write a program that enforces the following capitalization rule: the first letter of every word (including
articles, coordinating conjunctions, and prepositions) should be capitalized. The input can
have capital letters, lower case letters, spaces, and periods. No need to handle other punctuation.
The input and output should be exactly:

Input a sentence:
[USER ENTERS A STRING]
The correct capitalization is:
XXXX

For example, an input of
If YOU come. at four tHEN at THREE i shall Begin to be happy.

should produce the output

If You Come. At Four Then At Three I Shall Begin To Be Happy.

An input of

as with all MATTERS oF the HEART youll kNOW when you find IT

should produce the output

As With All Matters Of The Heart Youll Know When You Find It

You may not use any libraries aside from iostream and string.

Terms:

bool IN_A_WORD = boolean to check if capitalization is necessary

string input = input string

getline(cin, input);

int i = 0 // Used to iterate through the array

How It Works:

The program iterates through the chars of

input until it hits NULL character.

So:

while ( input[i] != '\0' ) 

	If index is 0 AND
		
		the current char is NOT 
		
		a punctuation mark AND

		If the char is lowercase

		Then
		
		Capitalize char in input

		by subtracting 32 from

		its ASCII code. The general

		format to do this throughout

		this program is:

		input[i] = (char)((int)(input[i] - 32));

		Lastly, now that the first 

		letter of a word has been processed,

		we are thus IN_A_WORD = 1;

		Done

	Else If
		
		char is in a word past first letter
		
		Then
			
			lowercase capital letter. The

			program first checks if the

			char is already in lowercase,

			and if not it must lowercase

			it. The general format for

			lowercasing a char is:

			input[i] = (char)( (int)(input[i] + 32) );

		Done

	Else If
		
		char is a first letter of word 
		
		and NOT first letter of line,

		Then
			
			Computer checks if char

			is lowercase and if so,

			the char must be 

			CAPITALIZED. See Line 

			79 for the formula to

			capitalize a lowercase

			letter. Finally, program

			will set 
			
			IN_A_WORD = 1;

		Done

	Else

		Then

		The char is a ' ' or '.'

		The program will simply

		set 
		
		IN_A_WORD = 0;

		Done




*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	bool IN_A_WORD = 0;

	string input;

	getline(cin, input);

	int i = 0;

	while (input[i] != '\0') {

		if ( (i == 0) &&			// char of first letter of line
			
			(input[i] != ' ') &&

			(input[i] != '.') ) {
			
			if ( ( (int)(input[i]) >= 97 ) ) { // It's lowercase. Must Capitalize.
				
				input[i] = (char)((int)(input[i] - 32));
			}

			IN_A_WORD = 1;
		}

		else if ( (input[i] != ' ') // char is in a word past first letter
			
			&& (input[i] != '.') 
			
			&& IN_A_WORD ) {

			 if ( (int)(input[i]) < 97 ) { // Must lowercase CAPITAL LETTER

				input[i] = (char)( (int)(input[i] + 32) );

			} 
			
		}

		else if (input[i] != ' ' &&		 // First letter of word and NOT first letter of line
					
				input[i] != '.' && 
				
				!IN_A_WORD ) { 

			if ( ( (int)(input[i]) >= 97 ) ) {

					input[i] = (char)((int)(input[i] - 32)); //Lowercase Letter MUST BE CAPITALIZED
			}
				IN_A_WORD = 1;
		}

		else { // input[i] == ' ' XOR input[i] == '.'

			IN_A_WORD = 0;

		}

		cout << input[i];

		i++;

	}

	cout << '\n';

	return 0;

}




