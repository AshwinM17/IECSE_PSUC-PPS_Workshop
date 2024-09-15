#include <stdio.h>

int main() {

   int i, j, m, n;
   int a[100][100]; 


   printf("Enter dimensions for the matrix (rows and columns): ");
   scanf("%d %d", &m, &n);


   printf("\nEnter elements:\n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         printf("Element [%d][%d]: ", i, j);
         scanf("%d", &a[i][j]);
      }
   }

   printf("\nThe matrix is:\n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         printf("%d\t", a[i][j]);
      }
      printf("\n");
   }

   return 0;

}

/*
If a Matrix is declared with m = 3 and n = 2
with 3 rows and 2 columns.
Matrix A=
           a[0][0]  a[0][1]
           a[1][0]  a[1][1]
           a[2][0]  a[2][1]
*/