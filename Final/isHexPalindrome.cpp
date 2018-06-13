# include <string>
# include <vector>
#include <string.h>
# include <cassert>
# include <algorithm>
# include <iostream>
// including all libraries you may want to use
using std :: cout ;
using std :: endl ;



bool isHexPalindrome(int num)
{
  assert ( num >=0);
char arr [16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char hex[10]; char *h = hex;

while (num > 0)
{
  *h++ = arr[num%16];
  num /= 16;
}
h--; //point to last element

if (strlen(hex)==1)
  return 1;

char hex_rev[10]; char *h_rev = hex_rev;

while (h >= hex)
{
  *h_rev++ = *h--;
}

if (strcmp(hex,hex_rev) == 0)
  return 1;

return 0;



}

int main()
{
  cout << isHexPalindrome (15) << endl ; // output 1 (15==0 xF )
cout << isHexPalindrome (257) << endl ; // output 1 (257==0 x101 )
cout << isHexPalindrome (100) << endl ; // output 0 (100==0 x64 )
cout << isHexPalindrome (253) << endl ; // output 0 (253==0 xFD )
cout << isHexPalindrome (170) << endl ; // output 1 (170==0 xAA )

  
}

