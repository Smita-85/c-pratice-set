/*sorting array using function*/
#include<stdio.h>
void sort(int[],int);
int main()
{
    int size,arr[100];
    printf("enter size of array:");
    scanf("%d",&size);
    sort(arr,size);
    return 0;
}
void sort(int arr[],int size)
{
    int i,j,temp;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
       for(j=i+1;j<size;j++) 
       {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       }
    }
    printf("sorted array:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}