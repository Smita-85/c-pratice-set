/*REVERSE AN ARRAY WITHOUT USING THIRD ARRAY*/
#include<stdio.h>
void reverse(int [],int);
int main()
{
    int arr[100],size;
    printf("enter size of array:");
    scanf("%d",&size);
    reverse(arr,size);
    return 0;
}
void reverse(int arr[],int size)
{
    int i,temp;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        temp=arr[i];
        
    }
}