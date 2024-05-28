#include <stdio.h>

// Function to calculate sum of digits
int calculateSum(int num) {
    static int sum = 0; // variable to store sum

    // base case
    if (num == 0) {
        return sum;
    }

    // Recursive call
    sum += num % 10; // summing last digit
    calculateSum(num / 10); // recursive call with number without last digit
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Sum of digits of negative numbers is not possible.");
    } else {
        printf("Sum of digits: %d", calculateSum(num));
    }

    return 0;
}
