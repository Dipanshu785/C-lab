#include<stdio.h>

int isArmstrong(int number);
int main() {
    int number;

    printf("The Armstrong numbers between 1-1000 are: \n");

    for(number = 1; number <= 1000; number++) {
        if(isArmstrong(number)) {
            printf("%d \n", number);
        }
    }

    return 0;
}

// Function to check if a number is Armstrong
int isArmstrong(int number) {
    int temp, sum = 0, remainder;

    temp = number;
    while(temp != 0) {
        remainder = temp % 10;
        sum = sum + (remainder * remainder * remainder);
        temp = temp / 10;
    }

    // Return 1 if Armstrong, 0 if not
    if(sum == number)
        return 1;
    else
        return 0;
}
