
// Using UDF swap between 3 numbers using pointer.

#include <stdio.h>

void swap(int *a, int *b, int *c) {
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    printf("Before swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    swap(&num1, &num2, &num3);

    printf("After swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    return 0;
}