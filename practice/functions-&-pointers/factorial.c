#include"stdio.h"

int factorial(int);

int main()
{
    int fact,a;
    printf("enter any num:");
    scanf("%d",&a);

    fact=factorial(a);
    printf("factorial value=%d",fact);

}
int factorial (int x)
{
    int f=1, i;
    for(i=x; i >= 1; i--)
        f=f*i;
    return f;
}