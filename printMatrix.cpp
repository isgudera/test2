#include "matrix.h"

	void matrix::printMatrix() {
		for (int i = 0; i < row; i++){
			for (int j= 0; j < col; j++)
			{
				printf("%6.4lf\t",mat[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
