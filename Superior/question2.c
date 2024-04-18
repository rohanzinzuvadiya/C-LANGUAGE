// 2. Write a C program to find the largest element in an array.

#include <stdio.h>

int main() {
    int arr[100], i, n, max = arr[0];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d", max);

    return 0;
}