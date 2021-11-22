#include <stdio.h>
#include <math.h>


int * solveEquation(int * myInput)
{
  
  double a, b, c, x1, x2;
  a = myInput[0];
  b = myInput[1];
  c = myInput[2];

 x1 = (-b + sqrt((b*b) - (4*a*c))) / (2*a);
 x2 = (-b - sqrt((b*b) - (4*a*c))) / (2*a);
 
  myInput[3]=x1;
  myInput[4]=x2; 

  
  return myInput;
  
  
};