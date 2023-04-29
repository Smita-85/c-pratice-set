/*sum of two array using  function*/
#include<stdio.h>
void sum(int[],int[],int[],int,int);
int main()
{
    int arr1[100],arr2[100],arr3[100],size1,size2;
    printf("enter size of first array:");
    scanf("%d",&size1);
    printf("enter size of second array:");
    scanf("%d",&size2);
    sum(arr1,arr2,arr3,size1,size2);
    return 0;
}
void sum(int arr1[],int arr2[],int arr3[],int size1,int size2)
{
    int i;
    printf("enter elements of first array:");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter second array elements:");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<size1,i<size2;i++)
    {
         arr3[i]=arr1[i]+arr2[i];
    }
    for(i=0;i<size1,i<size2;i++)
    {
        printf("%d\t",arr3[i]);
    }
        
    
    return;
}
