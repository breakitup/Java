/*
 * SudokuSolver.cpp
 *
 *  Created on: 14-Apr-2017
 *      Author: asingha6
 */
#include <stdio.h>
#include<iostream>
using namespace std;

bool findunassign(int mat[10][10],int &i,int &j){
	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++)
			if(!mat[i][j])
				return true;
	return false;
}

bool solvesoduku(int mat[10][10], bool row[10][10], bool col[10][10],
		bool grid[10][10]) {

	int i,j;
	if(!findunassign(mat,i,j))
		return true;
				for (int k = 1; k <= 9; k++) {
					if (!row[i][k] && !col[j][k]
							&& !grid[(((i - 1) / 3) * 3) + ((j - 1) / 3) + 1][k]) {
						mat[i][j] = k;
						row[i][k] = 1;
						col[j][k] = 1;
						grid[(((i - 1) / 3) * 3) + ((j - 1) / 3) + 1][k] = 1;
						if (solvesoduku(mat, row, col, grid))
							return true;
						mat[i][j] = 0;
						row[i][k] = 0;
						col[j][k] = 0;
						grid[(((i - 1) / 3) * 3) + ((j - 1) / 3) + 1][k] = 0;
					}
		}
	return false;
}

int main() {
	//code
	int mat[10][10];
	bool row[10][10];
	bool col[10][10];
	bool grid[10][10];
	int tc;
	cin >> tc;
	while (tc--) {
		for (int i = 1; i<= 9; ++i) {
			for (int j = 1; j<= 9; ++j) {
				scanf("%d",&mat[i][j]);
				if (mat[i][j]) {
					row[i][mat[i][j]] = true;
					col[j][mat[i][j]] = true;
					grid[(((i - 1) / 3) * 3) + ((j - 1) / 3) + 1][mat[i][j]] =
							true;
				} else {
					row[i][mat[i][j]] = false;
					col[j][mat[i][j]] = false;
					grid[(((i - 1) / 3) * 3) + ((j - 1) / 3) + 1][mat[i][j]] =
							false;
				}
			}
		}
		solvesoduku(mat, row, col, grid);
		for (int i = 1; i <= 9; i++) {
			for (int j = 1; j <= 9; j++) {
				cout << mat[i][j] << " ";
			}
			//cout << endl;
		}
	}
	return 0;
}

