#include <stdio.h>
void stringConcatenate(char* source1, char* source2, char* destination) {
while (*source1 != '\0') {
*destination = *source1;
source1++;
destination++;
}
while (*source2 != '\0') {
*destination = *source2;
source2++;
destination++;
}*destination = '\0';
}int main() {
char source1[] = "BCA-II, ";
char source2[] = "SEMESTER!";
char destination[50];
stringConcatenate(source1, source2, destination);
printf("Concatenated string: %s\n", destination);
return 0;
}

