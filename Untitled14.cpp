#include <stdio.h>

int calculateSum(int arr[], int n) {
   int sum = 0;
   for (int i = 0; i < n; i++)
      sum += arr[i];
   return sum;
}

int main() {
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/sizeof(arr[0]);
   int sum = calculateSum(arr, n);
   printf("Sum of all elements in the array is %d", sum);
   return 0;
}
