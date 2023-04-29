/*insert an element ina array using function*/
#include<stdio.h>
void insert(int[],int);
int main()
{
    int arr[100],size;
    printf("enter the size of array:");
    scanf("%d",&size);
    insert(arr,size);
    return 0;
}
void insert(int arr[],int size)
{
    int i,posn,x,count;
    printf("enter array elements:");
    for(i=0;i<=size;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("enter the position where you want to insert:");
    scanf("%d",&posn);
    printf("enter the element you want to insert:");
    scanf("%d",&x);
    for(i=posn;i<=size;i++)
    {
        arr[i]=arr[i-1];
        

    }
    size++;
    
    x=arr[pos-1];
    printf("after insertion:");
    for(i=0,count=0;i<=size;i++,count++)
    {
        printf("%d\t",arr[i]);
    }
    printf("total no of elements:%d\n",count);
}