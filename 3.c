 //Write a program to swap the values of two variables with and without using the third variable. 
#include <stdio.h> 
int main() { 
int a, b, temp; 
// Input values 
printf("Enter two numbers: "); 
scanf("%d %d", &a, &b); 
// Display original values 
printf("\nBefore swapping:\n"); 
printf("a = %d, b = %d\n", a, b); 
// ---------- Method 1: Using a third variable ---------- 
temp = a; 
a = b; 
b = temp; 
printf("\nAfter swapping (using third variable):\n"); 
printf("a = %d, b = %d\n", a, b); 
// ---------- Method 2: Without using a third variable ---------- 
a = a + b; // sum of both 
b = a - b; // get original a 
a = a - b; // get original b 
printf("\nAfter swapping (without using third variable):\n"); 
printf("a = %d, b = %d\n", a, b); 
return 0; 
} 
