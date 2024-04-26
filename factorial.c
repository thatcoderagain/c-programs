#include "stdio.h"

int main() {
    int a, i, fac;
    printf("enter the num :");
    scanf("%d", &a);

    for (i = 1,fac=1; 1 <= a; i++) {
      fac*=i;
    }
    printf ("%d",fac);
}