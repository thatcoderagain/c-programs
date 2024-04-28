#include<stdio.h>
int main(){
    int i,f;
    printf("enter the num : ");
    scanf("%d",&f);
    for(i=1;i<11;i++){
        printf("\n%d*%d=%d",f ,i,f*i);
    }
    return 0;
}