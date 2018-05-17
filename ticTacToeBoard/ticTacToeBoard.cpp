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

int idx(int x, int y)                   {

  return ((x-1)+4*(y-1));

}
int winner ( ticTacToeBoard board )     {

  // what if a value is still zero in the row or column?

  bool is_there_a_winner = 0;

  // check if there is a vertical column winner

  for ( int i = 1; i <= 4; i++)     {

    if ((points[idx(i,1)] != 0)   {
        &&
        (points[idx(i,1)]       
        ==
        points[idx(i,2)]
        ==
        points[idx(i,3)]
        ==
        points[idx(i,4)]
        )
        )
          is_there_a_winner = 1;


    }


  }
  // check if there is a horizontal row winner
  for ( int j = 1; j <= 4; i++)     {

    if ((points[idx(1,j)] != 0)   {
        &&
        (points[idx(1,j)]       
        ==
        points[idx(2,j)]
        ==
        points[idx(3,j)]
        ==
        points[idx(4,j)]
        )
        )
          is_there_a_winner = 1;


    }


  }



return is_there_a_winner;

}
