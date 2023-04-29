/*total no of odd and even numbers in an array*/
#include<stdio.h>
void even_odd(int[],int);
int main()
{
    int arr[100],size;
    printf("enter size of array:");
    scanf("%d",&size);
    even_odd(arr,size);
    return 0;
}
void even_odd(int arr[],int size)
{
    int i;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d is even\n",arr[i]);
        }
        else{
            printf("%d is odd\n",arr[i]);
        }
    }
    return;
}