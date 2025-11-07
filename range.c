 //Write a Program to print different data types in ‘C’ and their ranges
#include <stdio.h> 
#include <limits.h> 
#include <float.h> 
int main() { 
printf("----------- Integer Data Types------------ \n"); 
printf("char: %zu bytes | Range: %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX); 
printf("unsigned char: %zu bytes | Range: 0 to %u\n", sizeof(unsigned char), UCHAR_MAX); 
printf("short: %zu bytes | Range: %d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX); 
printf("unsigned short: %zu bytes | Range: 0 to %u\n", sizeof(unsigned short), USHRT_MAX); 
printf("int: %zu bytes | Range: %d to %d\n", sizeof(int), INT_MIN, INT_MAX); 
printf("unsigned int: %zu bytes | Range: 0 to %u\n", sizeof(unsigned int), UINT_MAX); 
printf("long: %zu bytes | Range: %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX); 
printf("unsigned long: %zu bytes | Range: 0 to %lu\n", sizeof(unsigned long), ULONG_MAX); 
printf("long long: %zu bytes | Range: %lld to %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX); 
printf("unsigned long long: %zu bytes | Range: 0 to %llu\n", sizeof(unsigned long long), 
ULLONG_MAX); 
printf("\n----------- Floating-Point Data Types ----------- \n"); 
printf("float: %zu bytes | Range: %e to %e\n", sizeof(float), FLT_MIN, FLT_MAX); 
printf("double: %zu bytes | Range: %e to %e\n", sizeof(double), DBL_MIN, DBL_MAX); 
printf("long double: %zu bytes | Range: %Le to %Le\n", sizeof(long double), LDBL_MIN, 
LDBL_MAX); 
return 0; 
} 