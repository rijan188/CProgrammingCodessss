#include <stdio.h>
#include <string.h>

struct student {
    int RollNo;
    char Name[50];
    char Address[100];
    int Age;
    float average_marks;
};

void read_details(struct student[], int);
void display_details(struct student[], int);

int main() {
    struct student BCA[12];
    read_details(BCA, 12);
    display_details(BCA, 12);
    return 0;
}

void read_details(struct student BCA[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d\n", i+1);
        printf("RollNo: ");
        scanf("%d", &BCA[i].RollNo);
        printf("Name: ");
        scanf("%s", BCA[i].Name);
        printf("Address: ");
        scanf("%s", BCA[i].Address);
        printf("Age: ");
        scanf("%d", &BCA[i].Age);
        printf("Average Marks: ");
        scanf("%f", &BCA[i].average_marks);
    }
}

void display_details(struct student BCA[], int n) {
    printf("\nStudent Details\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);
        printf("RollNo: %d\n", BCA[i].RollNo);
        printf("Name: %s\n", BCA[i].Name);
        printf("Address: %s\n", BCA[i].Address);
        printf("Age: %d\n", BCA[i].Age);
        printf("Average Marks: %.2f\n", BCA[i].average_marks);
    }
}
