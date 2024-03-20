#include <stdio.h>
main()
{
    float radious, Circumference;
    printf("value of radious :");
    scanf("%f", &radious);
    Circumference = 2 * 3.14159 * radious;
    printf("the Circumference of circle is : %0.2f", Circumference);
}