#include "stdio.h"

float product(float, int); // float product(float, int, float *);

int main() {
    float f;
    int n;
    float p;
    printf("\nEnter 2 numbers : ");
    scanf("%f %d", &f, &n);
    p = product(f, n); // product(f, n, &p);
    printf("\nProduct of %.2f & %d is %.2f", f, n, p);
    return 0;
}

float product(float f, int n) { // float product(float f, int n, float *p) {
    return f * n; // (*p) = f * n;
}