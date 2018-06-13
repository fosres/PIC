# include <string>
# include <vector>
# include <cassert>
# include <algorithm>
# include <iostream>
// including all libraries you may want to use
using std :: cout ;
using std :: endl ;
void num_to_date ( int num , int & month , int & date ) {
assert (0 <= num && num <=364);
int days [12] = {31 ,28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31};
int i = 0; date = num;

while ((num-days[i]) >= 0)
{
  num -= days[i]; date -= days[i];
  i++;
}

month = i+1;
date++;

}
int main () {
int month , date ;
num_to_date (0 , month , date ); // output 1 and 1
cout << " Month is : " << month << " Date is : " << date << endl ;
num_to_date (10 , month , date ); // output 1 and 11
cout << " Month is : " << month << " Date is : " << date << endl ;
num_to_date (59 , month , date ); // output 3 and 1
cout << " Month is : " << month << " Date is : " << date << endl ;
num_to_date (364 , month , date ); // output 12 and 31
cout << " Month is : " << month << " Date is : " << date << endl ;
}
