#include <stdio.h>

int main() {
  // Declare 3x3 matrices
  int matrix1[3][3], matrix2[3][3], productMatrix[3][3];

  // Get user input for elements of first matrix
  printf("Enter elements of first matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  // Get user input for elements of second matrix
  printf("Enter elements of second matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // Multiply matrices
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      productMatrix[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        productMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  // Print the product matrix
  printf("Product of matrices:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\t", productMatrix[i][j]);
    }
    printf("\n");
  }
    return 0;
}

