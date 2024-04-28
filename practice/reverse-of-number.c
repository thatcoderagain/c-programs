#include "stdio.h"

int main() {
    int num, rev,c;
    printf("Enter a number: ");
    scanf("%d", &num);
    c=num;
    rev = 0;
    while(num != 0){
        rev = rev * 10 + num%10;
        num /= 10;
    }

    printf("%d %d", num, rev);
    if(c==rev) {
        printf("palindrome");
    }else {
        printf("non palindrome");
    }
    return 0;
}