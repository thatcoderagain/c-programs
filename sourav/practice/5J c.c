#include <stdio.h>
int fibonacci(int,int);

int main() {

    int a, b,n,an,ans;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    fibonacci(a, b);
    printf("Fibonacci Series: %d, %d, ", an, ans);

}

int fibonacci(int a, int b)
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    while (nextTerm <= n) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}