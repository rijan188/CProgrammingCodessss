#include <stdio.h>
#include <math.h>

int is_armstrong(int number) {
    int temp, sum = 0, digits;

    temp = number;
    while (temp > 0) {
        temp /= 10;
        sum += pow(temp % 10, 3);
    }

    if (sum == number) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_armstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
