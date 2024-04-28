#include<stdio.h>
void main(){
    int p, n;
    float r, si;
    printf("Enter value for P, N, R: ");
    scanf("%d %d %f", &p, &n, &r);

    si = p * r * n /100;

    printf("Your Simple interest: %f", si);
}
