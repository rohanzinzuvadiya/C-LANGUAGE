#include<stdio.h>

main(){
    
    int f= 0,s=1,n,a;

    printf("Enter Value : ");
    scanf("%d",&a);


    for (int i = 1; i <=a; i++)
    {
        printf("%d ",f);
        n = s + f;
        f = s;
        s = n;
    }

    
      
}