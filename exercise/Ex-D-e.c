#include "stdio.h"

void primeFactors(unsigned num);

int main() {
    unsigned int num;
    printf("Enter a number: \n");
    scanf("%u", &num);
    primeFactors(num);
}

void primeFactors(unsigned num) {
    printf("\nPrime factor of %u are \n", num);
    int i, isPrime = 1;
    unsigned int originalNumber = num;
    for (i = 2; i <= originalNumber/2; ) {
        if (num%i == 0) {
            printf("%d ", i);
            num /= i; // num = num / i;
            isPrime = 0;
        } else {
            i++;
        }
    }
    if (isPrime == 1) {
        printf("1 %u", originalNumber);
    }
}