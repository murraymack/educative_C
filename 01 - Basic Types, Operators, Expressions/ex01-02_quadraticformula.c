#include <stdio.h>
#include <math.h>


int * solveEquation(int * myInput)
{
  
  double a, b, c, x1, x2;
  //Don't worry if you don't understand the next three lines 
  //for now
  a = myInput[0];
  b = myInput[1];
  c = myInput[2];
  //The a, b and c of the equation are stored in the variables
  //above
  
  
  x1 = ((-b) + sqrt((b*b) - (4*a*c))) / (2*a);
  x2 = ((-b) - sqrt((b*b) - (4*a*c))) / (2*a);

  
  
  myInput[3]=x1;
  myInput[4]=x2; 

  
  return myInput;
  
  
};