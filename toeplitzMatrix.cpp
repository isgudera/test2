#include "matrix.h"

	void matrix::toeplitzMatrix()
	{
	    double var1 =  2.0;
	    double var2 = -1.0;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				if (i==j) {
					mat[i][j] = var1;//matrix::setEl(var1);
					cout << mat[i][j];//matrix::getEl(i,j)
				}
				else if (i==j+1 || j==i+1) {
					mat[i][j] = var2;//matrix::setEl(var2);
				}
				else { 
				    mat[i][j] = 0;// matrix::setEl(0);
				}
			}
		}
	}
