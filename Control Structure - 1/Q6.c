#include<stdio.h>
main(){
    int a;
    printf("Enter Year: ");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("%d  is  leap year ",a);
    }else{
        printf("%d is not leap year ",a);
    }
    
}