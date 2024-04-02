#include <stdio.h>

 main() {
    int rowSize, colSize;

    printf("Enter the array's row size: ");
    scanf("%d", &rowSize);

    printf("Enter the array's column size: ");
    scanf("%d", &colSize);

    int array[rowSize][colSize];

    printf("\nEnter array's elements:\n");
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int row, col;

    printf("\nEnter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);
    for(int j = 0; j < colSize; j++) {
        printf("%d", array[row][j]);
        if(j != colSize - 1)
            printf(", ");
    }

    int rowSum = 0;
    for(int j = 0; j < colSize; j++) {
        rowSum += array[row][j];
    }
    printf("\nThe sum of row %d: %d\n", row, rowSum);

    printf("\nEnter column number: ");
    scanf("%d", &col);

    printf("Elements of column %d: ", col);
    for(int i = 0; i < rowSize; i++) {
        printf("%d", array[i][col]);
        if(i != rowSize - 1)
            printf(", ");
    }

    int colSum = 0;
    for(int i = 0; i < rowSize; i++) {
        colSum += array[i][col];
    }
    printf("\nThe sum of column %d: %d\n", col, colSum);

}