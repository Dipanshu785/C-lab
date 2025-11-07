#include <stdio.h>

void inputArray(int arr[], int n);
int arraySum(int arr[], int n);

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    inputArray(arr, n);

    int sum = arraySum(arr, n);
    printf("Sum = %d\n", sum);
    return 0;
}

void inputArray(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int arraySum(int arr[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}
