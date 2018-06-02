#include "polynomial.h"
#include <iostream>



std::ostream& operator<<(std::ostream& s, polynomial p) {
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


