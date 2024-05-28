#include <stdio.h>
void add(int* num1, int* num2) {
int sum = *num1 + *num2;
printf("Sum of the two numbers: %d\n", sum);
}int main() {
int num1 = 10, num2 = 20;
add(&num1, &num2);
return 0;
}


