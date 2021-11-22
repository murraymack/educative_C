void printmat(Matrix M)
{
  int i=1, j=1, k=1;
  int col_check;
  int data_len = M.nrows * M.ncols;
  int counter = 0;
    
      for (k=1; k<=M.ncols; k++) {

        if (counter == data_len) { 
            printf("Matrix Print Complete. \n");
            break;
        }

        else if ( k == M.ncols ) {

          printf("%f\n", k, M.data[counter]);
          counter++;
          k = 0;

        }

        else if ( k != M.ncols ) {

          printf("%f, ", k, M.data[counter]);
          counter++;
          
        }

      }

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