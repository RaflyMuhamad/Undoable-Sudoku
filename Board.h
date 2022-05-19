#pragma once
#include "Head.h"
#define GRID_SIZE 9 //size for one region


class Board {
private:
	bool n_in_region(int n, int i, int j);
	bool n_in_col(int n, int j);

	vector<bool> get_region_possibles(int i, int j);
	vector<bool> get_col_possibles(int j);
	vector<bool> get_row_possibles(int i);

	bool is_solution_right();
	void copy_solution();

	void setCellSolved(int i, int j, int n);
	int	 checkSolvedCells();
	void checkRegion(int i, int j);
	void copySol();

	int grid[GRID_SIZE][GRID_SIZE];
	int solution[GRID_SIZE][GRID_SIZE];
	vector<bool> possibles[GRID_SIZE][GRID_SIZE];

	int CELLS_TO_REMOVE = 50;
	int solution_changes;

public :
	Board();
	~Board() = default;

	bool isSolRight();
	void difficulty(int n);
	void generate();
	bool solve();
	void draw();
	void drawSolution();
	int getCellSolValue(int x, int y);
	int getCellValue(int x, int y);
	void fillCell(int x, int y, int z);
	void deleteCell(int x, int y);
	void setCell(int x, int y, int z);
	void setSolCell(int x, int y, int z);
};