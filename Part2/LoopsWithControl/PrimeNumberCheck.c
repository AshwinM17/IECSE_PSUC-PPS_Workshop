#include <stdio.h>

int main() {
   int N, j, prime = 1;


   printf("Enter a number: ");
   scanf("%d", &N);

   if (N <= 1) {
      prime = 0;
   }
   else {
      for (j = 2; j < N; j++) {
         if ((N % j) == 0) {
            prime = 0;
            break;
         }
      }
   }

   if (prime == 1) {
      printf("%d is a prime number\n", N);
   }

   else {
      printf("%d is not a prime number\n", N);
   }

   return 0;

}
