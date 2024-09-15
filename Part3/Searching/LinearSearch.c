#include <stdio.h>

int main() {

   int found, i, n, key, pos;
   found = 0; 
    
   printf("Enter number of elements: ");
   scanf("%d", &n);
   int arr[n];
    
   printf("Enter the numbers:\n");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   
   printf("Enter the element to search: ");
   scanf("%d", &key);
    
   for (i = 0; i < n; i++) {
      if (arr[i] == key) { 
         found = 1;
         pos = i + 1;
         break;
      }
   }

   if (found == 1)
      printf("Element found at position %d.\n", pos);
   else
      printf("Searched element not found.\n");
    
   return 0;

}
