#include<stdio.h>
int main(){
    int a,i,num,fac=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    printf(" %d",fac);


}

