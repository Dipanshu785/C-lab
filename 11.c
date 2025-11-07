#include <stdio.h>

// A simple program to add two numbers.

int main() {
    int num1, num2, sum;

    // Ask the user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
