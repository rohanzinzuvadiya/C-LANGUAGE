// 4. Write a C program to count the number of even and odd elements in an array.

#include <stdio.h>

int main() {
    int arr[100], i, n, even = 0, odd = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("The number of even elements in the array is: %d\n", even);
    printf("The number of odd elements in the array is: %d", odd);

    return 0;
}