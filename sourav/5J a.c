#include<stdio.h>
int calsum(int);
int main()
{
    int num=0,sum=0;
    printf("enter any 5 digit num : ");
    scanf("%d",&num);
    calsum(num);
    printf("sum=%d",sum);
}

int calsum(int num) {
    int sum, i;


    if (num > 0) {
        while (num != 0) {
            i = num % 10;
            sum = sum + i;
            num = num / 10;
        }
        printf("sum=%d",sum);

    }
}