

#include <iostream>
#include <string>
using namespace std;

int main() {

	bool IN_A_WORD = 0;

	string input;

	getline(cin, input);

	int i = 0;

	while ( input[i] !='\0' ) {

		if ( (input[i] != ' ' ) && ( input[i] != '.' ) && !IN_A_WORD ) {

			if ( (int)(input[i]) >= 97 ) {

				input[i] = (char)( (int)( input[i] - 32) );

			}

				IN_A_WORD = 1;

			}

		else if ( input[i] != ' ' && input[i] != '.' && ( (int)(input[i]) < 97 ) && IN_A_WORD ) {

			input[i] = (char)( (int)( input[i]
+ 32));
		}

		else { // input[i] == ' ' XOR input[i] == '.'

			IN_A_WORD = 0;	

		}

	cout << input[i];

	i++;

		}

	return 0;

	}




