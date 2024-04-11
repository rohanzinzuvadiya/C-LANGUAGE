#include<stdio.h>


max(int *number1 , int *number2){

    if (*number1 > *number2)

    {
        /* code */
        printf("minimum is : %d",*number2);
    }else{
        printf("minimum is : %d",*number1);
    }
    

}

main(){
    int a,b;

    printf("Enter Frist Value : ");
    scanf("%d",&a);

    printf("Enter Second Value : ");
    scanf("%d",&b);

    max(&a , &b);
}