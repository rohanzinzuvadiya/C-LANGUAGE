#include <stdio.h>
main()
{
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Element:");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("the sum of all elements is:%d\n", sum);
}