#include<stdio.h>

void main(){
    int sp,cp,inc;
    printf("please enter selling price:");
    scanf(" %d",&sp);
    printf("please enter cost price:");
    scanf(" %d",&cp);
    inc=sp-cp;
    if (inc>0){
        printf("you had profit %d",inc);
    } else if (inc<0){
        printf("your loss is %d",inc);
            } else if (inc=0){
       printf("you had no profit or loss",inc);{



 }

    }
}
