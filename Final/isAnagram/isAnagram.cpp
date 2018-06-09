#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::endl;

bool isAnagram(string s1, string s2)
{
  int len1, len2, i = 0, j = 0;


  vector<int> a(26,0);
  vector<int> b(26,0);

  i = 0; j = 0;

  while (s1[i] != '\0')
  {
    if (s1[i] == ' ') { }
    else if (s1[i] >= 'A' && s1[i] < 'a')
      a[(int)(s1[i]-'A')]++;
    else //lowercase char
      a[(int)(s1[i]-'a')]++;
    i++;
  }


  char *s2_p = &s2[0];
  while (*s2_p != '\0')
  {
    if (*s2_p == ' ') { }
    else if (*s2_p >= 'A' && *s2_p < 'a')
      b[(int)(*s2_p-'A')]++;
    else // lowercase char
      b[(int)(*s2_p-'a')]++;
    s2_p++;
  }

  return (a==b);



}

int main() {

  string s = "Hello!";
  #if 0
  std::cout << strlen(s) << endl;
  #endif
  vector<int> a(26,0);
  vector<int> b(26,0);

  string c ="forty five";
  string d = "over fifty";
  
  cout << isAnagram(c,d) << endl;

  
  
}
