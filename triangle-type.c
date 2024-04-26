#include<stdio.h>

int main(){
    float p,b,h;
    printf("enter the perpendicular value:");
    scanf("%f",&p);
    printf("\nenter the base value: ");
    scanf("%f",&b);
    printf("\nenter the hypothenese value: ");
    scanf("%f",&h);
    if ((p==b)&&(p==h)) {
        printf("Triangle is Equilateral");
    } else if ((p==b) && p != h || (p == h) && p != b) {
        printf("Triangle is isoceles");
    } else if ((h*h)==((p*p)+(b*b))) {
        printf("triangle is right angled");
    } else if(!((p==b) && p != h || (p == h) && p != b)) {
        printf("triangle is scalene");
    }
    return 0;
}

