#include "stdio.h"

int main() {
    unsigned char ch = 'a';
    signed int n = 2313;
    short int s = 123;
    short ss = 123;
    int i = 123;
    signed int ii = 123;
    unsigned int iii = 123;
    long int l = 123;
    long ll = 123;

    long int abc = 123;

    float f = 123.323;

    double d = 123.23;

    double lo = 21.3;

    int size = sizeof lo;

    printf("%d", size);


    return 0;
}