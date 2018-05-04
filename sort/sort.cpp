//sort.cpp

/*Homework 5
Due 5pm, Monday, May 7, 2018
We may take off up to 20% of the total marks for poor style; make sure to name your variables
reasonably, indent properly, and comment sufficiently. Submit sort.cpp.
Problem 1: (Sorting)
Write a program that sorts n integers, from smallest to largest, with what’s called the selection sort
method. The input and output should be exactly
How many numbers do you have?
[USER ENTERS A POSITIVE INTEGER]
Input number (count 1):
[USER ENTERS A INTEGER]
Input number (count 2):
[USER ENTERS A INTEGER]
...
Input number (count X):
[USER ENTERS A INTEGER]
The sorted input is:
X (count 1)
X (count 2)
...
X (count X)
You may not use any libraries aside from iostream and string.
Hint. There are many ways to sort an array, and some are quite sophisticated. In my opinion, the
selection sort method is the simplest (although not the best). We suggest you write your program
in the following steps.
• Get the number n from the user.
• Create a dynamically allocated array of size n.
• Store the numbers in the array.
• Find the smallest entry among entries 0 to n-1.
• Swap the smallest entry with entry 0. I.e., store the value of the 0th int, write the smallest
int into the 0th spot, and write the stored int into the spot the smallest int used to occupy.
• Find the smallest entry among entries 1 to n-1, and swap the smallest entry with entry 1.
1
• Find the smallest entry among entries 2 to n-1, and swap the smallest entry with entry 2.
• . . .
• Find the smallest entry among entries n-1 to n-1 (which is simply entry n-1), and swap the
smallest entry with entry n-1 (so do nothing).
• Output the array.
• Deallocate the array.
*/

#include <iostream>
using namespace std;


void swap(int x, int y) {

	int temp = x;
	x = y;
	y = temp;


}

int main() {

	int n, input;

	cout << "How many numbers do you have?" << endl;

	cin >> n;

	int *input_arr = new int[n]; 

	int i = 0;

	while ( i < n ) {

		cout << "Input number (count " << i+1 << ")" << endl;
		
		cin >> input;

		input_arr[i] = input;

		i++;

	}

	int min;

	for ( int i = 0; i < n ; i++ ) {

		min = input_arr[i];

		for ( int j = i + 1; j < n; j++ ) {

		if ( input_arr[j] < min ) {

			min = input_arr[j];

			int temp = input_arr[i];
			input_arr[i] = input_arr[j];
			input_arr[j] = temp;

		}

	}

}

for ( int i = 0; i < n; i++ ) {

	cout << "The sorted input is: " << endl;

	cout << input_arr[i] << "(count " << i+1 << ")" << endl;


}

delete[] input_arr;

return 0;

}
