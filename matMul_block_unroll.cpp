#include "matrix.h"

void matrix::matMul_block_unroll (int blockSize, matrix &A, matrix &B)
{
	BLOCK_SIZE = blockSize;
		for (int bi = 0; bi < SIZE; bi+=BLOCK_SIZE)
		{
			for (int bk = 0; bk < SIZE; bk+=BLOCK_SIZE)
			{
			//	for (int bj = 0; bj < SIZE; bj+=BLOCK_SIZE)
			//	{
				for (int i = bi; i < bi+BLOCK_SIZE; i+=5)
					{
					for (int k = bk; k < bk+BLOCK_SIZE; k++)
						{
						for (int j = 0; j < SIZE; j+=5)
							{
								mat[i][j] += A.matrix::getEl(i,k)*B.matrix::getEl(k,j);
								mat[i+1][j] += A.matrix::getEl(i+1,k)*B.matrix::getEl(k,j);
								mat[i][j+1] += A.matrix::getEl(i,k)*B.matrix::getEl(k,j+1);
								mat[i+1][j+1] += A.matrix::getEl(i+1,k)*B.matrix::getEl(k,j+1);
									
								mat[i+1][j+2] += A.matrix::getEl(i+1,k)*B.matrix::getEl(k,j+2);
								mat[i+2][j+1] += A.matrix::getEl(i+2,k)*B.matrix::getEl(k,j+1);
								
								mat[i+2][j] += A.matrix::getEl(i+2,k)*B.matrix::getEl(k,j);
								mat[i][j+2] += A.matrix::getEl(i,k)*B.matrix::getEl(k,j+2);
								mat[i+2][j+2] += A.matrix::getEl(i+2,k)*B.matrix::getEl(k,j+2);
								mat[i+2][j+3] += A.matrix::getEl(i+2,k)*B.matrix::getEl(k,j+3);
								mat[i+3][j+2] += A.matrix::getEl(i+3,k)*B.matrix::getEl(k,j+2);
								mat[i+3][j] += A.matrix::getEl(i+3,k)*B.matrix::getEl(k,j);
								mat[i][j+3] += A.matrix::getEl(i,k)*B.matrix::getEl(k,j+3);
								mat[i+3][j+3] += A.matrix::getEl(i+3,k)*B.matrix::getEl(k,j+3);
								mat[i+3][j+4] += A.matrix::getEl(i+3,k)*B.matrix::getEl(k,j+4);
								mat[i+4][j+3] += A.matrix::getEl(i+4,k)*B.matrix::getEl(k,j+3);
								
								mat[i+4][j] += A.matrix::getEl(i+4,k)*B.matrix::getEl(k,j);
								mat[i][j+4] += A.matrix::getEl(i,k)*B.matrix::getEl(k,j+4);
								mat[i+4][j+4] += A.matrix::getEl(i+4,k)*B.matrix::getEl(k,j+4);
								//cout << mat[i][j];
							}
						}
					}
			//	}
			}
		}
	}