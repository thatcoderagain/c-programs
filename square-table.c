#include "stdio.h"

int main()
{
    int i=0,j;
    printf("enter starting num:");
    scanf("%d", &i);
    printf("enter ending num: ");
    scanf("%d", &j);

    if(j>i) {
        while (i <= j)
        {
            printf("\nsq of %d = %d", i, i * i);
            i = i + 1;
        }
    } else {
        printf("error");
    }
    return 0;
}


