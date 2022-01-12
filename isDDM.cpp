#include "matrix.h"
#include <cmath>
bool matrix::isDDM() {
    double sumR;
	printf("hello world\n");
	for (i = 0; i < row; i++) {
        sumR = 0;
        for (j = 0; j < col; j++)
		{
            if (i!=j) {
                sumR += abs (mat[i][j]);
                cout << sumR;
            }
		}
        
        if (mat[i][i] < sumR) {
            printf("fuck");
            return false;
        }
        
        else if (mat[i][i] != sumR) {
            int isStrict = 0;
            cout << "Strictly Diagonally Dominant" << endl;
           
        }
	}
    return true;

	
	
	/*******************/
	/*

	streampos size;
	char * memblock;

	ifstream file ("data.bin", ios::in|ios::binary|ios::ate);
	if (file.is_open())
	{
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
	*/
	printf("Fuck yeah!\n");

}
