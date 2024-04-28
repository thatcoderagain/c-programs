#include<stdio.h>

int power(int*,int*, int*);

int main()
{
    int a, b, ans;
    printf("enter a num for power");
    scanf("%d",&a);

    printf("enter the base num");
    scanf("%d",&b);

    power(&b, &a, &ans);
    printf("%d",ans);
    return 0;
}

int power(int *b, int *a, int *pow)
{
    int i;
    for(i=0, *pow=1; i < *a; i++)
    {
        (*pow)=(*pow)*(*b);
    }
}