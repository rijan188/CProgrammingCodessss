#include <stdio.h>

void findLargestSmallest(int arr[], int n, int *largest, int *smallest) {
   *largest = arr[0];
   *smallest = arr[0];

   for (int i = 1; i < n; i++) {
      if (arr[i] > *largest)
         *largest = arr[i];
      if (arr[i] < *smallest)
         *smallest = arr[i];
   }
}

int main() {
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/sizeof(arr[0]);
   int largest, smallest;

   findLargestSmallest(arr, n, &largest, &smallest);

   printf("Largest element in the array is %d", largest);
   printf("\nSmallest element in the array is %d", smallest);

   return 0;
}
