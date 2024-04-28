#include<stdio.h>
float multi(int ,float,float*);
int main()
{
    int a,product;
    float b;
    printf("enter a int num: ");
    scanf("%d",&a);
    printf("enter a float num: ");
    scanf("%f",&b);
    multi(a,b,&product);
    printf("%d*%f=%f",a,b,product);
}


float multi(int a ,float b,float*c)

{
    (*c)=a*b;

}
