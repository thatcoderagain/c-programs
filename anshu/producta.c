#include"stdio.h"
float product(float*,int*);
int main()
{
  int b;
  float a,product;
  printf("enter a float: ");
  scanf("%f",&a);
  printf("enter a int: ");
  scanf("%d",&b);
  product (&a,&b);
  printf("%f*%d=%f",a,b,product);
}


float product(float*c,int*d)
{
    int product;
    product=(*c)*(*d);
}