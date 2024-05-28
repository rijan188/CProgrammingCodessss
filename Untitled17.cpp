#include <stdio.h>

int main() {
  // Declare variables for dimensions and matrices
  int rows, columns;
  int matrix1[4][4], matrix2[4][4], sumMatrix[4][4];

  // Get user input for rows and columns
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &columns);

  // Get user input for elements of first matrix
  printf("Enter elements of first matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  // Get user input for elements of second matrix
  printf("Enter elements of second matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // Add corresponding elements of each matrix
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  // Print the sum matrix
  printf("Sum of matrices:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d\t", sumMatrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
