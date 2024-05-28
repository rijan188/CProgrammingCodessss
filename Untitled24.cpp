#include <stdio.h>
// Swapping using call by value method
void swapUsingCallByValue(int a, int b) {
int temp = a;
a = b;
b = temp;
printf("Swapped values (call by value): %d %d\n", a, b);
}
// Swapping using call by reference method
void swapUsingCallByReference(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
printf("Swapped values (call by reference): %d %d\n", *a, *b);
}int main() {
int a = 10, b = 20;
printf("Original values: %d %d\n", a, b);
// Swapping using call by value method
swapUsingCallByValue(a, b);
// Swapping using call by reference method
swapUsingCallByReference(&a, &b);
return 0;}

