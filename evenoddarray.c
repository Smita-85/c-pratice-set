/*searching even and odd numbers in an array*/
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
    int even_sum=0,odd_sum=0;
    printf("enter array elements:");
    for(i=0;i<=size;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<=size;i++)
    {
        if(arr[i]%2==0)
        {
            even_sum=even_sum+arr[i];
        }
        else{
            odd_sum=odd_sum+arr[i];
        }
    }
    printf("even sum=%d",even_sum);
    printf("odd sum =%d",odd_sum);
}