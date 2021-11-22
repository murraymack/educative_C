void printmat(Matrix M)
{
  int i, j;
  printf("[\n");
  for (i=0; i<M.nrows; i++) {
    for (j=0; j<M.ncols; j++) {
      printf("%6.3f ", M.data[i*M.ncols + j]);
    }
    printf("\n");
  }
  printf("]\n\n");
}

int main(){
  Matrix A = { {1.2, 2.3,
                3.4, 4.5,
                5.6, 6.7},
               3,
               2};
	Matrix B = { {5.5, 6.6, 7.7,
                1.2, 2.1, 3.3},
               2,
               3}; 
  
  printmat(A);
  printmat(B);
  return 0;
}