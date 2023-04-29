/*array questions*/
#include<stdio.h>
int main()
{
    int arr[10],i,pos,n,x;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position for updation:");
    scanf("%d",&pos);
    printf("value present in that position:%d",arr[pos-1]);
    printf("updated value is:");
    scanf("%d",&x);
    x=arr[pos-1];
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
//storing in 3rd array content of two arrays
/*#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],arr3[10],n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        arr3[i]=arr1[i]*arr2[i];
    }
    printf("new array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr3[i]);
    }
    return 0;
}*/
//delete an element from an array
/*#include<stdio.h>
int main()
{
    int arr[100],n,i,pos;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter position for deletion:");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    n--;
    printf("deletion array:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}*/
//INSERTING AN ELEMENT INTO AN ARRAY
/*#include<stdio.h>
int main()
{
    int arr[100],i,n,pos,x;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position where you want to insert the element:");
    scanf("%d",&pos);
    printf("enter the element you want to insert:");
    scanf("%d",&x);
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i-1];
    }
    n++;
    arr[pos-1]=x;
    
    printf("insertion array:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}*/
//ARRAY QUESTIONS
   /*#include<stdio.h>
   int main() 
   {
    int arr[100],n,x,posn,i;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the item u want to insert:");
    scanf("%d",&x);
    printf("enter the position where u want to insert:");
    scanf("%d",&posn);
    for(i=n;i>=posn;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[posn]=x;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
   }*/
   #include<stdio.h>
   int main()
   {
    int arr[100],n,i,x,flag=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element u want to search:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]=x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("present");
    }
    else{
        printf("not present");
    }
    return 0;
   }

    

   