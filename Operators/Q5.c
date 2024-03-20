#include<stdio.h>
main(){
    int p,r,n,i;
    printf("Value of Principal is:");
    scanf("%d",&p);
    printf("Value of Rate is:");
    scanf("%d",&r);
    printf("Value of No of Month is:");
    scanf("%d",&n);
    i=p*r*n;
    printf("Interest of amount is:%d",i/100);
}