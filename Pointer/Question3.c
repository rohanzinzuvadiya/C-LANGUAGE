#include<stdio.h>


max(int *number1 , int *number2){

    int *t;

    t = number1;
    number1 = number2;
    number2 = t;

    printf("After Swaping both value\n");

    printf("A is : %d\n",*number1);
    printf("B is : %d",*number2);
    

}

main(){
    int a,b;

    printf("Enter Value of A: ");
    scanf("%d",&a);

    printf("Enter Value of B : ");
    scanf("%d",&b);

    max(&a , &b);
}