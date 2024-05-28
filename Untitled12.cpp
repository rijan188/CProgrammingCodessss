#include <stdio.h>

int main() {
  // Declare and get the number from the user
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  // Use a switch statement to check the number
  switch (number > 0) {
    case 1: // Number is positive
      printf("%d is a positive number.\n", number);
      break;
    case 0: // Number is not positive
      switch (number < 0) {
        case 1: // Number is negative
          printf("%d is a negative number.\n", number);
          break;
        case 0: // Number is zero
          printf("%d is zero.\n", number);
          break;
      }
      break;
  }

  return 0;
}
