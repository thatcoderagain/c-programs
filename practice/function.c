#include "stdio.h"

void myFunction();

void anshu() {
    printf("Anshu");
}

int main() {
    printf("\nBeginning of Program");
    myFunction();
    myFunction();
    anshu();
    printf("\nEnd of program");
    return 0;
}

void myFunction() {
    static int i = 1;
    for (; i <= 10; i++) {
        printf("\nI'm super cool! %d", i);
    }
    printf("\nEnd of my function ");
}