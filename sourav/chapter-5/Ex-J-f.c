#include<stdio.h>
long int factorial(int);
long int power(int, int);

int main()
{
    long int value, terms, x, tan,i,n=10,s=1,series;
    printf("enter input value of x to find sinx : ");
    scanf("%d",&value);
    printf("enter the term you want");
    scanf("%d",&terms);

    for (i = 1; i <= n; i+=2, s*=-1) {
        printf("%c (x^%d) / (%d!)", s == 1 ? '+' : '-', i, i);
        series+=s*power(x,i)/ factorial(i);
    }
    printf("\nsin x =%d", series);
}

long int factorial(int num)
{
    long int i,fac=1;
    for(i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    return (fac);
}


long int power(int base, int power)
{
     long int i, pow;

    for (i = 1, pow = 1; i <= power; i++)
    {
        pow *= base;
    }
}

