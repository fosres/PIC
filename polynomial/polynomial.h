#ifndef __POLYNOMIAL_H__
#define __POLYNOMIAL_H__
#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>

namespace pic10a 
{
class polynomial {
private: 
int length;  
std::vector<double> v;

public:
  polynomial(double c = 0.0);
  int degree();
  int nonzeroTerms();
  void setCoeff(int deg, double c);
  double getCoeff(int deg);
  double operator()(double x);
  polynomial operator+(polynomial p);
  polynomial& operator+=(polynomial p);
  polynomial operator-();
  polynomial operator-(polynomial p);
  polynomial& operator-=(polynomial p);
  polynomial operator*(polynomial p);
  polynomial& operator*=(polynomial p);
};

polynomial operator+(double c, polynomial p);
polynomial operator*(double c, polynomial p);

std::ostream& operator<<(std::ostream& s, pic10a::polynomial p);

}


#endif // __POLYNOMIAL_H__
