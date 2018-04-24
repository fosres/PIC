// PIC-10A Week 1 Notes

/* Library: A collection of code that has 

functionality that will likely be useful to 

other programs.

*/

// Exercise Write some code that outputs the 

// following:

/* I put
   a newline \n there!
   */
/*
#include <iostream>
using namespace std;

int main() {

	cout << "I put" << endl;
	cout << "a newline \\n there!" << endl;





} */

/* C++ is a compiled language:
 *
 * C++ code must be compiled 
 *
 * into an executable before
 *
 * it can be run. Roughly speaking,
 *
 * it has 4 stages:
 *
 * 1. Preprocessing
 *
 * 2. Compilation
 *
 * 3. Assembling 
 *
 * 4. Linking
 *
 * Interpreted Languages:
 *
 * Executed directly without
 *
 * compilation. Slower than
 *
 * compiled languages.
 *
 * Preprocessor directives (like
 *
 * #include or #define) start
 *
 * with hash character #.
 *
 * A preprocessor directive ends
 *
 * at the end of the line, not
 *
 * a semicolon.
 *
 * The preprocessor handles the
 *
 * preprocessor directives first
 *
 * and passes on the result
 *
 * to the compiler.
 *
 * Preprocessor directives are
 *
 * agnostic to the C++ programming
 *
 * language.
 *
 * Two ways to use #include.
 *
 * #include <cmath>
 *
 * #include "my_header.h"
 */

/*
#include <stdio.h>

int main() {

	const int three = 3;

	printf("%d\n", three);

}
*/

/*
WHEN IT COMES TO CODING, YOU

WILL NEED TO MAKE A TRADEOFF

BETWEEN THE HOURS YOU SPEND

PROGRAMMING VS THE PROGRAM'S

SPEED.

REMEMBER YOU ARE NOT SELLING

GREAT CODE, YOU ARE SELLING

A COMMODITY OR SERVICE. THAT'S

WHY WINDOWS SELLS GREAT and 

LINUX OR POSIX COMPLIANT OSes

don't.

When it comes to 

programming, fail early,

fail loudly.

Good programming habits

ensure errors are caught

LOUDLY AND EARLY.

Memory leaks are terrible

because they are late

and silent.

assert (conditional)

is a DEBUGGING TOOL that

allows you to catch

run-time errors. If 

condition is not true,

the program will hault

(which is definitely

loud).

assert is a great

debugging tool

assert conditions that

you think must be true.

YOU MIGHT BE WRONG.

Use assert profusely.

You may not want assert

to hault a final 

product.

sizeof returns number

of bytes it takes to

store a variable
*/
#include <stdio.h>
int main() {

	char a = 'A';

	char f = 'F';

	printf("%d\n",a);
	printf("%d\n",f);
}
