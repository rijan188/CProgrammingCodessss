#include <stdio.h>

int main() {
  // File pointer
  FILE *file;

  // Open the file in read mode
  file = fopen("filename.txt", "r");

  // Check if file opened successfully
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }

  // Read the entire file into a buffer
  char buffer[1024]; // Adjust buffer size as needed
  size_t bytes_read = fread(buffer, 1, sizeof(buffer), file);

  // Print the buffer to the console
  if (bytes_read > 0) {
    printf("%.*s", (int)bytes_read, buffer);
  } else {
    printf("File is empty.\n");
  }

  // Close the file
  fclose(file);

  return 0;
}
