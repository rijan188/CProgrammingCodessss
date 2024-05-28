#include <stdio.h>
int checkPrime(int n) {
int i;
if (n <= 1) {
return 0; // It's not a prime number
}
for (i = 2; i * i <= n; i++) {
if (n % i == 0) {
return 0; // It's not a prime number
}
}
return 1; // It's a prime number
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
if (checkPrime(n)) {
printf("%d is a prime number\n", n);
} else {
printf("%d is not a prime number\n", n);
}
return 0;
}

