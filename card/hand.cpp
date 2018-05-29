#include <iostream>
#include "hand.h"

bool hand::operator<(hand rhs)
{

	if ( (c1.getNum() == c2.getNum()) )
		return 0;
	else if ( c1.getSuit() == c2.getSuit())
	{
		if (rhs.c1.getSuit() != rhs.c2.getSuit())
			return 0;
		else //within the same kind of hands
		{
			if (c1.getNum() > rhs.c1.getNum()) // see if the c1 of lhs is greater or equal to
				return 0;
			else if (c1.getNum() == rhs.c1.getNum())
			{
				if (c2.getNum() >= rhs.c2.getNum())
					return 0;
				else // c2 of lhs ACTUALLY IS LESS, but c1s of lhs and rhs are same
					return 1;

			}
				
		}
	}
	// all above fails, two hands are equal
		return 0;

}

bool hand::operator>=(hand rhs)
{

	return !(*this < rhs );
}

bool hand::operator==(hand rhs)
{
	return ( !( *this < rhs ) && !( rhs < *this)); // What's wrong with ( rhs >= *this)?

}

bool hand::operator<=(hand rhs)
{
	return ((*this < rhs) || (*this == rhs));	

}
bool hand::operator>(hand rhs)
{
	return !(*this <= rhs);	

}

