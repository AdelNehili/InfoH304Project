#include "board.h"
#include <string>
#include <iostream>
using namespace std;

// P1 -> O
// P2 -> X

int main()
{
	Board board;
	board.printBoard();
	while (true) {
		for (int i = 1; i <= 2; i++) {
  			while(true) {
				cout << "Turn of P" << i << " : ";
				string position;
				cin >> position;
				int col = (int)position[0] - (int)('a');
				int row = (int)position[1] - (int)('1');
				if (board.play(i,row,col)){
					break;
				}
				cout << "Move not valid! try again \n";
			}
			board.printBoard();
		}
	}
	return 0;
}
