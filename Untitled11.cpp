#include <stdio.h>

void check_date_validity(int day, int month, int year) {
    if(day < 1 || day > 31) {
        printf("Invalid day.\n");
        return;
    }

    if(month < 1 || month > 12) {
        printf("Invalid month.\n");
        return;
    }

    if(year < 1) {
        printf("Invalid year.\n");
        return;
    }

    printf("The date is valid.\n");
}

int main() {
    int day, month, year;

    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    check_date_validity(day, month, year);

    return 0;
}
