#include<stdio.h>

main(){

    for (int i=5; i>=1 ; i--)
    {
        for (int s=5 ; s >= 5-i ; s--)
        {
            printf(" ");
        }

        for(int j=i ; j <=5 ; j++)
        {
                printf("%d",j);    
        }

        printf("\n");
        
    }
    
}
