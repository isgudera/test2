#include "matrix.h"

	void matrix::fillMatrixRand()
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{

				mat[i][j] = matrix::randBtw(0.0,1.0);
			}
		}
	}