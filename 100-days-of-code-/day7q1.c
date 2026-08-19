#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        // Step 2a: If yes, it must be divisible by 400
        if (year % 400 == 0) {
            printf("Leap year\n");
        } else {
            printf("Not a leap year\n");
        }
    } 

    else {
        if (year % 4 == 0) {
            printf("Leap year\n");
        } else {
            printf("Not a leap year\n");
        }
    }

    return 0;
}
