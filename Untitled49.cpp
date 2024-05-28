#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "file1.txt";
    char content[] = "This is appended content.\n";

    file = fopen(filename, "a");
    if(file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    fputs(content, file);
    fclose(file);

    printf("Content appended to file successfully.\n");
    return 0;
}
