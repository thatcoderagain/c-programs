#include"stdio.h"

int findBinaryValue(int n);

int main()

{
    unsigned int num;
    long int binaryValue,n;
    printf("enter a decimal num: ");
    scanf("%d" ,&num);
    n=num;
    binaryValue = findBinaryValue(n);


    printf("binary of decimal num=%ld", binaryValue);
}

int findBinaryValue(int n)
 {

    long int binary=1;
    if (n==0)
     {
         return 0;
     }
    else{
        binary=(binary%(binary+1)*10)+n%2+n/2
                ;

        return(binary);
    }


 }