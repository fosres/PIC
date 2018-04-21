/*
Problem 1
Written by Tanveer Salim
for PIC 10A

This problem calculates the area of
triangle using Heron's formula.
*/
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	double first_side, second_side, 
		   third_side, semiperimeter, area;
	
	cout << "What is the length of the first side?" << endl;
	cin >> first_side;
	cout << "What is the length of the second side?" << endl;
	cin >> second_side;
	cout << "What is the length of the third side?" << endl;
	cin >> third_side;

	semiperimeter = (first_side + second_side + 
					third_side) / 2.;

	area = sqrt(	semiperimeter * 
		(semiperimeter - first_side) * 
		(semiperimeter - second_side) * 
		(semiperimeter - third_side)	);

	cout << "The area of the triangle is " << area << "." << endl;

}
