#include "stdio.h"

void main() {
    int x1, x2, x3, y1 , y2, y3;
    printf("Enter (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter (x3, y3): ");
    scanf("%d %d", &x3, &y3);

    if ((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2)) {
        printf("It's a straight line");
    }
    else {
        printf("It's not straight line");
    }
}