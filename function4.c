/*find the second largest no in an array*/
#include<stdio.h>
void secondmax(int[],int);
int main()
{
    int arr[100],size;
    printf("enter size of array:");
    scanf("%d",&size);
    secondmax(arr,size);
    return 0;
}
void secondmax(int arr[],int size)
{
    int i,max1=arr[0],max2=arr[1];
    printf("enter array elements:");
    for(i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=2;i<=size;i++)
    {
        if(max1>arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
        else if(max2>arr[i] )
        {
            max2=arr[i];
        }

    }
    printf("second largest:%d",max2);
    return;
    
    
}
