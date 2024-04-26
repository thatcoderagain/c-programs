#include "stdio.h"

int main(){
    int a, i, m;
    printf("enter num:");
    scanf("%d",&a);
    i = -10;
    while(i <= 10){
        printf("\n%d * %d = %d", a, i, a*i);
        i++;
    }



//    b=a*1;
//    printf("\n%d*%d=%d",a, 1, b);
//    b=a*2;
//    printf("\n%d*%d=%d",a, 1, b);
//    b=a*3;
//    printf("\n%d*%d=%d",a, 1, b);
//    b=a*4;
//    printf("\n%d*%d=%d",a, 1, b);
//    b=a*5;
//    printf("\n%d*%d=%d",a, 1, b);
//    b=a*6;
//    printf("\n%d*%d=%d",a, 1, b);
//    b=a*7;
//    printf("\n%d*%d=%d",a, 1, b);
//    b=a*8;
//    printf("\n%d*%d=%d",a, 1, b);
//    b=a*9;
//    printf("\n%d*%d=%d",a, 1, b);
//    b=a*10;
//    printf("\n%d*%d=%d",a, 1, b);

    return 0;
}