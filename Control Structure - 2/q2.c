#include<stdio.h>

 main()

{
    int a=10,b=100,c=119,d=111;

    if(a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("A is big");
            }
            else {
                printf("D is big");
            }
            
        }
        else {
            printf("C is big ");
        }
    }
    else {
    if (b>c)
    {
        if (b>d)
        {
          printf("b is big");
        }
        else{
            printf("d is big");
        }
    }
    
    else{
        printf(" C is big");
    }
	}

}