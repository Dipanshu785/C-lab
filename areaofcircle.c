//Write a Program to read radius value from the keyboard and calculate the area of circle and print the result in both floating and exponential notation
#include <stdio.h>

int main() {
    float PI = 3.141592; // pi value upto 6th decimal
    double radius, area;

    // Read radius from keyboard
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area of circle
    area = PI * radius * radius;

    // Print results
    printf("\nArea of the circle:\n");
    printf("Floating-point notation: %.6f\n", area);
    printf("Exponential notation: %.6e\n", area);
    return 0;
}
/*
%.6f displays floating-point notation with 6 decimal places
%.6e displays exponential notation with 6 decimal places
*/
