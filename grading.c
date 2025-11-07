//C code for the grading program:
#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total;
    float percentage;

    // Get input for five subjects
    printf("Enter marks for subject 1 (out of 100): ");
    scanf("%f", &sub1);

    printf("Enter marks for subject 2 (out of 100): ");
    scanf("%f", &sub2);

    printf("Enter marks for subject 3 (out of 100): ");
    scanf("%f", &sub3);

    printf("Enter marks for subject 4 (out of 100): ");
    scanf("%f", &sub4);

    printf("Enter marks for subject 5 (out of 100): ");
    scanf("%f", &sub5);

    // Calculate total and percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;

    // Print the percentage
    printf("\nYour total percentage is: %.2f%%\n", percentage);

    // Determine and print the grade
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}
