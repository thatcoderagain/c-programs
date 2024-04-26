#include "stdio.h"

long power(int, int);

int main() {
    int base, exp;
    do {
        printf("\nEnter base & exp: ");
        scanf("%d %d", &base, &exp);
        long pow = power(base, exp);
        printf("%d ^ %d = %ld\n", base, exp, pow);
    } while (base != 0);
    return 0;
}

long power(int base, int exp) {
    long power = 1;
    for (int i = 0; i < exp; i++) {
        power *= base;
    }
    return power;
}