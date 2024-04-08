#include<stdio.h>


addnumbers(int a){

    printf("%d",a * a * a);

}

main(){

    int a;

    printf("Enter First Number : ");
    scanf("%d",&a);


    addnumbers(a);
}