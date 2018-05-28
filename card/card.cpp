#include <iostream>
#include <string>
#include <cassert>
using std::string;

class card			{

	private:
		int num;
		char suit;

	public:

	void setNum(int n);

	void setSuit(char s);

	int getNum();
	
	char getSuit();

	string read();

	card();

	card(int n, char s);


};

	void card::setNum(int n)
	{
		
		assert (n >= 1 && n<=13);

		num = n;
	}

	void card::setSuit(char s)
	{
		
		assert (suit == 'C'||suit=='D'||suit=='H'||suit=='S');
		suit = s;


	}
	
	int card::getNum()
	{
		assert (num >= 1 && num <= 13);

		return num;
	}
	
	char card::getSuit()
	{
		return suit;

	}

	string card::read()
	{
		string output = "";

		if ( num == 1)
			output = "Ace of ";
		else if (num == 2)
			output = "Two of ";
		else if (num == 3)
			output = "Three of ";
		else if (num == 4)
			output = "Four of ";
		else if (num == 5)
			output = "Five of ";
		else if (num == 6)
			output = "Six of ";
		else if (num == 7)
			output = "Seven of ";
		else if (num == 8)
			output = "Eight of ";
		else if (num == 9)
			output = "Nine of ";
		else if (num == 10)
			output = "Ten of ";
		else if (num == 11)
			output = "Eleven of ";
		else if (num == 12)
			output = "Twelve of ";
		else
			output = "King of ";
		if (suit=='C')
			output = output + "Clubs";
		else if (suit=='D')
			output = output + "Hearts";
		else if (suit=='H')
			output = output + "Diamonds";
		else
			output = output + "Spades";
	
		return output;
	}
	
	card::card()
	{
		num = 0;

		suit = 'X';
	}
	
	card::card(int n, char s)
	{
		// assert stuff
		assert ( n >= 1 && n <= 13);

		assert (s=='C'||s=='D'||s=='H'||s=='S');

		num = n;

		suit = s;
	}
	
