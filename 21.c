#include <stdio.h>

void inputArray(int arr[], int size, char arrayName);
void sumArrays(int arr1[], int arr2[], int sum[], int size);
void displayArray(int arr[], int size, char arrayName);

int main() {
    int size;

    printf("Enter the size of arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], result[size];

    // Input both arrays
    inputArray(arr1, size, 'A');
    inputArray(arr2, size, 'B');

    // Calculate sum
    sumArrays(arr1, arr2, result, size);

    // Display all arrays
    printf("\n");
    displayArray(arr1, size, 'A');
    displayArray(arr2, size, 'B');
    displayArray(result, size, 'C');

    return 0;
}
