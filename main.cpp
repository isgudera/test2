#include <iostream>
#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
#include <fstream>
#include "matrix.h"
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	srand(time(0));
	double time_begin;
	double time_end;
	double elapsed_time; 
		
	int size = 20;
	//string fileName = timing//string(argv[1]);
//	ofstream myFile ("timing.txt");//(fileName);
////	myFile << "Size"<< setw(20)<<"No optimization" << setw(20) << "Blocked" << setw(20)<< "Unrolled-Blocked" << setw(20)<<endl;
//	myFile << "Size"<<endl;
//	int block_size = 25;
//
//
//	myFile.flush();
//	myFile << size << "\t\t";
//	struct timeval t;

	matrix A(size);
	//	A.fillMatrixRand();
	A.toeplitzMatrix();
	A.writeSparceMatrix();
	
	matrix B(size);
		B.readSparceMatrix();
	//cout << A.getEl(1,1)<<endl;
	A.printMatrix();
	B.printMatrix();
	if (A.isDDM()) 
	    cout << "YES";
	else
	    cout << "NO";
/*	matrix R1(size);
	matrix R_block1(size);
	matrix R_block2(size);
	
	gettimeofday(&t,NULL);
	time_begin = t.tv_sec + 1.0e-6*t.tv_usec;
		R1.matMul_ikj(A,B);
	gettimeofday(&t,NULL);
	time_end = t.tv_sec + 1.0e-6*t.tv_usec;
	elapsed_time = time_end - time_begin;
	printf("Multiplication 1 is done.\n");
	myFile << elapsed_time << "\t\t";
	//R1.printMatrix();
	
	gettimeofday(&t,NULL);
	time_begin = t.tv_sec + 1.0e-6*t.tv_usec;
		R_block1.matMul_block(block_size,A,B);
	gettimeofday(&t,NULL);
	time_end = t.tv_sec + 1.0e-6*t.tv_usec;
	elapsed_time = time_end - time_begin;
	printf("Multiplication 1 is done.\n");
	myFile << elapsed_time << "\t\t";	
	
	//R_block1.printMatrix();

	cout << "237,444 :\t" <<R1.getEl(237,444)<<endl;
	cout << "237,444 :\t" <<R_block1.getEl(237,444)<<endl;
	
	cout << "137,296 :\t" <<R1.getEl(137,296)<<endl;
	cout << "137,296 :\t" <<R_block1.getEl(137,296)<<endl;
*/
	return 0;
}
