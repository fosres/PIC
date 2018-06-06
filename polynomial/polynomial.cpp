#include "polynomial.h"
#include <iostream>
#include <cassert>

pic10a::polynomial::polynomial(double c)
{
	v.resize(1);

	v[0] = c;

}
int pic10a::polynomial::degree()
{

	return (int) v.size() - 1;

}

int pic10a::polynomial::nonzeroTerms()
{
	
	int num_zero_terms = 0;
	for ( int i = 0; i < v.size(); i++)
		if ( v[i] != 0)
			num_zero_terms++;

	return num_zero_terms;

}

void pic10a::polynomial::setCoeff(int deg, double c)
{

	assert (deg >=0);

	if (v.size() <= (unsigned int)deg + 1)
		v.resize(deg + 1, 0.0);
	
	v[deg] = c;

	while (degree() > 0 && getCoeff(degree()) == 0)
		v.pop_back();


}

double pic10a::polynomial::getCoeff(int deg)
{
	assert (deg >= 0);

	if ( (deg > degree() ) )
		return 0;
	else
		return v[deg];

}

  double pic10a::polynomial::operator()(double x)
{

	double ans = 0;

	for (int i = 0; i < v.size(); i++)
		ans += getCoeff(i)*pow(x,i);

	return ans;
}


// just add c to 0th element of vector
pic10a::polynomial pic10a::operator+(double c, pic10a::polynomial p)
{
	pic10a::polynomial cp;

	cp.setCoeff(0, c);

	return cp + p; // turn integer in (integer) * (polynomial) into a polynomial object!!!!
	
}

pic10a::polynomial pic10a::operator*(double c, pic10a::polynomial p)
{
	pic10a::polynomial cp;

	cp.setCoeff(0, c);

	return cp * p; // turn integer in (integer) * (polynomial) into a polynomial object!!!!
}

  pic10a::polynomial pic10a::polynomial::operator+(pic10a::polynomial p)
{
	pic10a::polynomial sum;

	if ( v.size() > p.v.size() )
	{
		sum.v.resize(v.size());
		p.v.resize(v.size());
	}
	else // v.size() <= p.v.size()
	{
		sum.v.resize(p.v.size());
		
		v.resize(p.v.size());
	}

	for ( int i = 0; i < sum.v.size(); i++)
		sum.v[i] = v[i] + p.v[i];

	return sum;

}

  pic10a::polynomial pic10a::polynomial::operator*(pic10a::polynomial p)
{
	pic10a::polynomial return_pol;

	for (int i = 0; i <= (degree() + p.degree()); i++)
	{
		double c = 0;

		for (int j = 0; j <= i; j++)
			c += getCoeff(j) * p.getCoeff(i - j);
		return_pol.setCoeff(i, c);


	}

	return return_pol;


}

  pic10a::polynomial& pic10a::polynomial::operator+=(pic10a::polynomial p)
{

	if ( v.size() > p.v.size() )
	{
		p.v.resize(v.size());
	}
	else // v.size() <= p.v.size()
	{
		v.resize(p.v.size());
	}

	// now both v and p have same size()	
	for ( int i = 0; i < v.size(); i++)
	{
		v[i] += p.v[i];
	}

	return *this;

}

pic10a::polynomial pic10a::polynomial::operator-()
{

	for ( int i = 0; i < v.size(); i++)
		v[i] = -v[i];

	return (*this);

}

  pic10a::polynomial pic10a::polynomial::operator-(pic10a::polynomial p)
{
	pic10a::polynomial difference;

	if ( v.size() > p.v.size() )
	{
		difference.v.resize(v.size());

		p.v.resize(v.size());
	}

	else // v.size() <= p.size()
	{
		difference.v.resize(p.v.size());

		v.resize(p.v.size());
	}


	for ( int i = 0; i < difference.v.size(); i++)
		difference.v[i] = v[i] - p.v[i];

	return difference;

}

  pic10a::polynomial& pic10a::polynomial::operator-=(pic10a::polynomial p)
{

	if ( v.size() > p.v.size() )
	{
		p.v.resize(v.size());
	}
	else // v.size() <= p.v.size()
	{
		v.resize(p.v.size());
	}

	// now both v and p have same size()	
	for ( int i = 0; i < v.size(); i++)
	{
		v[i] -= p.v[i];
	}

	return *this;
	
	


}

  pic10a::polynomial& pic10a::polynomial::operator*=(pic10a::polynomial p)
	
{
	(*this) = (*this) * p;
	return *this;	
}




std::ostream& pic10a::operator<<(std::ostream& s, pic10a::polynomial p) {
  if (p.degree() == 0 && p.getCoeff(0) == 0.0)
    return (s << double(0));
  for (int i = p.degree(); i >= 0; i--) {
    if (p.getCoeff(i) == 0)
      continue;
    if (i < p.degree() && p.getCoeff(i)>0)
      s << "+";
    if (p.getCoeff(i) != 1.0 || i==0)
      s << p.getCoeff(i);
    if (i == 1) {
      s << "x";
    } else if (i > 1){
      s << "x^" << i;
    }
  }
  return s;
}


