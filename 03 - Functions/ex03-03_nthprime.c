int getNthPrime(int term)
{
    int i = 0;
    int Nth = 0;
    do {
        if ((i % 2) != 0 ) {
            Nth++;
            printf("First if: i: %d is prime. Nth is : %d\n", i, Nth);
            i++;
        }
        else if ((i % 2) != 0 && (i % 3) != 0 ) {
            Nth++;
            printf("2nd if: i: %d is prime. Nth is : %d\n", i, Nth);
            i++;
        }  
        else {
            i++;
        }
    }
    while (Nth < term);
    return i;
}