#include<stdio.h>

main(){

    FILE *p;
    char data[100];

   

    p = fopen("demo.txt","r");

    if (p == NULL)
    {
        /* code */
         printf("File can't open");


    }else{


        printf("File open\n");

    while (fgets(data,50,p) != NULL){
      
        printf("%s",data);
    }
       

    }

 
    
    
}