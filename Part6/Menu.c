#include <stdio.h>

int main() {
  int choice, number, reversed, digit, sum;

  while (1) {  
    printf("\nMenu:\n");
    printf("1. Reverse of a given number\n");
    printf("2. Sum of digits of a number\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:

        printf("Enter a number to reverse: ");
        scanf("%d", &number);
        reversed = 0;
        while (number != 0) {
          digit = number % 10;       
          reversed = reversed * 10 + digit;
          number /= 10;            
        }
        printf("Reversed number is: %d\n", reversed);
        break;

      case 2:
        printf("Enter a number to find sum of digits: ");
        scanf("%d", &number);
        sum = 0;
        while (number != 0) {
          digit = number % 10;    
          sum += digit;       
          number /= 10;           
        }
        printf("Sum of digits is: %d\n", sum);
        break;

      case 3:
        printf("Exiting the program.\n");
        return 0;

      default:
        printf("Invalid choice! Please choose a valid option.\n");
    }
  }

  return 0;
}
