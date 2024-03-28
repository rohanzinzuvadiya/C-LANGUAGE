#include<stdio.h>
main(){
    for (int i = 5; i >=1; i--)
    {
        for (int s=4;s>=i;s--)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
}

}