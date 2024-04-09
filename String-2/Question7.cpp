#include<stdio.h>
#include<string.h>
main(){

	char first_name[100];
	printf("Enter your name: ");
	gets(first_name);
	
	char last_name[100];
	printf("Enter your name: ");
	gets(last_name);
	
	int str_compare = strcmp(first_name,last_name);
	
	if(str_compare == 0){
		printf("Strings are equal. ");
	}
	else if(str_compare == 1 || str_compare == -1){
		printf("No, they are not equal.");
	}
	
	
}
