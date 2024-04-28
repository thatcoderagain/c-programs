#include<stdio.h>

void main(){
      int ret;

      printf("enter the num of returning days:");
      scanf("%d",&ret);

    if (ret>=0&&ret<=5){
        printf("fine of 50 paise");
    }else if(ret>=6 && ret<=10){
        printf("fine of 1 rupee");
    }else if(ret>10 && ret<=30){
        printf("fine of 5 rupee");
    } else if(ret>30){
        printf("your membership is no longer exist");
    }
}
