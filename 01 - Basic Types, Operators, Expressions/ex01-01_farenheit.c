#include <stdio.h>
double degF_to_degC(double degF)
{
  double degC;

  degC = (degF - 32) / 1.8;
  
  return degC; 
}