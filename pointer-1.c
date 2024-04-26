#include "stdio.h"

void swap(int *, int *);

int main() {
    int a, b;
    printf("Enter value for A and B: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping: ");
    printf("\nA: %d, B: %d", a, b);

    swap(&a, &b);
    swap(&a, &b);

    printf("\nAfter swapping: ");
    printf("\nA: %d, B: %d", a, b);
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
