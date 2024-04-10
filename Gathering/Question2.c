#include <stdio.h>
calculateArea(int l, int w)
{
    int a = l * w;
    return a;
}

main()
{
    int l, w;
    printf("enter length:");
    scanf("%d", &l);
    printf("enter width:");
    scanf("%d", &w);

    printf("the sqare of the  rectangle is:%d", calculateArea(l, w));
}