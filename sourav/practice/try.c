#include <stdio.h>

int main()
{
    int isPrime,i,j;
    for(j=1;j<=300;j++)
    {
        isPrime = 0;
        for (i = 2; i < j / 2; i++)
            if (j % i == 0)
            {
                isPrime = 1;
                break;

            }
            if (isPrime==1)
            {
                printf("\nThe number %d is prime number", j);
            } else
            {
                printf("\nThe number %d is not prime number", j);
            }
            break;
     }
}