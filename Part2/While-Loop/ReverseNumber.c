#include <stdio.h>

int main() {

   int n, rev = 0, rd; 

   printf("Enter your number:\n");
   scanf("%d", &n);

   while (n != 0) {
      rd = n % 10;  
      rev = rev * 10 + rd; 
      n = n / 10; 
   }
   
   printf("The reversed number is %d\n", rev);

   return 0;

}
