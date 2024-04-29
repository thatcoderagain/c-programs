#include<stdio.h>
int main()
{
    int fact,i,sum=0;
    fact = 1;
    for (i = 1; i <8; i++) {
        fact = fact * i;
        sum=sum+i/fact;

    }
    printf("\nFactorial is %d",sum);

}