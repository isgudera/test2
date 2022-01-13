#include "iostream"
#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
#include <fstream>
#include <sys/types.h>

#include <sys/stat.h>
using namespace std;

class matrix {
private:
	double **mat;
	int SIZE;
	int i,j,k;
	int bi,bj,bk;
	int row,col;
	int BLOCK_SIZE; 
public:
	matrix():mat(NULL) , SIZE(0){}
	matrix(int n): SIZE(n),row(n),col(n) {mat = new	double*[SIZE];
							for(int i=0;i<SIZE;i++) {
								mat[i] = new double[SIZE];
								}
							}
	~matrix(){
		if(mat){
			for(int i=0;i<SIZE;i++) {
				delete[] mat[i];
			}
			delete[] mat;
			cout << "Object is killed safely."<<endl;
		}
	}
	double randBtw(double lb, double ub) {
		double range = (ub - lb);
		double div = RAND_MAX / range;
		return (lb + (rand() / div));
	}

	void fillMatrixRand() ;
	void toeplitzMatrix() ;
	double& getEl(int row, int col);
//	void setEl(int row, int col, double var) ;
	void printMatrix();	
	void matMul_ikj(matrix &A, matrix &B);
	void matMul_block (int blockSize, matrix &A, matrix &B);
	void matMul_block_unroll (int blockSize, matrix &A, matrix &B);
	void writeSparceMatrix();
	void readSparceMatrix();
	bool isDDM();
/*	
	matrix& operator=(const matrix &mat) {
	
		if (this != &m) { // to avoid overwriting itself
			if (ROWS != m.ROWS or COLS != m.COLS) {
		        throw std::out_of_range("Cannot assign matrix with different dimensions");
	        } 
	        for (int i = 0; i < ROWS * COLS; ++i) {
	            vals[i] = m.vals[i];
	        }
	    }

	    return *this; // we return reference not a pointer
	}
*/

};
