#include <stdio.h>
int compareStringRecursive(char* s1, char* s2) {
// Base case: Both null terminators reached
if (*s1 == '\0' && *s2 == '\0') {
return 0;
} else if (*s1 == '\0' || *s2 == '\0') {
return *s1 - *s2; // Different lengths
}
// Compare characters and recurse if equal
if (*s1 == *s2) {
return compareStringRecursive(s1 + 1, s2 + 1);
} else {
return *s1 - *s2; // Characters differ
}
}int main() {
char str1[] = "Apple";
char str2[] = "Apricot";
int result = compareStringRecursive(str1, str2);
if (result == 0) {
printf("Strings are equal\n");
} else if (result < 0) {
printf("%s comes before %s\n", str1, str2);
} else {
printf("%s comes after %s\n", str1, str2);
}return 0;
}

