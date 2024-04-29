#include<stdio.h>
int main()
{
    int pay, over;
    printf("enter the time you worked(at least 40) : ");
    scanf("%d",&pay);
    if (pay>40)
    {
        over=pay-40;
        printf("your overtime pay is %d",over*12);
    }
    else
        printf("no overtime pay");
    return 0;

}