int getNthPrime(int term)
{
  int number = 0;
  int count = 0;
  int isprime;
  while (count<term) 
  {
    if (number<=1) 
    {
       isprime = 0;
    }
    else
    {
        int j;
        isprime=1;
        for (j=2; (j*j)<=number; j++) 
        {
             if (number % j == 0) 
                isprime=0;
         }
    }
    
    if (isprime == 1)
     {
         count++;
        if(count==term)
        {
          printf("%d: %d\n", count, number);
          break;
        }
       
      }
    number++;
    isprime=0;
  }
  
  return number;
}