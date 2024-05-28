#include <stdio.h>
#include <string.h>
struct company {
char name[50];
char address[100];
char phone[20];
int noOfEmployee;
};int main() {
struct company c;
printf("Enter name of the company: ");
fgets(c.name, sizeof(c.name), stdin);
strtok(c.name, "\n");
printf("Enter address of the company: ");
fgets(c.address, sizeof(c.address), stdin);
strtok(c.address, "\n");
printf("Enter phone number of the company: ");
fgets(c.phone, sizeof(c.phone), stdin);
strtok(c.phone, "\n");
printf("Enter number of employees: ");
scanf("%d", &c.noOfEmployee);
printf("\nDetails of the company:\n");
printf("Name: %s", c.name);
printf("Address: %s", c.address);
printf("Phone number: %s", c.phone);
printf("Number of employees: %d\n", c.noOfEmployee);
return 0;}


