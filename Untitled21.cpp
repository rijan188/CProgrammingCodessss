#include <stdio.h>
int sum(int n) {
if(n == 0) {
return 0;
}return n + sum(n - 1);
}int main() {
int result = sum(20);
printf("Sum of first 20 natural numbers: %d\n", result);
return 0;}

