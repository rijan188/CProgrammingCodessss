#include <stdio.h>

int main(int argc, char *argv[]) {
  // Check if enough arguments are provided
  if (argc != 4) {
    printf("Usage: %s <file1> <file2> <merged_file>\n", argv[0]);
    return 1;
  }

  // Open files
  FILE *file1 = fopen(argv[1], "r");
  if (!file1) {
    printf("Error opening file %s\n", argv[1]);
    return 1;
  }
  FILE *file2 = fopen(argv[2], "r");
  if (!file2) {
    printf("Error opening file %s\n", argv[2]);
    fclose(file1);
    return 1;
  }
  FILE *merged_file = fopen(argv[3], "w");
  if (!merged_file) {
    printf("Error creating merged file %s\n", argv[3]);
    fclose(file1);
    fclose(file2);
    return 1;
  }

  // Merge content line by line
  char line1[1024], line2[1024];
  while (fgets(line1, sizeof(line1), file1) != NULL || fgets(line2, sizeof(line2), file2) != NULL) {
    // Write content from file1
    if (fgets(line1, sizeof(line1), file1) != NULL) {
      fputs(line1, merged_file);
    }
    // Write content from file2
    if (fgets(line2, sizeof(line2), file2) != NULL) {
      fputs(line2, merged_file);
    }
  }

  // Close files
  fclose(file1);
  fclose(file2);
  fclose(merged_file);

  printf("Successfully merged files %s and %s into %s\n", argv[1], argv[2], argv[3]);

  return 0;
}
