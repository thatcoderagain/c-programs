#include<stdio.h>
int main() {
    int num;ch
    printf("enter a number : ");
    scanf("%d,&num");
    switch (num)
    {
        case 1:
            printf("M");
            break;
        case 2:
            printf("T");
            break;
        case 3:
            printf("W");
            break;
        case 4:
            printf("H");
            break;
        case 5:
            printf("F");
            break;
        case 6:
            printf("S");
            break;
        case 7:
            printf("U");
            break;
        default
            printf("not a week day",num);

    }

    return 0;

}
