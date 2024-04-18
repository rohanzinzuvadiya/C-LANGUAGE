// 7. Write a C program to find the second largest element in an array.

#include <stdio.h>

int main() {
    int n, i, largest1, largest2;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    largest1 = array[0];
    largest2 = array[1];

    if(largest1 < largest2) {
        int temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }

    for(i = 2; i < n; i++) {
        if(array[i] > largest1) {
            largest2 = largest1;
            largest1 = array[i];
        } else if(array[i] > largest2 && array[i] != largest1) {
            largest2 = array[i];
        }
    }

    printf("The second largest element is: %d\n", largest2);

    return 0;
}