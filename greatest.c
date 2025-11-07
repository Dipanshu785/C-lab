//Write a program to find the greatest of three numbers using nested if else?
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("You entered: %d, %d, %d\n", a, b, c);
    printf("The greatest number is: ");
    if (a > b) {
        if (a > c) {
            printf(" A is gratest %d\n", a);
        } else {
            printf(" C is gratest %d\n", c);
        }
    } else {
        if (b > c) {
            printf(" B is gratest %d\n", b);
        } else {
            printf(" C is gratest %d\n", c);
        }
    }
    return 0;
}
