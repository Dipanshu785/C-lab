//Write a C program to find the sum and average of three numbers. 
#include <stdio.h> 
int main() { 
int num1, num2, num3; 
float sum, average; 
// Input three numbers 
printf("Enter three numbers: "); 
scanf("%d %d %d", &num1, &num2, &num3); 
// Calculate sum and average 
sum = num1 + num2 + num3; 
average = sum / 3; 
// Display results 
printf("Sum = %.2f\n", sum); 
printf("Average = %.2f\n", average); 
return 0; 
}
