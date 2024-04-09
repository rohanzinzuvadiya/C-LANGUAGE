#include <stdio.h>
#include <string.h>
void strlength(char some[]){
    int len = strlen(some);
    printf("%d",len);
}
void main()
{
    char some[100];
    printf("Enter something: ");
    gets(some);

     strlength(some);
}