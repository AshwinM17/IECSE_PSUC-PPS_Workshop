#include <stdio.h>

int main() {
  int n;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    int num = arr[i];
    int prime = 1;  

    if (num <= 1) {
      prime = 0;  
    } else {
      for (int j = 2; j <= num / 2; j++) {
        if (num % j == 0) {
          prime = 0;
          break;
        }
      }
    }

    if (prime == 1) {
      for (int k = i; k < n - 1; k++) {
        arr[k] = arr[k + 1];  
      }
      n--;  
      i--;
    }
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
      }
    }
  }

  printf("Modified array (non-prime elements in ascending order):\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
