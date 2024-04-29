#include<stdio.h>

void main(){
    int yos,salary;
    char gender,qualification;
    printf("\nenter your gender?(m/f):");
    printf("\nenter your yos?");
    printf("\nenter your qualification?(p/g)\n ");
    scanf("%c %d %c",&gender,&yos,&qualification);
    salary= 15000,10000,10000,7000,12000,9000,10000,6000;

         if(gender =='m'&& yos >= 10 && qualification=='p'){
            salary=15000;
   }else if(gender =='m'&& yos >= 10 && qualification=='g'){
            salary=10000;

   }else if (gender =='m'&& yos <10 && qualification=='p'){
            salary=10000;
   }else if (gender =='m'&& yos <10 && qualification=='g'){
            salary=7000;
   }else if (gender =='f'&& yos >= 10 && qualification=='p'){
            salary=12000;
   }else if (gender =='f'&& yos >= 10 && qualification=='g'){
            salary=9000;
   }else if (gender =='f'&& yos < 10 && qualification=='p'){
            salary=10000;
   }else if (gender =='f'&& yos < 10 && qualification=='g'){
            salary=6000;

   }
   printf("your salary is %d ",salary);
}



