#include<stdio.h>
main(){
   int arr[5],square;
for (int i = 0; i<5; i++)
{
    printf("Enter Element:");
    scanf("%d",&arr[i]);
}
for (int i =0; i <5; i++)
{     
    square=arr[i]*arr[i];  
printf("The Square is:%d\n",square);
}
}