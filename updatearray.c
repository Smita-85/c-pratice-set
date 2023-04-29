/*update an element in a array using function*/
#include<stdio.h>
void update(int[],int);
int main()
{
    int arr[100],size;
    printf("enter size of array:");
    scanf("%d",&size);
    update(arr,size);
    return 0;
}
void update(int arr[],int size)
{
    int x,posn,i;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position for updation:");
    scanf("%d",&posn);
    printf("element in that position:%d",arr[posn-1]);
    printf("\n");
    printf("updated value:");
    scanf("%d",&x);
    x=arr[posn-1];
    printf("after updation array elements are:");
    for(i=posn-1;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}