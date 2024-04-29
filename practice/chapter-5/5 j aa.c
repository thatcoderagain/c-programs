#include"stdio.h"
int digit(int );
void main(){
    int num,sum;
    printf("enter a five digit integer: ");
    scanf("%d",&num);
    sum=digit(num);
    printf("sum of five digit num is %d",sum);
}
int digit(int num)
{
    int sum;
    if (num!=0)
    {
        sum=num%10+digit(num/10);
        return(sum);
    }
    else
    {
        return 0;
    }

}