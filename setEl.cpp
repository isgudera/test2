#include "matrix.h"

double matrix::setEl(int row, int col, double element) {
    	mat[row][col] = element;
	return mat[row][col];
}
