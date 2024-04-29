#include"stdio.h"

int factorial(int , int*);

int main()
{
    int fact,a;
    printf("enter any num: ");
    scanf("%d",&a);

    factorial(a,&fact);
    printf("factorial value = %d",fact);

}
int factorial (int*x,int*fact)
{
    int i;
    for(i=x; i >= 1; i--) {
        *fact = *fact * i;
    }
}