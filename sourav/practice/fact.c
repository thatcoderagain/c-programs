#include<stdio.h>
int factorial(int);
int main()
{
    int num, fact;
    printf("enter any num: ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("factorial is %d",fact);
}
int factorial(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return(fact);

}