#include "matrix.h"

void matrix::matMul_ikj(matrix &A, matrix &B) {
    for (i = 0; i < row; i++)
    {
        for (k = 0; k < col; k++)
        {
            for (j = 0; j < SIZE; j++)
            {   
            	//cout << i<<j<<k<<endl;
            	//cout <<A.getEl(i,k)<<endl;
                mat[i][j] = mat[i][j] + A.matrix::getEl(i,k)*B.matrix::getEl(k,j);// A[i][k]*B[k][j];

		cout << mat[i][j] << endl;
	    }
        }
    }
}

