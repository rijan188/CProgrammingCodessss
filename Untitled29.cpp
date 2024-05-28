#include <stdio.h>
// Function to calculate sum of digits
int maxNumber(int num1, int num2) {
if (num1 > num2) {
return num1;
} else {
return num2;
}
}int minNumber(int num1, int num2) {
if (num1 < num2) {
return num1;
} else {
return num2;
}
}int main() {
int num1, num2;
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
printf("Maximum of the two numbers: %d", maxNumber(num1, num2));
printf("\nMinimum of the two numbers: %d", minNumber(num1, num2));
return 0;}

