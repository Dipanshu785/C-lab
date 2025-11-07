#include <stdio.h>

int main() {
    int n, i;
    int sum = 0; // Initialize sum to 0

    // Get the upper limit from the user
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // Use a loop to iterate from 1 up to n
    for (i = 1; i <= n; i++) {
        // Add each number to the sum
        sum += i; // This is the same as sum = sum + i
    }

    // Print the final sum
    printf("The sum of all numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
