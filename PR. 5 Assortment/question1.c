#include <stdio.h>
main()
{

    int max;
    printf("Enter the array's size: ");
    scanf("%d", &max);
    int arr[max];

    for (int i = 0; i < max; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nNegative elements from an Array: ");
    for (int i = 0; i < max; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d", arr[i]);
        }
    }
}







