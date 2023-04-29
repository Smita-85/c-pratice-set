/*largest no in a array using function*/
#include<stdio.h>
int largest(int[]);
int main()
{
    int n,arr[100],i,max;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("element-%d",i);
    }
    max=largest(arr);
    printf("largest no in the array is:%d",max);
    return 0;


}
int largest(int arr[])
{
    int i,max=0,n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    return max;
}