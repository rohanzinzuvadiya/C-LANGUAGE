#include <stdio.h>
void main()
{
    char val[100];
    printf("enter any string:");
    scanf("%s", val);

    for (int i = 0; val[i] != NULL; i++)
    {
        if (val[i] >= 'A' && val[i] <= 'Z')
        {
            val[i] += 32;
        }
        printf("%c", val[i]);
    }
}