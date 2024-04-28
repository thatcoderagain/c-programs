#include"stdio.h"
int leap(int);
int main()
{
    int a;
    printf("enter a year: ");
    scanf("%d",&a);
    leap(a);
}
int leap(int a)
{
    if(a%4==0)
        printf(" leap year");
    else
    printf(" not a leap year");

}