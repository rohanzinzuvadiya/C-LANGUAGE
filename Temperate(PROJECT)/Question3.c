#include<stdio.h>

main(){
   
  int first,last,number;

  printf("Enter Value : ");
  scanf("%d",&number);

  last = number % 10;


    while (number > 10)
    {
        number = number / 10;
      
    }
    
    first = number;


    printf("%d",last + first);



}