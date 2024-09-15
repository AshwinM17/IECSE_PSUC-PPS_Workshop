#include <stdio.h>

int main() {

   int N, i, fact = 1;

   printf("Enter the number: ");
   scanf("%d", &N);

   for (i = 1; i <= N; i++) {
      fact = fact * i;
   } 
  
   printf("The factorial is %d\n", fact);

   return 0; 
   
}
