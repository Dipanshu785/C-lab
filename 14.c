#include <stdio.h>

int main() {
    int n, i;
    int even_sum = 0, odd_sum = 0;

    printf("Enter a number N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            even_sum += i; // Add to even sum
        } else {
            odd_sum += i; // Add to odd sum
        }
    }

    printf("Sum of even numbers from 1 to %d: %d\n", n, even_sum);
    printf("Sum of odd numbers from 1 to %d: %d\n", n, odd_sum);
    return 0;
}
