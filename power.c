#include "stdio.h"

int main(){
    int a,b,i,pow;
    printf("enter 1st num:\n");
    scanf("%d",&a);
    printf("enter 2nd num:\n");
    scanf("%d",&b);

//    for(i=0,pow=1;i<b;i++)
//    {
//        pow=pow*a;
//    }

    for (i=b, pow=1; i >0; i--) {
        pow *= a;
    }

    pow = 1;
    i = 0;
    while(i<b) {
        pow *= a;
        i++;
    }

//    pow = 1;
//    i = b;
//    while(i>0){
//        pow *= a;
//        i--;
//    }
    printf("%d",pow) ;

}