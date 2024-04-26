#include "stdio.h"

void main() {
    int d, m, y,days,diff,leapYear,normalYear;
    printf("Enter date moth year [dd mm yy]: ");
    scanf("%d %d %d",&d, &m, &y);

    // number of days left after years
    diff = y-1900 - 1; // excluding current year from subtraction
    leapYear = diff/4 + 1; // adding 1900 as leap year
    normalYear = diff - leapYear;
    days = normalYear*(365%7) + leapYear*(366%7);

    // remaining month days
    if (m-1 == 1) {
        days = days + 31 % 7;
    } else if (m-1 == 2) {
        if (y%4 != 0) {
            days = days + (31 + 28) % 7;
        } else {
            days = days + (31 + 29) % 7;
        }
    } else if (m-1 == 3) {
        if (y%4 != 0) {
            days = days + (31 + 28 + 31) % 7;
        } else {
            days = days + (31 + 29 + 31) % 7;
        }
    } else if (m-1 == 4) {
        printf(">> %d", days);
        if (y%4 != 0) {
            days = days + (31 + 28 + 31 + 30) % 7;
        } else {
            days = days + (31 + 29 + 31 + 30) % 7;
        }
        printf(">> %d", days);
    } else if (m-1 == 5) {
        if (y%4 != 0) {
            days = days + (31 + 28 + 31 + 30 + 31) % 7;
        } else {
            days = days + (31 + 29 + 31 + 30 + 31) % 7;
        }
    } else if (m-1 == 6) {
        if (y%4 != 0) {
            days = days + (31 + 28 + 31 + 30 + 31 + 30) % 7;
        } else {
            days = days + (31 + 29 + 31 + 30 + 31 + 30) % 7;
        }
    } else if (m-1 == 7) {
        if (y%4 != 0) {
            days = days + (31 + 28 + 31 + 30 + 31 + 30 + 31) % 7;
        } else {
            days = days + (31 + 29 + 31 + 30 + 31 + 30 + 31) % 7;
        }
    } else if (m-1 == 8) {
        if (y%4 != 0) {
            days = days + (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) % 7;
        } else {
            days = days + (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31) % 7;
        }
    } else if (m-1 == 9) {
        if (y%4 != 0) {
            days = days + (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7;
        } else {
            days = days + (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7;
        }
    } else if (m-1 == 10) {
        if (y%4 != 0) {
            days = days + (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7;
        } else {
            days = days + (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7;
        }
    } else if (m-1 == 11) {
        if (y%4 != 0) {
            days = days + (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7;
        } else {
            days = days + (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7;
        }
    }

    // days remaining days
    days = days + d;
    days = days % 7;

    if (days == 0){
        printf("sunday");
    } else if(days == 1){
       printf("monday");
    } else if (days == 2) {
       printf("tuesday");
    } else if (days == 3) {
       printf("wednesday");
    } else if (days == 4) {
       printf("thursday");
    } else if (days == 5) {
       printf("friday");
    } else if (days == 6) {
       printf("saturday");
    } else {
       printf("Something went wrong, days = %d", days);
    }
}