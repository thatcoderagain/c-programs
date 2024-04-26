#include "stdio.h"

int main() {

    int a = 123;

    printf("%d ", a);

    {
        int a = 100, b = 200;
        printf("%d ", a);
        {
            a = 200;
            printf("%d %d", a, b);
        }
        printf("%d %d", a, b);
    }

    printf("%d %d", a, /* b // Error */);

    return 0;
}
