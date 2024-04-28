#include "stdio.h"

int fibonacci(unsigned long int num);

int main() {
    unsigned long int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
//    printf("\nFibonacci number of %d index is %d\n", num, fibonacci(num));
    for (i = 0; i <= num; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

int fibonacci(unsigned long int num) {
    if (num == 0 || num == 1) {
        return num;
    } else {
        return fibonacci(num-1) + fibonacci(num - 2);
    }
}