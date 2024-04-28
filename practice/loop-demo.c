#include "stdio.h"

int main() {
    int x = 4, y, z;
    y = --x;
    z = x--;

    x=4;
    y=3;
    z = x-- -y;
    printf("%d, %d, %d", x,y,z);
    return 0;
}