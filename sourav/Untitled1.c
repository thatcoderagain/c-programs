#include<stdio.h>

void main()
{
    int c , d , e ;
    printf("Tell the value of c and d: ");
    scanf("%d %d", &c, &d);
    e=c;
    c=d;
    d=e;
    printf("value of C = %d and D = %d", c, d);
}
