#include <stdio.h>
void generateFibonacciSeries(int n) {
if(n <= 0) {
return;
}generateFibonacciSeries(n - 1);
printf("%d ", n);
}int main() {
int n = 20;
printf("Fibonacci series of %d numbers: ", n);
generateFibonacciSeries(n);
return 0;}

