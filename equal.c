// Write a program that checks whether the two numbers entered by the user are equal or not
#include <stdio.h>

int main() {
    int num1, num2;
    // Read two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Check if the numbers are equal
    if (num1 == num2) {
        printf("The numbers %d and %d are EQUAL\n", num1, num2);
    } else {
        printf("The numbers %d and %d are NOT EQUAL\n", num1, num2);
    }
    return 0;
}
