#include"stdio.h"
#include"math.h"
 int areaa(float a,float b,float c,float *area);
void main(){
     float a,b,c,area;
     printf("enter the three sides of tri: ");
     scanf("%f %f %f",&a,&b,&c);
     areaa(a,b,c,&area);
     printf("area of tri is %f", area);
}
int areaa( float x,float y,float z,float *A)
{
    float s;
    s=(x+y+z)/2;
    *A=sqrt(s*(s-x)*(s-y)*(s-z));
}