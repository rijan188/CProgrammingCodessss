#include <stdio.h>
int isEven(int n) {
return (n % 2 == 0);
}int isOdd(int n) {
return (n % 2 != 0);
}int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (isEven(num)) {
printf("%d is even\n", num);
} else if (isOdd(num)) {
printf("%d is odd\n", num);
} else {
printf("Invalid input\n");
}return 0;
}

