#include <stdio.h>
 
int main(int argc, char **argv)
{
  int i;

  while (i <= 100) 
  {
    int mod3 = i % 3;
    int mod5 = i % 5;
  // multiples of both 3 and 5
    if ( mod3 + mod5 == 0 ) {
      printf("%d FizzBuzz\n", i);
    }
  // multiples of 3 print Fizz
    else if ( mod5 != 0 && mod3 == 0 ) {
      printf("%d Fizz\n", i);
    }
  // multiples of 5 print Buzz
    else if ( mod3 != 0 && mod5 == 0 ) {
      printf("%d Buzz\n", i);
    }
    else if ( mod3 !=0 && mod5 != 0 ) {
      printf("%d\n", i);
    }
    i++;
  }
  return 0;
}