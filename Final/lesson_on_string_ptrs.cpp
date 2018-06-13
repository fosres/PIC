#include <iostream>
#include <stdio.h>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main() {
  
  string a = "The";

  char * s = &a[0];

  printf("%s\n",s);

  #if 0

  Lesson learned, you should use

  the pointer address variable WITHOUT

  indirection operator when printing

  string using printf("%s\n",ptr);

  #endif
}
