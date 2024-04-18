// 8. Write a C program to find the intersection of two arrays.

#include <stdio.h>

#define MAX 100

void findIntersection(int arr1[MAX], int arr2[MAX], int m, int n) {
    int i = 0, j = 0;
    printf("Intersection of two arrays: ");
    while (i < m && j < n) {
        if (arr1[i] == arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
}

int main() {
    int arr1[MAX], arr2[MAX], m, n;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    findIntersection(arr1, arr2, m, n);

    return 0;
}