#include "stdio.h"

void romanNumber(unsigned int);

int main() {
    unsigned int num;
    printf("\nEnter a number: ");
    scanf("%u", &num);
    romanNumber(num);
}

void romanNumber(unsigned int num) {
    printf("\nRoman value of %u is ", num);
    unsigned int i;
    for(i = 0; i < num / 1000; i++, printf("m")) {
        printf("m");
    }
    for(i = 0, num %= 1000; i < num / 500; i++) {
        printf("d");
    }
    for(i = 0, num %= 500; i < num / 100; i++) {
        printf("c");
    }
    for(i = 0, num %= 100; i < num / 50; i++) {
        printf("l");
    }
    for(i = 0, num %= 50; i < num / 10; i++) {
        printf("x");
    }
    for(i = 0, num %= 10; i < num / 5; i++) {
        printf("v");
    }
    for(i = 0, num %= 5; i < num / 1; i++) {
        printf("i");
    }
}