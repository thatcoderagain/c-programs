#include<stdio.h>

void main()
{
    char maritalStatus, gender;
    int age;

    printf("\nAre you married ? (y/n): ");
    printf("\nAre you male or female ? (m/f): ");
    printf("\nPlease enter your age? \n ");\
    scanf("%c %c %d", &maritalStatus, &gender, &age);

    /*
    // Method #1
    if (maritalStatus == 'y') {
        printf("You are insured");
    } else {
        if (gender == 'm') {
            if (age >= 30) {
                printf("You are insured");
            } else {
                printf("You are not insured");
            }
        } else if (gender == 'f') {
            if (age >= 25) {
                printf("You are insured");
            } else {
                printf("You are not insured");
            }
        }
    }
    */

    // Method #2
    if ( (maritalStatus == 'y') ||
        (maritalStatus == 'n' && gender == 'm' && age >= 30) ||
        ( maritalStatus == 'n' && gender == 'f' && age >= 25)
        ) {
        printf("You are insured");
    } else {
        printf("You are not insured");
    }
}
