# include <string>
#include <string.h>

# include <cassert>
# include <algorithm>
# include <iostream>
// including all libraries you may want to use
using std::string;
using std :: cout;
using std :: endl;

int romanToInt(string romanNum) //next time stick with the data type of the input on the final
{
  static char numerals[8] = "IVXLCDM"; 

  char * roman_zero = &romanNum[0];

  char * roman_rev = &romanNum[romanNum.length()-1];

  int sum = 0; int adder;

  while (roman_rev >= &romanNum[0] )
  {
    switch(*roman_rev)
    {
      case 'I':
        adder = 1; break;
      case 'V':
        adder = 5; break;
      case 'X':
        adder = 10; break;
      case 'L':
        adder = 50; break;
      case 'C':
        adder = 100; break;
      case 'D':
        adder = 500; break;
      case 'M':
        adder = 1000; break;
      
    }

    if (roman_rev == &romanNum[romanNum.length()-1])
      sum += adder;
    else if (strstr(numerals,roman_rev) >= strstr(numerals,(roman_rev+1)))
      sum += adder;
    else
      sum += -adder;
    roman_rev--;
  }
  
  return sum;
}
int main()
{
  cout << romanToInt("II") << endl;
cout << romanToInt ( "IV" ) << endl ; // output 4
cout << romanToInt ( "V" ) << endl ; // output 5
cout << romanToInt ( "MC" ) << endl ; // output 1100
cout << romanToInt ( "LV" ) << endl ; // output 55
cout << romanToInt ( "MXLI" ) << endl ; // output 1041
  
}

#if 0

Lesson learned. If you wish to retain array value when

it its zeroth memory address is called as a parameter

in a function, you better make sure it is a static array

#endif
