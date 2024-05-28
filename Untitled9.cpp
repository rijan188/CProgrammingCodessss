#include <stdio.h>

void print_day_name(int day) {
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number. Please enter a number between 1 and 7.\n");
            break;
    }
}

int main() {
    int day;

    printf("Enter a day number: ");
    scanf("%d", &day);

    print_day_name(day);

    return 0;
}
