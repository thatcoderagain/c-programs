#include<stdio.h>
int main(){
    int i,power,base,pow;
    printf("Enter the base value : ");
    scanf("%d",&base);
    printf("Enter the power : ");
    scanf("%d",&power);
    for(i=0,pow=1;i<power;i++)
    {
        pow=pow*base;
    }
    printf(" %d",pow);
    return 0;
}
