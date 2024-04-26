#include "stdio.h"

int main() {
    int class, failedSubjects, graceMarks;

    printf("\nPlease enter student's class: ");
    scanf("%d", &class);

    printf("\nPlease enter number of subject student failed: ");
    scanf("%d", &failedSubjects);

    switch (class) {
        case 1:
            if (failedSubjects <= 3) {
                graceMarks = 5 * failedSubjects;
            } else {
                graceMarks = 0;
            }
            break;
        case 2:
            if (failedSubjects <= 2) {
                graceMarks = 4 * failedSubjects;
            } else {
                graceMarks = 0;
            }
            break;
        case 3:
            if (failedSubjects <= 1) {
                graceMarks = 5 * failedSubjects;
            } else {
                graceMarks = 0;
            }
    }

    if (failedSubjects > 0 && graceMarks == 0) {
        printf("\nStudent has failed and not received any grace.");
    } else {
        if (graceMarks == 0) {
            printf("\nStudent has passed without any grace.");
        } else {
            printf("\nStudent has passed with %d grace marks", graceMarks);
        }
    }

    return 0;
}