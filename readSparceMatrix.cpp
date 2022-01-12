/*#include <iostream>
#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>


using namespace std;

int main(int argc, char const *argv[])
{
	*/

#include <sys/types.h>

#include <sys/stat.h>
#include "matrix.h"
void matrix::readSparceMatrix() {

	printf("File is reading...\n");

	streampos size;
	char * memblock;

	ifstream file ("data.bin", ios::in|ios::binary|ios::ate);
	if (file.is_open()){

		size = file.tellg();
		memblock = new char [size];
		file.seekg (0, ios::beg);
		file.read (memblock, size);
		file.close();
		double * buff = (double *)memblock;
		for (i = 0; i < row; i++) {
			for (j = 0; j < col; j++)
			{
				mat[i][j] = buff[ j + i*col ];
			}
		}
	}
//////////////////////////////////////
	    /*
	ifstream myFile("data.bin", ios::in | ios::binary | ios::ate);
	if (! myFile ) {
		cout << "Error,  file couldn't be opened" << endl;
	//	return 1;
	}
	if (!myFile.is_open())
    cout << "failed to open file\n";
			myFile >> mat[i][j];
			if (! myFile) {
				cout << "Error reading file for element " << i << "," << j << endl; 
    //       return 1;
			}
		}
	}*/
	    /////////////////////////////////////////////////
//	File *file;// = fread("data.bin", "rb");
//	fread(mat, sizeof(double), row*col, file);
//
	/*
	struct stat results;
	if (stat("input.bin", &results) == 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

				myFile.write( (char*)&mat[i][j], sizeof(double) );

				//mat[i][j] = matrix::randBtw(0.0,1.0);
			}
		}*/

	printf("Reading is done!\n");

}
