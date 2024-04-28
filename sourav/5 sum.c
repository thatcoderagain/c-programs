#include<stdio.h>

void main(){
    int num, sum=0, n;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    n=num;
    sum = sum + (n % 10);
    n = n / 10;
    sum = sum + (n % 10);
    n = n / 10;
    sum = sum + (n % 10);
    n = n / 10;
    sum = sum + (n % 10);
    n = n / 10;
    sum = sum + (n % 10);
    n = n / 10;

    printf("The sum of digits of %d is %d", num, sum);
}
