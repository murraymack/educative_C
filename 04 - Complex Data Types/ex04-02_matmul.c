Matrix matrixmult(Matrix A, Matrix B)
{
  int i,j,k;
  double count = 0.0;
  Matrix C;

  for (i = 0; i < A.nrows; i++) { // Iterate through rows of A
    for (j = 0; j < B.ncols; j++) { // Iterate through cols of B
      count = 0.0; // Reset count to delete stored value of Cij
      for (k = 0; k < A.ncols; k++) { // Iterate through cols of A
        // Add each value of count before storing in Cij
        count += A.data[i*A.ncols + k] * B.data[k*B.ncols + j]; 
      }
    // Store value of count in Cij
    C.data[i*A.nrows + j] = count;
    }
  }
  C.nrows = A.nrows;
  C.ncols = B.ncols;
  return C;
  
}

int main(int argc, char *argv[])
{
  Matrix A = { {1.2, 2.3,
                3.4, 4.5,
                5.6, 6.7},
               3,
               2};
  Matrix B = { {5.5, 6.6, 7.7,
                1.2, 2.1, 3.3},
               2,
               3}; 
  
  Matrix C = matrixmult(A, B);
  printmat(C);

  return 0;
}