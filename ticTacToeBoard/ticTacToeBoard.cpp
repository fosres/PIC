#include "ticTacToeBoard.h"
#include <iostream>
using namespace std;

void printBoard(ticTacToeBoard board) {
  for (int y=0; y<4; y++) {
    cout << "|";
    for (int x=0; x<4; x++) {
      if (board.points[x+4*y]==0)
	cout << " ";
      else if (board.points[x+4*y]==1)
	cout << "X";
      else if (board.points[x+4*y]==-1)
	cout << "O";

      cout << "|";
    }
    cout << endl;
  }
}

void initBoard ( ticTacToeBoard & board ) {
  
  board.curr_player = 1;
  
  for ( int i = 0 ; i < 16; i++)     {
    
    board.points[i]= 0;
    
  }
  
bool isEmpty ( ticTacToeBoard board , int x , int y ) {
  
  return (points[(x-1)+4*(y-1)]  == 0)
  
  
}

void mark ( ticTacToeBoard & board , int x , int y ) {
  
 
  board.points[(x-1)+4*(y-1)] = board.curr_player;
  
  
}

bool boardFull ( ticTacToeBoard board )              {
  
  for (int i = 0; i < 16; i++)              {
    
    if ( board.points[i] == 0)          {
      
      return false;
      
    }
    
  }

return true;
  
}