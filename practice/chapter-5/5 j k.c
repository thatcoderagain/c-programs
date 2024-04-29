#include"stdio.h"

int euclid(int, int,int);

int main(){

    int n1 = 200, n2 = 300, gcd = 1;

    for(int i = 1; i <= n1 || i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    printf("The GCD of %d and %d is: %d", n1, n2, gcd);

//    int a,b,gdc;
//    printf("enter two numbers a and b: ");
//    scanf("%d %d",&a,&b);
//    euclid(a, b,gdc);
//    printf("the greater common divisor of %d and %d is %d",a,b,gdc);
    return 0;

}
int euclid(int a, int b,int gdc)
{
    int ans,num;
    if(b==0)
    {
       printf("invalid");
    }
    else
    {
        num=a/b;
        ans=a-num*b;
        while(ans!=0)
        {
            a=b;
            b=ans;
            num=a/b;
            ans=a-num*b;

        }
        return(ans);


    }

}