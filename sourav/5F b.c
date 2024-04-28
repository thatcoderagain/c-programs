#include<stdio.h>
int performer(int, int, int, int, int);
int main()
{
    int a,b,c,d,e;
    printf ("enter any  integers : ");
    scanf("%d", &a);
    printf ("enter any  integers : ");
    scanf("%d", &b);
    printf ("enter any  integers : ");
    scanf("%d", &c);
    printf ("enter any  integers : ");
    scanf("%d", &d);
    printf ("enter any  integers : ");
    scanf("%d", &e);
    performer(a,b,c,d,e);
}

int performer(int a ,int b ,int c ,int d ,int e)
{
    int sum,avg;
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("%d %d",sum,avg);
}