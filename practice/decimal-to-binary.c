#include "stdio.h"

int main() {

    unsigned int num;
    long int binary, n;
    printf("\nEnter a decimal number: ");
    scanf("%d", &num);
    n = num;
    binary = 1;
    while (n != 0) {
        binary = (binary % (binary+1) * 10 ) + n%2;
        n = n/2;
    }
    // reverse
    n = binary;
    binary = 0;
    while (n > 0) {
        printf("\n%ld", binary);
        binary = (binary * 10) + n%10;
        n = n/2;
    }

    printf("\n%ld", binary);

    return 0;
}