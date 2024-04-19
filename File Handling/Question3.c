#include<stdio.h>

main(){

    FILE *p;
    char data[100];

    p = fopen("demo.txt","a");

    if (p == NULL)
    {
         printf("File can't open");


    }else{


        printf("File open\n");

        fputs("new more messages\n",p);
       

    }

 
    
    
}