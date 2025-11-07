#include <stdio.h>

int main() {
    int n, i;
    float factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate factorial
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %.2f\n", n, factorial);

    return 0;
}
