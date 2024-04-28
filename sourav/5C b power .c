#include<stdio.h>

int power (int*,int*,int*);

int main()
{   int base, expo, a;
    printf("Enter the base value : ");
    scanf("%d", &base);
    printf("Enter the exponent value : ");
    scanf("%d", &expo);
    power( &base, &expo, &a);
    printf("%d", a);
    return 0;
}

int power (int*base, int*expo, int*pow)
{
    int i;
    for(i=1, *pow=1;i<=*expo;i++)
    {
        (*pow)=(*pow)*(*base);
    }
}