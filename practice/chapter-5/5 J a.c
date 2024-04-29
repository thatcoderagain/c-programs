#include<stdio.h>
int recursion(int num);


void main()
{
    int num, a;
    printf("Enter an integer: ");
    scanf("%d", &num);

    a = recursion(num);

    printf("\n sum using recursion is : %d",a);

}

int recursion(int num)
{
    if (num==0)
    {
        return 0;
    }
    else

    return (num%10+recursion(num/10));
}

