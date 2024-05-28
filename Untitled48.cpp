#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "file1.txt";

    file = fopen(filename, "r");
    if(file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    fclose(file);

    if(remove(filename) != 0) {
        perror("Error: Could not delete the file.");
        return 1;
    }

    printf("File deleted successfully.\n");
    return 0;
}
