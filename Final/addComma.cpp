#include <iostream>
#include <cassert>
#include <string>
using std::string;
using std::cout;
using std::endl;

string addComma(long long int num)
{
  assert (num >= 0);

  string ans = "";

  if ( num == 0) 
    return "0";

  for (int i = 0; num > 0; i++)
  {
    if (i%3 == 0 && i != 0)
    {
      ans += ',';
      ans += ((char)(num%10 + '0'));
    }
    else // i%3 != 0
    {
      ans += ((char)(num%10 + '0'));
    }
    num /= 10;
  }

    // must reverse string
    
    char temp;
    for (int i = 0, j = ans.length()-1;i < j; i++, j--)
    {
      temp = ans[i];
      ans[i] = ans[j];
      ans[j] = temp;
    }
    
    return ans;
  
}

int main()
{
  cout << addComma (0) << endl ; // output 0
cout << addComma (7) << endl ; // output 7
cout << addComma (123) << endl ; // output 123
cout << addComma (23123) << endl ; // output 23 ,123
cout << addComma (1123123) << endl ; // output 1 ,123 ,123
cout << addComma (123123123) << endl ; // output 123 ,123 ,123
}

