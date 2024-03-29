#include <stdio.h>
main()
{
    int arr[5], product = 1;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Element:");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            product *= arr[i];
        }
    }
    printf("Product is :%d\n", product);
}