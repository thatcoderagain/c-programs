#include "stdio.h"
#include "math.h"

int abc;

int* sourav() {
    int a = 200;
    return &a;
}

int main() {

    int* z = sourav();
    printf("%f", M_PI);
    return 0;
}

