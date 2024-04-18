// 1. Write a C program to find the sum of elements in an array.

#include <stdio.h>

int main() {
    int arr[100], i, n, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the elements in the array is: %d", sum);

    return 0;
}