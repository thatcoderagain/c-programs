#include<stdio.h>
main(){
    float A ,B,C,D,E ,per=0, sum=0;
    char grade;
    printf("enter your marks");
    scanf("%f %f %f %f %f", &A ,&B,&C,&D,&E);
    sum= A+B+C+D+E;
    per=sum/500*100;
    printf("Your total marks is %f and your percentage is %f",sum, per );

    if (per >= 90){
        grade = 'A';
    } else {
        if (per >=80) {
            grade = 'B';
              } else {
             if (per >= 70) {
                grade = 'C';
              } else {
              if(per>=60)  {
                grade='D';

              } else {
               if(per>=50) {
                  grade='E';

                } else{
              if(per<50)
                grade='F';
              }
              }
            }
        }
    }
     printf("you scored %c",grade);


}
