#include <stdio.h>

int main() {

   int number;
   int sum = 0; 
 
   do {

      printf("Enter a number (enter zero to exit and display sum):\n");

      scanf("%d", &number);

      sum += number;
      
   } while (number != 0); 

   printf("The sum is %d\n", sum);

   return 0;

}
