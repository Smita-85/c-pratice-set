/*displaying array elements using function*/
#include<stdio.h>
void display(int[],int);
int main()
{
    int size,arr[100];
    printf("enter size of array:\n");
    scanf("%d",&size);
    display(arr,size);
    return 0;
}
void display(int arr[],int size)
{
    int i;
    printf("enter array elements:\n");
    for(i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("entred elements are:\n");
    for(i=1;i<=size;i++)
    {
        printf("%d",arr[i]);
    }
}
