#include<stdio.h>
main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d Number is even",a);
    }else{
        printf("%d Number is odd ",a);
    }
    
}