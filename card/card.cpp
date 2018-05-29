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
		
		assert (s == 'C'||s=='D'||s=='H'||s=='S');
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
			output = "2 of ";
		else if (num == 3)
			output = "3 of ";
		else if (num == 4)
			output = "4 of ";
		else if (num == 5)
			output = "5 of ";
		else if (num == 6)
			output = "6 of ";
		else if (num == 7)
			output = "7 of ";
		else if (num == 8)
			output = "8 of ";
		else if (num == 9)
			output = "9 of ";
		else if (num == 10)
			output = "10 of ";
		else if (num == 11)
			output = "11 of ";
		else if (num == 12)
			output = "12 of ";
		else
			output = "King of ";
		if (suit=='C')
			output = output + "Clubs";
		else if (suit=='D')
			output = output + "Diamonds";
		else if (suit=='H')
			output = output + "Hearts";
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
	
