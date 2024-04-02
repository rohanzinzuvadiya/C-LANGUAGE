#include<stdio.h>

main(){

    int row,col;

    printf("Enter size of row :");
    scanf("%d",&row);

    printf("Enter size of Column :");
    scanf("%d",&col);

    int arr[row][col];

    for (int i = 0; i <row; i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("Enter the size of array:");
            scanf("%d",&arr[i][j]);
        }    
    }
    
        for (int i = 0; i <row; i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("The transpose matrix of an array:%d\n",arr[j][i]);
        }            
    }
}