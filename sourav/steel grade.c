#include<stdio.h>

void main(){
     int hard,ten,H,TEN;
     float cc,CC;

     printf("enter hardness value of steel:\n");
     scanf("%d",&hard);
     printf("enter carbon content value of steel: \n");
     scanf("%f",&cc);
     printf("enter the tensile value of steel: \n");
     scanf("%d",&ten);

     H=hard>50;
     CC=cc<0.7;
     TEN=ten>5600;



     if((H)&&(CC)&&(TEN)){
            printf("grade 10");
    }else if ((H)&&(CC)&&!(TEN)){
            printf("grade 9");
    }else if (!(H)&&(CC)&&(TEN)){
                printf("grade 8");
    }else if((H)&&!(CC)&&(TEN)){
            printf("grade 7");
    }else if((H)||(CC)||(TEN)){
        printf("grade 6");
    }else if( !((H)&&(CC)&&(TEN))){
            printf("grade 5");
    }

        }
