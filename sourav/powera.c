#include"stdio.h"
int power(int,int);
int main()
{
    int base , expo, a;
    printf("enter the base: ");
    scanf("%d",&base);
    printf("enter the expo num: ");
    scanf("%d",&expo);
    a=power(base,expo);
    printf("%d",a);

}
int power(int base, int expo)
{
    int i,power;
    for(i=0,power=1;i<=expo;i++)
    {
        power=power*base;
    }
    return(power);
}