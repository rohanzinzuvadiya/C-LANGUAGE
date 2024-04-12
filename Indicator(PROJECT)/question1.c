
// Using UDF find  cube of a number using pointer.

#include<stdio.h>
cube(int  *square){

    printf("The cube of number is :%d",*square * *square * *square);
}
main(){
    int square;
    printf("Enter any Number:");
    scanf("%d",&square);
cube(&square);
}