#include <stdio.h>

int reverseNumber(int num); // function declaration
int main() {
    int number, reversed;

    printf("Enter a number: ");
    scanf("%d", &number);

    reversed = reverseNumber(number);

    printf("Original number: %d\n", number);
    printf("Reversed number: %d\n", reversed);

    return 0;
}

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    int remainder;
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    return reversed;
}
