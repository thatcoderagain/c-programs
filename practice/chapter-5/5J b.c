#include<stdio.h>
void prime(int num);
void main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("The Prime Factors of %d are: ",num);
    prime(num);
}

void prime(int num)
{
    int i;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d, ",i);
            prime(num/i);
            break;

        };
    }
}