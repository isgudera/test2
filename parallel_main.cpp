#include <iostream>
#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
#include <fstream>
#include "matrix.h"
#include <iomanip>
#include <mpi.h>
using namespace std;

int myRank;
int nProcesses;
MPI_Status status;         // mpi: store status of a MPI_Recv
MPI_Request request;       // mpi: capture request of a MPI_Isend
int rowStart, rowEnd;      // which rows of A that are calculated by the slave process
int granularity; 	   // granularity of parallelization (# of rows per processor)

int main(int argc, char  *argv[])
{
	srand(time(0));
	double time_begin;
	double time_end;
	double elapsed_time; 
		
	int size = 5;
	MPI_Init(&argc, &argv);		                  /* initialize MPI */
	MPI_Comm_rank(MPI_COMM_WORLD, &myRank);
	if (myRank==0) {
	cout <<"\n" << myRank << endl;

	matrix A(size);
		A.fillMatrixRand();
	//A.toeplitzMatrix();
	A.writeSparceMatrix();
	//A.printMatrix();
cout <<"\n" ;
cout <<"\n" ;
cout <<"\n" ;

	}
	if (myRank==1) {
	cout <<"\n" << myRank << endl;

		matrix B(size);
			B.fillMatrixRand();
		//cout << A.getEl(1,1)<<endl;
		B.writeSparceMatrix();
		//B.printMatrix();
	}
//	if (A.isDDM()) 
//	    cout << "YES";
//	else
//	    cout << "NO";

 	MPI_Finalize(); //finalize MPI operations

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
