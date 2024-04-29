#include<stdio.h>

void main(){
    int num, rev=0, n;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    n=num;
    rev = (rev * 10) + (n % 10);
    n = n / 10;
    rev = (rev * 10) + (n % 10);
    n = n / 10;
    rev = (rev * 10) + (n % 10);
    n = n / 10;
    rev = (rev * 10) + (n % 10);
    n = n / 10;
    rev = (rev * 10) + (n % 10);
    n = n / 10;

    printf("The reverse of %d is %d", num, rev);
}
