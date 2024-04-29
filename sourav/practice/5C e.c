#include<stdio.h>
int primefact (int num);
int main()
{
    int num;
    printf("enter a num for factor : ");
    scanf("%d",&num);
    primefact(num);
}
int primefact(int x)
{
    int i,num;
    {
        for (i = 2; i <= num; i++)
        {
            if (x % i == 0)
                printf("%d",i);
            x = x/i;
            i--;
        }
    }
}


