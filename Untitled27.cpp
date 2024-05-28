#include <stdio.h>
// Function to calculate sum of digits
int reverseNumber(int num) {
static int reverse = 0; // variable to store reverse number
// base case
if (num == 0) {
return reverse;
}
// Recursive call
reverse = reverse * 10 + num % 10; // reverse number calculation
reverseNumber(num / 10);
// recursive call with number without last digit
}int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (num < 0) {
printf("Reverse of negative numbers is not possible.");
} else {
printf("Reverse of the number: %d", reverseNumber(num));
}return 0;}

