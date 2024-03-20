#include<stdio.h>
main(){
int i,n;
printf("Enter Starting Year :");
scanf("%d",&i);
printf("Enter Ending Year :");
scanf("%d",&n);



while (i<=n)
{
if (i% 4 == 0)
{
printf("%d\n",i);
}
i++;
}
}