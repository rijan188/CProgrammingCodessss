#include <stdio.h>

// Define a structure named Employee to store details
typedef struct Employee {
  char name[50];  // Employee's full name (maximum 50 characters)
  int age;         // Employee's age
  char department[30]; // Employee's department (maximum 30 characters)
  float salary;     // Employee's salary
} Employee;

int main() {
  // Declare a variable of type Employee named emp
  Employee emp;

  // Read employee details
  printf("Enter employee name: ");
  scanf("%s", emp.name);

  printf("Enter employee age: ");
  scanf("%d", &emp.age);

  printf("Enter employee department: ");
  scanf("%s", emp.department);

  printf("Enter employee salary: ");
  scanf("%f", &emp.salary);

  // Print employee details
  printf("\nEmployee Details:\n");
  printf("Name: %s\n", emp.name);
  printf("Age: %d\n", emp.age);
  printf("Department: %s\n", emp.department);
  printf("Salary: %.2f\n", emp.salary);

  return 0;
}
