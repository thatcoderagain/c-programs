#include "stdio.h"

int main() {
    int num, i, input, fact, isPrime;
    do {
        printf("\n\nMenu:");
        printf("\n1. Factorial of a number");
        printf("\n2. Prime or not");
        printf("\n3. Even or Odd");
        printf("\n4. Exit\n> ");
        scanf("%d", &input);

        switch (input) {
            case 1:
                // for factorial
                printf("\nEnter a number to find it's factorial: ");
                scanf("%d", &num);
                fact = 1;
                for (i = 1; i <= num; i++) {
                    fact = fact * i;
                }
                printf("\nFactorial of %d is %d", num, fact);
                break;

            case 2:
                // Prime
                printf("\nEnter a number to check if the number is prime or not: ");
                scanf("%d", &num);
                isPrime = 1;
                for (i = 2; i < num / 2; i++) {
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime) {
                    printf("\nThe number %d is prime number", num);
                } else {
                    printf("\nThe number %d is not prime number", num);
                }
                break;

            case 3:
                // for odd-even
                printf("\nEnter a number to check it's odd or even: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    printf("\nThe number %d is Even", num);
                } else {
                    printf("\nThe number %d is odd", num);
                }
                break;

            case 4:
                break;
            default:
                printf("\nOpps!! invalid input. Please enter from (1-4)");
                break;
        }
    } while (input != 4);
    return 0;
}