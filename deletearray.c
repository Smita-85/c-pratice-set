/*delete an element from array using function*/
#include<stdio.h>
void delete(int[],int);
int main()
{
    int size,arr[100];
    printf("enter size of array:");
    scanf("%d",&size);
    delete(arr,size);
    return 0;
}
void delete(int arr[],int size)
{
    int posn,i,count;
    printf("enter array elements:");
    for(i=0;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the posn where u want to delete:");
    scanf("%d",&posn);
    for(i=posn;i<=size;i++)
    {
        arr[i-1]=arr[i];
    }
    size--;
    printf("after deletion array elements are:");
    for(i=0,count=0;i<=size;i++,count++)
    {
        printf("%d\t",arr[i]);
    }
    printf("array elements after deletion are:%d",count);

}