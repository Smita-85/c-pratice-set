/*sorting an array*/
/*#include<stdio.h>
int main()
{
    int arr[100],n,i,j,temp;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
}
printf("sorting array:");
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;

}*/
//SEARCH THE GIVEN ELEMENT IS PRESENT OR NOT
#include<stdio.h>
int main()
{
    int arr[100],n,i,flag=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int item;
    printf("enter element u want to search:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("given element is present");
    }
    else
    {
        printf("given element is not present");
    }
    return 0;

}  

