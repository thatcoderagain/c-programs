#include"stdio.h"
int primef(int num);
void main(){
    int num;
    printf("enter a num: ");
    scanf("%d",&num);
    primef(num);
}
int primef(int num)
{
    int i;
    for(i=2;i<=num;i++)
    {
        while(num%i==0)
            printf("%d",i);
        primef=num/i;
    }
}