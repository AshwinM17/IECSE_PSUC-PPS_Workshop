#include <stdio.h>

int main() {
   int n, pos, element;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   int array[n+1]; 

   for(int i = 0; i < n; i++) {
      scanf("%d", &array[i]);
   }

   printf("Enter the position where you want to insert the element (0 to %d): ", n);
   scanf("%d", &pos);

   if(pos < 0 || pos > n) {
      printf("Invalid position!\n");
      return 1;
   }

   printf("Enter the element to insert: ");
   scanf("%d", &element);

   for(int i = n; i > pos; i--) {
      array[i] = array[i-1];
   }

   array[pos] = element;

   printf("Array after insertion:\n");
   for(int i = 0; i <= n; i++) {
      printf("%d ", array[i]);
   }
   printf("\n");

   return 0;

}

/*

for the for loop in line 28 of the code.
if n - 5 and pos = 2
Array: [1, 2, 3, 4, 5]
Index:  0  1  2  3  4

array[5] = array[4];  // [1, 2, 3, 4, 5] -> [1, 2, 3, 4, 5, 5]
array[4] = array[3];  // [1, 2, 3, 4, 5, 5] -> [1, 2, 3, 4, 4, 5]
array[3] = array[2];  // [1, 2, 3, 4, 4, 5] -> [1, 2, 3, 3, 4, 5]
                                        Index:  0  1  2  3  4  5
as position is 2 
array[pos] = element;  // array[2] = 10 -> [1, 2, 10, 3, 4, 5]

hence inserted.

*/
