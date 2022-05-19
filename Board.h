#pragma once
#include "Head.h"

class Board
{
	int board[9][9];
	void fillRegion(int, int);
	bool fillRest();
	bool findEmpty(int&, int&);

	int randomGenerator(int);

public:
	Board();

	void generateNumber();
	bool checkRegion(int, int, int);
	bool checkRow(int, int);
	bool checkColumn(int, int);
	bool isValid(int, int, int);

	void fill(int, int, int);
	void remove(int, int);
	void printBoard();

	int	 getNumber(int, int);
};

