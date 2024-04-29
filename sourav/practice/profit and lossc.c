#include<stdio.h>
void main(){
    int income, sp,cp,profit,loss;
    printf("enter the cost incurred:");
    scanf("%d",&cp);
    printf("enter the selling price:");
    scanf("%d",&sp);
    income=sp-cp;
    if (income<0){
        printf("you had profit of%d",income);
    } else if (income>0){
        printf("you had loss of %d",income);
    } else if (income=0){
        printf("there is no profit no loss%d",income);
    }
}
