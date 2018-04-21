// roman.cpp

/* For background information,
 * please see:
 *
 * https://www.rapidtables.com/convert/number/how-number-to-roman-numerals.html
 * 
 * Terms:
 *
 * x = input
 *
 * v = one of the constant numbers explained below
 * Input Range: [1,3999]
 * Conditions:
 *
 * How the program works:
 *
 * 1. From the following table,
 *    
 *    find the highest value v
 *
 *    that x is greater than or
 *
 *    equal to.
 *
 *
 *    1		I
 *    
 *    4		IV
 *
 *    5		V
 *
 *    9		IX
 *
 *    10	X
 *
 *    40	XL
 *
 *    50	L
 *
 *    90	XC
 *
 *    100	C
 *
 *    400 	CD
 *
 *    500	D
 *
 *    900	CM
 *
 *    1000	M
 *    
 *    These are the possible
 *    values for v. 
 *
 *    2. Write the roman numeral n that you
 *
 *    	 found and subtract its value from
 *
 *    	 the x = input:
 *
 *    	 input = input - v;
 *
 *    3. Recursively do steps 1 then 2 until
 *
 *    	 x == 0
 *
 */
