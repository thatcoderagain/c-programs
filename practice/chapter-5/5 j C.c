#include <stdio.h>

int fibbonacci(int ) ;
int main() {
    int n = 25;
    int i;
    for(i = 0;i<n;i++) {
        printf("%d ",fibbonacci(i));
    }
    printf("Fibbonacci of %d: " , n);
}

int fibbonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (fibbonacci(n - 1) + fibbonacci(n - 2));
    }
}