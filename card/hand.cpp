#include <iostream>
#include "hand.h"

int getHigh(hand input) //returns highest num value between cards c1 and c2
{

	if (input.c1.getNum() > input.c2.getNum())
		return input.c1.getNum();
	else
		return input.c2.getNum();
}

int getLow(hand input) //returns lowest num value between cards c1 and c2
{

	if (input.c1.getNum() < input.c2.getNum())
		return input.c1.getNum();
	else
		return input.c2.getNum();

}

bool hand::operator<(hand rhs)
{
	int lhsStrength, rhsStrength;

	if (c1.getNum()==c2.getNum())
		lhsStrength = 3;
	else if (c1.getSuit()==c2.getSuit())
		lhsStrength = 2;
	else 
		lhsStrength = 1;
	if (rhs.c1.getNum()==rhs.c2.getNum())
		rhsStrength = 3;
	else if (rhs.c1.getSuit() == rhs.c2.getSuit())
		rhsStrength = 2;
	else
		rhsStrength = 1;
	if (lhsStrength < rhsStrength)
		return true;
	else if (lhsStrength > rhsStrength)
		return false;
	// else compare highest card
	if (getHigh(*this) < getHigh(rhs))
		return true;
	else if (getHigh(*this) > getHigh(rhs))
		return false;
	//else compare lowest card
	if (getLow(*this) < getLow(rhs))
		return true;
	else if (getLow(*this) > getLow(rhs))
		return false;
	return false;
}

bool hand::operator>=(hand rhs)
{

	return !(*this < rhs );
}

bool hand::operator==(hand rhs)
{
	return !( *this < rhs || *this > rhs ); 

}

bool hand::operator>(hand rhs)
{
	return (rhs < *this);	

}

bool hand::operator<=(hand rhs)
{
	return !(*this > rhs);	

}

