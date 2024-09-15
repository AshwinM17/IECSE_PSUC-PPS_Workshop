#include <stdio.h>

int main() {

   int n, i;
   printf("Enter Number of digits in the Array You want to Sort: ");
   scanf("%d", &n);
   int arr[n];

   printf("Enter %d elements:\n", n);
   for(i = 0; i < n ; i++){
      scanf("%d", &arr[i]);
   }

   for (int i = 0; i < n - 1; i++) {
      int min_idx = i;  
      for (int j = i + 1; j < n; j++) {
         if (arr[j] < arr[min_idx]) {
            min_idx = j;
         }
      }
      int temp = arr[min_idx];
      arr[min_idx] = arr[i];
      arr[i] = temp;
   }

   printf("Sorted array in ascending order: \n");
   for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");

   for (int i = 0; i < n - 1; i++) {
      int max_idx = i;
      for (int j = i + 1; j < n; j++) {
         if (arr[j] > arr[max_idx]) {
            max_idx = j;
         }
      }
      int temp = arr[max_idx];
      arr[max_idx] = arr[i];
      arr[i] = temp;
   }

   printf("Sorted array in descending order: \n");
   for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");

   return 0;

}


