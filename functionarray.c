/*largest element in an array*/
#include<stdio.h>
void max(int [],int);
int main()
{
    int size,arr[10];
    printf("enter size of array:");
    scanf("%d",&size);
    max(arr,size);
    return 0;
}
void max(int arr[],int size)
{
    int i,max=arr[0];
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("largest one is:%d",max);
    return;
}
to be compiled