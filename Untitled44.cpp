#include <stdio.h>

int count_lines(FILE *file) {
    int count = 0;
    char c;

    while((c = fgetc(file)) != EOF) {
        if(c == '\n') {
            count++;
        }
    }

    return count;
}

int main() {
    FILE *file;
    int count;

    file = fopen("example.txt", "r");
    if(file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    count = count_lines(file);
    printf("The file has %d lines.\n", count);

    fclose(file);
    return 0;
}
