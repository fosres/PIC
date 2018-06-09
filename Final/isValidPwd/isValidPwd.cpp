#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

bool isValidPwd ( const string & pwd ) {
  int islongEnough = 0; int hasCapital = 0; int haslowercase = 0;
  int hasNumber = 0; int hasNOSpecialChar = 1; 
  int len = 0; int i = 0;

  while (pwd[i++] != '\0')len++;

  if (len >= 8) islongEnough = 1;

  i = 0;

  while (pwd[i] != '\0')
  {
    if (pwd[i] >= 'A' && pwd[i] <= 'Z')
      hasCapital = 1;
    else if (pwd[i] >= 'a' && pwd[i] <= 'z')
      haslowercase = 1;
    else if (pwd[i] >= '0' && pwd[i] <= '9')
      hasNumber = 1;
    else 
      hasNOSpecialChar = 0;
    
    i++;
  }

  return (islongEnough && hasCapital && haslowercase && hasNumber && hasNOSpecialChar);
}

int main()
{

cout << isValidPwd ( string ( "aabbccD8" )) << endl ; // output 1 ( true )
cout << isValidPwd ( string ( "aB2" )) << endl ; // output 0 ( false )
cout << isValidPwd ( string ( "abcdEF 9" )) << endl ; // output 0 ( false )
cout << isValidPwd ( string ( "ABCDEFG" )) << endl ; // output 0 ( false )
cout << isValidPwd ( string ( "ABCabc2 !" )) << endl ; // output 0 ( false )

  
}

  



