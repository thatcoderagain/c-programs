#include"stdio.h"
float marks(int, int, int);
int main()
{
    int a,b,c,s;
    float avg,perc;
    printf("enter num in sub1: ");
    scanf("%d",&a);
    printf("enter num in sub 2: ");
    scanf("%d",&b);
    printf("enter num in sub 3: ");
    scanf("%d",&c);
    marks(a, b, c);
    return 0;

}
float marks(int a,int b,int c)
{
    float avg,perc;
    avg=(a+b+c)/300;
    perc=avg*100;
    printf("avg= %f and perc=%f",avg,perc);

}