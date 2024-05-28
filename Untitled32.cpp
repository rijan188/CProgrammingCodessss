#include <stdio.h>
int main() {
int arr[] = {1, 2, 3, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]); // Get array size
int sum = 0;
int* ptr = arr;
// Initialize pointer to point to the first element
// Loop through the array using the pointer
for (int i = 0; i < size; i++) {
sum += *ptr; // Add the value pointed by the pointer to the sum
ptr++; // Increment the pointer to move to the next element
}printf("The sum of all elements is: %d\n", sum);
return 0;
}

