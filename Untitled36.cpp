#include <stdio.h>
void stringCopy(char* source, char* destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}int main() {
char source[] = "Rijan BCA-II Student!";
    char destination[50];
stringCopy(source, destination);
printf("Copied string: %s\n", destination);
return 0;
}

