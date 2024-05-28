#include <stdio.h>
typedef struct {
int num1;
int num2;
} Number;
Number getNumbers() {
Number n;
printf("Enter first number: ");
scanf("%d", &n.num1);
printf("Enter second number: ");
scanf("%d", &n.num2);
return n;}
int add(Number n) {
return n.num1 + n.num2;}
int subtract(Number n) {
return n.num1 - n.num2;}
int multiply(Number n) {
return n.num1 * n.num2;}
int divide(Number n) {
if(n.num2 == 0) {
printf("Error! Division by zero is not allowed.\n");
return -1;}
return n.num1 / n.num2;}
int main() {
Number n = getNumbers();
printf("Sum: %d\n", add(n));
printf("Difference: %d\n", subtract(n));
printf("Product: %d\n", multiply(n));
int div = divide(n);
if(div != -1) {
printf("Quotient: %d\n", div);}
return 0;}

