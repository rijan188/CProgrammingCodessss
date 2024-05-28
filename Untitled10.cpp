#include <stdio.h>
#include <ctype.h>

void determine_char_type(char input) {
    if(isalpha(input)) {
        if(islower(input)) {
            printf("The input character is a small letter.\n");
        } else {
            printf("The input character is a capital letter.\n");
        }
    } else if(isdigit(input)) {
        printf("The input character is a digit.\n");
    } else {
        printf("The input character is a special symbol.\n");
    }
}

int main() {
    char input;

    printf("Enter a character: ");
    scanf(" %c", &input);

    determine_char_type(input);

    return 0;
}
