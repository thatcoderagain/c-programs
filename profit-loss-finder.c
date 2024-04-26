#include<stdio.h>

void main(){
    float costprice,sellingprice, income;
    printf("enter the cost price \n" );
    printf("enter the selling price \n" );
    scanf("%f %f" ,&costprice, &sellingprice);
    income = sellingprice - costprice;
   if((costprice > sellingprice)) {
       printf("loss of %f",income );
   }else if (costprice<sellingprice) {
       printf("profit of %f", income);
   } else if(costprice==sellingprice) {
       printf("not loss nor profit");
   }
}