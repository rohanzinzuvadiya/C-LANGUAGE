#include <stdio.h>
main()
{
    int a, b, c;
    a = 80,
    b = 30;
    c = 12;
    (a < b)   ? (a < c) ? printf("A is minimum") : printf("C is minimum")
      : (b < c) ? printf("B is minimum")
              : printf("C is minimum");
}