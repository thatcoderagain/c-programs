#include<stdio.h>
int factorial(int);
int main()
{
    int num, fact;
    printf("enter any number to find factorial :  ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("factorial is %d",fact);

}
int factorial(int num)
{int i,fac=1;
    for(i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    return (fac);
}
