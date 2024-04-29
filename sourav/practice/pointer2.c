#include<stdio.h>

int prime (int*,int*);

int main()
{   int start, end, a;
    printf("Enter the start and end value : ");
    scanf("%d, %d", &start,&end);

    prime( &start, &end);

    return 0;
}


int prime (int*st, int*ed) {
    int i, j, num, isPrime;
    for (i = *st; i <=*ed; i++)
    {
        isPrime = 1;
        for (j = 2; j < num / 2; j++)
            if (num % i == 0) {
                isPrime = 0;
                break;-
            }

        if (isPrime) {
            printf("\nThe number %d is prime number", num);
        } else {
            printf("\nThe number %d is not prime number", num);
        }
        break;


    }
}
