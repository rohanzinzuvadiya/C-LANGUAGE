#include<stdio.h>
main(){
int i =1,n;
printf("Enter Number :");
scanf("%d",&n);



while (n>=1)
{
if (n % 2 !=0)
{
printf("%d\n",n);
}
n--;
}
}