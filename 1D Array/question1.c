#include <stdio.h>
main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Element:");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Value is:%d\n", arr[i]);
    }
}