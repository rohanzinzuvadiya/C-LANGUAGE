#include<stdio.h>

main(){

    FILE *p;
    char data[100];

    p = fopen("demo.txt","w");

    if (p == NULL)
    {
        /* code */
         printf("File can't open");


    }else{


        printf("File open\n");

        fputs("new more messages",p);
       

    }

 
    
    
}