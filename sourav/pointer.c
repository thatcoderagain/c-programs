#include<stdio.h>
#include "lib/mymath.c"

int factorial(int, int*);

int main()
{
    int num, fact;
    printf("SUM OF 10, 20 = %.2f", sum(10, 20));
    printf("enter any number to find factorial :  ");
    scanf("%d",&num);
    factorial(num, &fact);
    printf("factorial is %d",fact);
    return 0;
}

int factorial(int num, int*fac)
{
    int i;
    for(i=1, *fac=1; i <= num; i++)
    {
        (*fac)=(*fac)*i;
    }
}