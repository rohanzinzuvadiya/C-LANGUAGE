#include <stdio.h>

int main() {

    int maxRow, maxCol;

    printf("Enter the array's row size: ");
    scanf("%d", &maxRow);
    
    printf("Enter the array's column size: ");
    scanf("%d", &maxCol);

    int arr[maxRow][maxCol];
    int max = arr[0][0];

    for (int i = 0; i < maxRow; i++) {
        for (int j = 0; j < maxCol; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
}