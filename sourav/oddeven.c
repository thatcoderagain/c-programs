#include<stdio.h>
void main(){
    int a;
    printf("enter an natural num");
    scanf("%d",&a);
    /*
    if (a%2==1){
        printf("This num is odd");
    }else if (a%2==0){
        printf("this num is even");
    }
    */
    printf("%d is %s", a, a % 2 == 0 ? "even" : "odd");
}
