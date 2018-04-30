

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
			
			input[i] = (char)( (int)(input[i] - 32) );

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




