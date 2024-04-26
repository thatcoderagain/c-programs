#include "stdio.h"

int main(){
    int num,i,sum=0,n;
    printf("enter num: ");
    scanf("%d",&num);
    n = num;

    while(num!=0) {
        i = num % 10;
        sum = sum + i; // sum += i;
        num = num / 10; // num /= 10;
    }

    printf("sum of %d is %d", n, sum);




}