#include<stdio.h>
main(){
    int n;
    printf("Size of Array:");
    scanf("%d",&n);
    int arr[n];
    int *p[n];
    for (int i = 0; i < n; i++)
    {
        printf("Elements :");
        scanf("%d",&arr[i]);
    }
    printf("Original value  of array is :\n");
    for (int i = 0; i<n;  i++)
    {
        p[i]=&arr[i];
        printf(" %d", arr[i]);
    }
    printf("\nReverse value  of array is :\n");
    for (int i = n-1; i>=0;  i--)
    {
        p[i]=&arr[i];
        printf("%d", arr[i]);
    }
}