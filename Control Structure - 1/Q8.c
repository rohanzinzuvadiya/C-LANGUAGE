#include<stdio.h>
main(){

int marks ;
printf("Enter your marks :");
scanf("%d",&marks);
 if (marks>=90 && marks<=100)
 {
    printf("Your Marks are %d \n",marks);
    printf("Your grade is A ");
 }
 else if(marks>=80 && marks<=89){
    printf("Your Marks are %d \n",marks);
    printf("Your grade is B ");
}
 else if(marks>=70 && marks<=79){
    printf("Your Marks are %d \n",marks);
    printf("Your grade is C ");
}
 else if(marks>=60 && marks<=69){
    printf("Your Marks are %d \n",marks);
    printf("Your grade is D ");
}
 else{
    printf("Your Marks are %d \n",marks);
    printf("You are Fail ");
}
}