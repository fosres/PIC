#include <iostream>
#include <algorithm>
#include <random>
#include <cassert>
#include "deck.h"
#include "shuffle.h"
using namespace std;

	
//Do not change this function
void deck::shuffle() {
  assert(deal_count == 0);
  std::default_random_engine eng(SEED_MACRO);
  std::shuffle(stack, stack + 52, eng);
}

void deck::print_deck() {
  for (int i = 0; i < 52; i++)
    cout << stack[i].read() << endl;
}
	
	deck::deck()
	{
		deal_count = 0;

		//set the clubs
		for (int i = 0; i < 13; i++)
		{
			stack[i].setNum(i+1);

			stack[i].setSuit('C');

		}
		
		for (int i = 13; i < 26; i++)
		{
			stack[i].setNum(i%13+1);

			stack[i].setSuit('D');
		}

		for ( int i = 26; i < 39; i++)
		{
			stack[i].setNum(i%13+1);

			stack[i].setSuit('H');
		}

		for ( int i = 39; i < 52; i++)
		{
			stack[i].setNum(i%13+1);

			stack[i].setSuit('S');
		}
	}
	
	
	card deck::deal()
	{
		// assert below	
		assert (deal_count < 52);
		int old_deal_count = deal_count;

		deal_count += 1;

		return stack[old_deal_count];

	}
	
	int deck::stack_size()
	{
		return (52-deal_count);

	}

	void deck::gather_and_shuffle() {
		deal_count = 0;

		deck::shuffle();

	}















