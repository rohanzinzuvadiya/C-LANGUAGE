#include<stdio.h>
main(){
   int arr[5],max=arr[0];

for (int i = 0; i<5; i++)
{
    printf("Enter Element:");
    scanf("%d",&arr[i]);
}
for (int i =4; i >=0; i--)
{       
    printf("%d\n",arr[i]);
}

}