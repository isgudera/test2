#include "matrix.h"

double& matrix::getEl(int row, int col) {
	return mat[row][col];
}