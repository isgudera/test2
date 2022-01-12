CC=g++

main.x: main.o fillMatrixRand.o getEl.o printMatrix.o matMul_block.o matMul_block_unroll.o matMul_ikj.o writeSparceMatrix.o readSparceMatrix.o toeplitzMatrix.o isDDM.o
#setEl.o
	$(CC) -o main.x $^

main.o: main.cpp matrix.h
	$(CC) -c $^

fillMatrixRand.o: fillMatrixRand.cpp
	$(CC) -c $^

getEl.o: getEl.cpp
	$(CC) -c $^

printMatrix.o: printMatrix.cpp
	$(CC) -c $^

matMul_block.o: matMul_block.cpp
	$(CC) -c $^

matMul_block_unroll.o: matMul_block_unroll.cpp
	$(CC) -c $^

matMul_ikj.o: matMul_ikj.cpp
	$(CC) -c $^

writeSparceMatrix.o: writeSparceMatrix.cpp
	$(CC) -c $^

readSparceMatrix.o: readSparceMatrix.cpp
	$(CC) -c $^

toeplitzMatrix.o: toeplitzMatrix.cpp
	$(CC) -c $^

#setEl.o: setEl.cpp
#	$(CC) -c $^

isDDM.o: isDDM.cpp
	$(CC) -c $^
clean:
	rm *.o