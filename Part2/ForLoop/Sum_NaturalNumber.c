#include <stdio.h>

int main() {
   
   int n;
   int sum = 0;

   for (n = 1; n < 100; n++) {
      sum = sum + n; 
   }

   printf("%d\n", sum);

   return 0;

}
