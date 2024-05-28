#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
   int temp;

   while (start < end) {
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
   }
}

int main() {
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/sizeof(arr[0]);

   printf("Original array: ");
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);

   reverseArray(arr, 0, n-1);

   printf("\nReversed array: ");
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);

   return 0;
}
