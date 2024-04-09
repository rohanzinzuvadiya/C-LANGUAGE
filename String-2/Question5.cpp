#include<stdio.h>
#include<string.h>
main(){
	char first_name[100];
	printf("Enter your name: ");
	
	gets(first_name);
	char last_name[100];
	printf("Enter your name: ");
	gets(last_name);
	
	char full_name[100];
	
	strcpy(full_name,strcat(first_name,last_name));
	printf(" ");
	printf("Full name is :");
	
	puts(full_name);
}
