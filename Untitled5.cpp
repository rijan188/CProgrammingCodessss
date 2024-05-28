#include <stdio.h>

void checkLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Year %d is a leap year.\n", year);
            } else {
                printf("Year %d is not a leap year.\n", year);
            }
        } else {
            printf("Year %d is a leap year.\n", year);
        }
    } else {
        printf("Year %d is not a leap year.\n", year);
    }
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    checkLeapYear(year);

    return 0;
}
