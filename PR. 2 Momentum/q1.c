#include<stdio.h>

 main()
{
	int a;
	printf("Enter any number: ");
	scanf("%d", &a);
	(a % 2 == 0) ? printf("This number %d is Even.\n",a) : printf("This number %dis Odd.\n",a);
}

