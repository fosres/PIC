#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::endl;

void reverseVector(vector<int>& v)
{
  int temp;
  for (int i = 0, j = v.size()-1; i < j; i++, j--)
{
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

}

int main() {

  vector<int> v(5);
  v[0] = 5;
  v[1] = 4;
  v[2] = 3;
  v[3] = 2;
  v[4] = 1;
  
  reverseVector(v);
  for ( int i = 0; i < v.size(); i++)
    cout << v[i] << endl;
}
