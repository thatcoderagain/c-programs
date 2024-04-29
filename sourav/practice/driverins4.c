#include<stdio.h>

main(){

int age;
char ms ,gender,ins,y,n,f,m;
   printf(" marritial status(Y/N )?: ");
   printf("AGE :");
   printf("Sex (M/F)?: ");
   scanf("%c %d %c",&ms,&age,&gender);
   if(ms==m){
    ins = "You are insured ";
     }else if((ms==n)&&(gender=f))&&(age=>25)){
    ins= "you are not insured";
     }else if((ms==n)&&(gender=f)&&(age<=25)){
    ins ='you are not insured';
     }else if((ms==n)&&(gender=m)&&(age=>30)){
    ins ='you are insured';
     }else if((ms==n)&&(gender=m)&&(age=<30)) {
    ins ='you are not insured';


}
          printf("we inform that %c",ins);
