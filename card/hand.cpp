#include <iostream>
#include "hand.h"

bool hand::operator<(hand rhs)
{

	if ( (c1.getNum() == c2.getNum()) )
		return false;
	else if ( c1.getSuit() == c2.getSuit())
	{
		if (rhs.c1.getSuit() != rhs.c2.getSuit())
			return false;
		else //within the same kind of hands
		{
			if (c1.getNum() > rhs.c1.getNum()) // see if the c1 of lhs is greater or equal to
				return false;
			else if (c1.getNum() == rhs.c1.getNum())
			{
				if (c2.getNum() >= rhs.c2.getNum())
					return false;
				else // c2 of lhs ACTUALLY IS LESS, but c1s of lhs and rhs are same
					return true;

			}
				
		}
	}
	// all above fails, two hands are equal
		return false;

}

bool hand::operator>=(hand rhs)
{

	return !(*this < rhs );
}

bool hand::operator==(hand rhs)
{
	return (( *this <= rhs ) && ( rhs <= *this));

}

bool hand::operator<=(hand rhs)
{
	return ((*this < rhs) || (*this == rhs));	

}

bool hand::operator>(hand rhs)
{
	return !(*this <= rhs);	

}

