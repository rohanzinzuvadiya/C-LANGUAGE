#include<stdio.h>


addnumbers(float a,float b){

    if (b == 0 || a == 0)
    {
        printf("invalid number.");
    }else{
        printf("%f",a / b);
    }
    

}

main(){

    float a,b;

    printf("Enter First Number : ");
    scanf("%f",&a);

    printf("Enter Second Number : ");
    scanf("%f",&b);



    addnumbers(a,b);
}