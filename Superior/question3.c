// 3. Write a C program to find the smallest element in an array.

#include <stdio.h>

int main() {
    int arr[100], i, n, min = arr[0];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest element in the array is: %d", min);

    return 0;
}