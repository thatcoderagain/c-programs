#include<stdio.h>

void main(){
  int ai,aii,bi, bii, ci,cii,s,si;
  printf("enter the value of point ai and aii:\n");
  printf("enter the value of point bi and bii:\n");
  printf("enter the value of point ci and cii:\n");
  scanf("%d %d %d %d %d %d",&ai,&aii,&bi,&bii,&ci,&cii);

  (bii-aii)/(bi-ai)==(cii-bii)/(ci-bi)
    ? printf("straight line")
    : printf("no straight line");
}
