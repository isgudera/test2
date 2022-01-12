#include <sys/types.h>

#include <sys/stat.h>
#include "matrix.h"
void matrix::writeSparceMatrix() {

	printf("Matrix is writing to file...\n");
	struct stat results;
	if (stat("input.bin", &results) == 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	ofstream myFile;
	myFile.open ("data.bin", ios::out | ios::binary);
	for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				//myFile << mat[i][j] << " " ;
				myFile.write( (const char*)&mat[i][j], sizeof(double) );

				//mat[i][j] = matrix::randBtw(0.0,1.0);
			}
		}
	myFile.close();
	printf("Writing is done!\n");

}
