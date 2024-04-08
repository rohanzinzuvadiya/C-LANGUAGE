#include<stdio.h>


addnumbers(int a,int b){

    printf("%d",a * b);

}

main(){

    int a,b;

    printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter Second Number : ");
    scanf("%d",&b);



    addnumbers(a,b);
}