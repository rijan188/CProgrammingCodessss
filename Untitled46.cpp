#include <stdio.h>

int main(int argc, char *argv[]) {
  // Check if enough arguments are provided
  if (argc != 3) {
    printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
    return 1;
  }

  // Open the source file in read mode
  FILE *source_file = fopen(argv[1], "r");
  if (!source_file) {
    printf("Error opening source file: %s\n", argv[1]);
    return 1;
  }

  // Open the destination file in write mode
  FILE *destination_file = fopen(argv[2], "w");
  if (!destination_file) {
    printf("Error opening destination file: %s\n", argv[2]);
    fclose(source_file);
    return 1;
  }

  // Read a character from the source file
  char ch;
  while ((ch = fgetc(source_file)) != EOF) {
    // Write the character to the destination file
    fputc(ch, destination_file);
  }

  // Close the files
  fclose(source_file);
  fclose(destination_file);

  // Print a success message
  printf("Successfully copied contents of %s to %s\n", argv[1], argv[2]);

  return 0;
}
