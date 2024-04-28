#include<stdio.h>
int leap(int);
int main()
{
    int year, a;
    printf("enter any year : ");
    scanf("%d",&year);
    leap(year);


}

int leap(int a)
{
    if(a%4==0)
        printf("%d is leap year ",a);
    else
        printf("%d  is not a leap year",a);
}