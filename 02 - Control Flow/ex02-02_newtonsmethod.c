#include <stdio.h>

int main() {
  int i = 1;
  double N = 612;
  double x = 10;
  for (i = 0; i < 5; i++) {
    x = x - ( ((x*x) - N) / (2 * x));
  }

  printf("Root approximation of %f.3 is %f.3", N, x);

  return 0;
}