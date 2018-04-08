/*
Problem 2 for PIC 10A
Written by Tanveer Salim

Human Readable Time
Converts seconds into time in:

year(s), and remaining day(s), and remaining hour(s), 
and remaining day(s), and remaining minute(s), and
remaining second(s).

Terms:

1 year = 365 days
1 day = 24 hours
1 hour = 60 minutes
1 minute = 60 seconds

Conditions:

Input Range: [0 seconds, 1000 years in seconds]

Input Rules: Make sure input concedes with Input Range
and NO FLOATING POINT NUMBERS ALLOWED.

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int hrt() {
	
	// Implementation of Terms

	const long long int minute_in_seconds = 60;
	
	const long long int hour_in_seconds = 60 * minute_in_seconds;
	
	const long long int day_in_seconds = 24 * hour_in_seconds;

	const long long int year_in_seconds = 365 * day_in_seconds;

	long long int input_seconds;
	
	
	cout << "Input time in seconds" << endl;
	cin >> input_seconds;

	if (input_seconds == -1)
		return 0;
	cout << "The time is " << input_seconds / year_in_seconds
		 << " year(s), ";
	
	/*
	
	remaining_seconds will literally carry over remaining seconds
    	after input_seconds is organized into year(s), hour(s), etc.

	*/
	
	long long int remaining_seconds = input_seconds % year_in_seconds;

	cout << remaining_seconds / day_in_seconds 
		 << " day(s), ";

	remaining_seconds %= day_in_seconds;

	cout << remaining_seconds / hour_in_seconds 
		 << " hour(s), ";

	remaining_seconds %= hour_in_seconds;

	cout << remaining_seconds / minute_in_seconds
		 << " minute(s), ";

	remaining_seconds %= minute_in_seconds;

	cout << "and "
		 << remaining_seconds
		 << " second(s).\n";
	
}

int main() {

	for ( int c = 0; c < 1000000 ; c ++ )
		hrt();


	return 0;


}

