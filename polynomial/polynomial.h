#ifndef __POLYNOMIAL_H__
#define __POLYNOMIAL_H__
#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>
using std::vector;

class polynomial {
private: 
int length;  
vector<double> v;

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

int polynomial::degree()
{

	return (int) v.capacity() - 1;

}

int polynomial::nonzeroTerms()
{
	
	int num_zero_terms = 0;
	for ( int i = 0; i < v.capacity(); i++)
		if ( v[i] != 0)
			num_zero_terms++;

	return num_zero_terms;

}

void polynomial::setCoeff(int deg, double c)
{

	assert (deg >=0);

	if ( deg >= v.size() - 1)
	{
		int biggest_index = (int) v.capacity()-1;	

		v.resize(deg+1);	
		
		v[deg] = c;
	}
	else // (deg < v.size()-1)
	{

		v[deg] = c;

	}

}

double polynomial::getCoeff(int deg)
{
	assert (deg >= 0);

	if ( (deg > v.capacity()-1) )
		return 0;
	else
		return v[deg];

}

  double polynomial::operator()(double x)
{

	double ans = 0;

	for (int i = 0; i < v.capacity(); i++)
		ans += getCoeff(i)*pow(x,i);

	return ans;
}


// just add c to 0th element of vector
polynomial operator+(double c, polynomial p)
{
	p.setCoeff(0,p.getCoeff(0)+c);	
	
	return p;

}

polynomial operator*(double c, polynomial p)
{
	p.setCoeff(0,p.getCoeff(0)*c);	
	
	return p;

}

  polynomial polynomial::operator+(polynomial p)
{
	polynomial sum;

	if ( v.capacity() > p.v.capacity() )
		sum.v.resize(v.capacity());
	else // capacity() <= p.capacity()
		sum.v.resize(p.v.capacity());

	for ( int i = 0; i < sum.v.capacity(); i++)
		sum.v[i] = v[i] + p.v[i];

	return sum;

}
  polynomial& operator+=(polynomial p);

  polynomial polynomial::operator-(polynomial p)
{
	polynomial difference;

	if ( v.capacity() > p.v.capacity() )
		difference.v.resize(v.capacity());

	else // capacity() <= p.capacity()
		difference.v.resize(p.v.capacity());

	for ( int i = 0; i < difference.v.capacity(); i++)
		difference.v[i] = v[i] - p.v[i];

	return difference;

}

  polynomial& operator-=(polynomial p);
  polynomial operator*(polynomial p);
  polynomial& operator*=(polynomial p);



std::ostream& operator<<(std::ostream& s, polynomial p);



#endif
