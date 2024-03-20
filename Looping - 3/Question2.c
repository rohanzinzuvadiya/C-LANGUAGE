#include<stdio.h>

main(){

    int fact = 1,num;

    printf("Enter any Number : ");
    scanf("%d",&num);

    for (int i = 1; i <=num; i++)
    {
        fact *= i;
    }
        printf("%d\n",fact);
    

}