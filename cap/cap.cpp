// cap.cpp
/*

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


How It Works:



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

		if ( (i == 0) &&			// First letter of line
			
			(input[i] != ' ') &&

			(input[i] != '.') ) {
			
			if ( ( (int)(input[i]) >= 97 ) ) { // Its lowercase. Must Capitalize.
				
				input[i] = (char)((int)(input[i] - 32));
			}

			IN_A_WORD = 1;
		}

		else if ( (input[i] != ' ') // In a word past first letter
			
			&& (input[i] != '.') 
			
			&& IN_A_WORD ) {

			 if ( (int)(input[i]) < 97 ) { // Must lowercase CAPITAL LETTER

				input[i] = (char)( (int)(input[i] + 32) );

			} 
			
		}

		else if (input[i] != ' ' &&		 // First letter of word and NOT first letter of line
					
				input[i] != '.' && 
				
				/*( (int)(input[i]) >= 97 ) && */
				
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




