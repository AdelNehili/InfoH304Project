#include <string>

class Board
{
private:
	int matrix[8][8] = {0};

public:
	Board();
	void printBoard();
	bool play(int player, int row, int col);
};
