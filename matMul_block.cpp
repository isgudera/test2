#include "matrix.h"

void matrix::matMul_block (int blockSize, matrix &A, matrix &B)
{
	BLOCK_SIZE = blockSize;
		for (int bi = 0; bi < SIZE; bi+=BLOCK_SIZE)
		{
			for (int bk = 0; bk < SIZE; bk+=BLOCK_SIZE)
			{
			//	for (int bj = 0; bj < SIZE; bj+=BLOCK_SIZE)
			//	{
				for (int i = bi; i <bi+BLOCK_SIZE; i++)
					{
						
					for (int k = bk; k < bk+BLOCK_SIZE; k++)
						{
						for (int j = 0; j < SIZE; j++)
							{
								mat[i][j] += A.matrix::getEl(i,k)*B.matrix::getEl(k,j);
								cout << mat[i][j] << endl; 
							}
						}
					}
			//	}
			}
		}
	}
