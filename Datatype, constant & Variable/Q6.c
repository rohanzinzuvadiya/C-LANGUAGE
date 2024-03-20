#include<stdio.h>
main(){
int a,b,c;
printf("value of a :");
scanf("%d",&a);
printf("value of b :");
scanf("%d",&b);
c = a ;
a = b ;
b = c ;
printf("after swaping:\n");
printf("value of a :%d\n",a);
printf("value of b :%d",b);

}
