#include <stdio.h>

int main() {

   int n; 
    
   printf("Enter value of n: "); 
   scanf("%d", &n); 
   int arr[n]; 
    
   printf("Enter %d elements:\n", n);
   for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]); 
   }
    
   printf("You entered:\n");
   for(int j = 0; j < n; j++) {
      printf("%d\t", arr[j]);
   }
    
   return 0;

}
