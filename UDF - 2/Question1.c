#include<stdio.h>
int sum(int size, int arr[]){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        sum += arr[i];
    }
        printf("%d \n",sum);
    
}
main(){

    int size;


    printf("Enter rows: ");
    scanf("%d",&size);


    int arr[size];



    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    

    sum(size,arr);
}