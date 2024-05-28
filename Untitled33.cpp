#include <stdio.h>

void swap(int *a, int *b) {
  // Use a temporary variable to store the value of a
  int temp = *a;
  // Assign the value of b to a
  *a = *b;
  // Assign the stored value of a to b
  *b = temp;
}

int main() {
  int x = 5, y = 10;

  printf("Before swapping: x = %d, y = %d\n", x, y);

  swap(&x, &y); // Pass the addresses of x and y to the swap function

  printf("After swapping: x = %d, y = %d\n", x, y);

  return 0;
}
