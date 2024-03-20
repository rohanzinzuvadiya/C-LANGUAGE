#include<stdio.h>
main(){

int age ;
printf("Enter your age :");
scanf("%d",&age);
 if (age>18)
 {
    printf("You can Vote");
 }
 else if(age==18){
    printf("You can also Vote");
 }
 else{
printf("You can't Vote");
 }
}