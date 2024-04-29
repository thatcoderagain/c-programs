#include<stdio.h>
int main()
{
    int  i, base, expo, pow;
    printf("enter base for power  : ");
    scanf("%d",&base);
    printf("enter expo for power  : ");
    scanf("%d",&expo);

     for (i=expo, pow=1; i >0; i--) {
        pow *= base;
    }
     printf("power is %d",pow);
}
