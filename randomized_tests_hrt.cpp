/* This file prints 1,000,000
 * randomized test values for
 * hrt.cpp
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

	srand( ( unsigned ) time (NULL) );
	const long long int HRT_MAX = 31536000000;

	for (int c = 0; c < 1000000 ; c ++ ) {

		printf("%lld\n", (long long int)((double)rand()/RAND_MAX * HRT_MAX ));


	}



}
