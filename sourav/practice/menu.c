#include "stdio.h"

int main() {
    int num, i, fac, input;
    do {
        printf("1.Factorial : \n");
        printf("2.Prime : \n");
        printf("3.Odd/Even : \n");
        printf("4.Exit\n");
        printf("\nYour choice :? ");
        scanf("\n%d", &input);
        switch (input) {
            // for factorial
            case 1:
                for (i = 1; i <= num; i++) {
                    fac = fac * i;
                    printf("\n%d", fac);
                    break;
                }
            case 2:
                for (i = 2; i < num / 2; i++) {
                    if (num % i == 0)
                        printf("its prime number");
                    else if
                        printf("its not a prime number");
                    break;
                }
                // for odd or even
            case 3:
                if (num % 2 == 0) {

                    printf("this is an odd number");
                    else if
                        printf("this is an even number");
                    break;

                }
        }
        while (input != 4)
            return 0;

    }
}
