// collatz.cpp

/* Written
   
   by
   
   Tanveer Salim

Given a positive integer, perform the following operations each step:

If the number is even, divide it by two.

If the number is odd, triple it and add one.


The Collatz conjecture states that you will always reach 1. 

Write a program that computes how many steps it takes to reach 

1 starting from a positive integer. The input and output should be

exactly

Input a positive integer:

[USER ENTERS A POSITIVE INTEGER]
Starting from X.
Step 1: X
Step 2: X
...
Step X: X
Starting from X, it took X steps.

For example, if you input 19, the output should be:

Input a positive integer:
19
Starting from 19.
Step 1: 58
Step 2: 29
Step 3: 88
Step 4: 44
Step 5: 22
Step 6: 11
Step 7: 34
Step 8: 17
Step 9: 52
Step 10: 26
Step 11: 13
Step 12: 40
Step 13: 20
Step 14: 10
Step 15: 5
Step 16: 16
Step 17: 8
Step 18: 4
Step 19: 2
Step 20: 1
Starting from 19, it took 20 steps.

If you input 1, the output should be:

Input a positive integer:
1
Starting from 1.
Step 1: 4
Step 2: 2
Step 3: 1
Starting from 1, it took 3 steps.

Terms:

const long long int input = stores

original input

long long int X = stores current

value after nth_step

long long int nth_step 

How It Works:

Using a do-while loop, follow the instructions on 

Collatz conjecture written above 

while (X != 1);

*/
