#include <stdio.h>
int checkEven(int num) {
    if (num % 2 == 0) {
        return 1; // It's even
    } else {
return 0; // It's odd
    }
}
int main() {
int num1, num2, num3, largest, smallest;
printf("Enter three numbers: ");
scanf("%d %d %d", &num1, &num2, &num3);
    largest = num1;
    smallest = num1;
if (num2 > largest) {
largest = num2;
}if (num3 > largest) {
largest = num3;
}if (num2 < smallest) {
smallest = num2;}
if (num3 < smallest) {
smallest = num3;
}printf("Largest number: %d\n", largest);
if (checkEven(largest)) {
printf("Largest number is even\n");} else {
printf("Largest number is odd\n");
}printf("Smallest number: %d\n", smallest);
if (checkEven(smallest)) {
printf("Smallest number is even\n");
} else {
printf("Smallest number is odd\n");}
return 0;
}
