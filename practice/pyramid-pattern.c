#include "stdio.h"

int main() {

    int lines, i, j, n;

    printf("\nEnter number of lines: ");
    scanf("%d", &lines);

    n = 1;
    for (i = 1; i <= lines; i++) {
        for (j = i; j-1 < lines; j++) {
            printf("\t");
        }
        for (j = 1; j <= i; j++) {
            printf("\t%d\t", n++);
        }
        printf("\n");
    }

    return 0;
}
