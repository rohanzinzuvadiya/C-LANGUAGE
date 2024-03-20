#include<stdio.h>

 main()

{
    int a=10,b=100,c=119;

    if(a<b)
    {
        if (a<c)
        {
           printf("A is Smallest");

        }
        else {
            printf("C is Smallest ");
        }
    }
    else {
    if (b<c)
    {
       printf("B is Smallest");
    }
    
    else{
        printf(" C is Smallest");
    }
	}

}