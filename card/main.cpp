#include <iostream>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include <ctime>

using namespace std;

int main() {
  card c1(13,'D');
  cout << c1.read() << endl;
  deck d1;
  //d1.shuffle();
  d1.print_deck();
  cout << d1.deal().read() << endl;
  cout << d1.deal().read() << endl;
  cout << d1.deal().read() << endl;
  cout << d1.deal().read() << endl;


  hand h1;
  h1.c1 = card(13,'D');
  h1.c2 = card(11, 'D');

  hand h2;
  h2.c1 = card(13, 'S');
  h2.c2 = card(11, 'S');

  cout << (h1 < h2) << endl;
  cout << (h1 > h2) << endl;
  cout << (h1 == h2) << endl;

  cout << "Hw 8 Examples below" << endl;

// Tests pass for 3C 3D 9S 2S

  h1.c1.setNum(3);
  h1.c2.setNum(3);
  h1.c1.setSuit('C');
  h1.c2.setSuit('S');

  h2.c1.setNum(3); // Ace
  h2.c2.setNum(3); // Jack
  h2.c1.setSuit('D');
  h2.c2.setSuit('H');

  cout << ( h1 > h2 ) << endl; // FALSE
  
  cout << (h1 < h2 ) << endl; // FALSE

  cout << ( h1 == h2) << endl; // TRUE

  cout << ( h1 >= h2 ) << endl; // TRUE

  cout << ( h1 <= h2 ) << endl; // TRUE
}
