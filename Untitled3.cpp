#include <stdio.h>

void computeGrade(int marks) {
    if (marks < 50) {
        printf("Grade: F\n");
    } else if (marks < 60) {
        printf("Grade: C\n");
    } else if (marks < 70) {
        printf("Grade: B\n");
    } else if (marks < 80) {
        printf("Grade: B+\n");
    } else if (marks < 90) {
        printf("Grade: A\n");
    } else {
        printf("Grade: A+\n");
    }
}

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    computeGrade(marks);

    return 0;
}
