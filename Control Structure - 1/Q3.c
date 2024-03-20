#include<stdio.h>
main(){

int num ;
printf("Enter Number :");
scanf("%d",&num);
 if (num<0)
 {
    printf("This  Number is Negative");
 }
 else if (num==0)
 {
    printf("This Number is Neutral");
 }
 else{
    printf("This Number is Positive");
 }
}