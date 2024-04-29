#include<stdio.h>
int main(){
    int num,sum=0,n;
    printf("enter an num : ");
    scanf("%d",&num);

    for(n=num,sum=0;num!=0;sum=sum+(num%10),num/=10);
    printf("%d %d",n,sum);
}
