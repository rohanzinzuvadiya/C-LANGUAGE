#include <stdio.h>
#include<string.h>
int main() {
   
	char name[100];
	
	printf("Enter Your name : ");
	gets(name);
	char cpy_name[100];
	
	strcpy(cpy_name,name);
	puts(cpy_name);
	
}

