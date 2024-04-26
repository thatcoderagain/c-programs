#include <stdio.h>

 void main(){
    int serv;
    char gender , qualif ;
     printf("please enter your gender(m/f): ");
     printf("please enter your qualification: (p/g)");
     printf("please enter years of service:");
     scanf("%c %c %d", &gender, &qualif, &serv);
     if((gender=='m')&&(qualif='p')&&(serv>=10))
          printf("15000");
          else if ((gender=='m')&&(qualif=='p')&&(serv<10))
          printf("10000");
          else if ((gender=='m')&&(qualif=='g')&&(serv>=10))
          printf("10000");
          else if((gender=='m')&&(qualif=='p')&&(serv<10))
          printf("7000");
        if((gender=='f')&&(qualif=='p')&&(serv>=10))
          printf("12000");
          else if ((gender=='f')&&(qualif=='p')&&(serv<10))
          printf("10000");
          else if ((gender=='f')&&(qualif=='g')&&(serv>=10))
          printf("9000");
          else if((gender=='f')&&(qualif=='g')&&(serv<10))
          printf("6000");


}
