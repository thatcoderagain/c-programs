#include<stdio.h>
int main()
{
    int fact=1,i,num;
    printf("enter any num to find factorial : ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        fact=fact*i;
    printf(" %d",fact);
    }
    printf(" \n%d",fact);
    return 0;
}