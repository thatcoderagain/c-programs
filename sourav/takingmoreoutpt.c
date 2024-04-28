#include<stdio.h>
void main(){
    float a,b,p, sum;
    char c ;
    printf("Press any key to continue");
    getch();
    printf("\nenter the first num :");
    scanf("%f",&a);
    printf("\nenter the second num:");
    scanf("%f",&b);
    printf("\nenter the operation :");
    getchar();
    scanf("%c", &c);
    if(c=='+'){
        sum=a+b;
   } else if (c=='-'){
    sum=a-b;
   } else if (c=='*'){
    sum=a*b;
   } else if (c == '/') {
        if(b == 0) {
            printf("Divide by zero not allowed");
        } else {
            sum = a/b;
        }
   }
   printf("answer %f is ",sum);
}
