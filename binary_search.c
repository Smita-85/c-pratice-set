/*BINARY SEARCH*/
#include<stdio.h>
int main()
{
    int arr[30],size,i,j;
    int start;
    int end;
    int item;
    printf("enter the size of array:");
    scanf("%d",&size);
    start=0;
    end=size-1;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the item you want to search:");
    scanf("%d",&item);
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(item>arr[mid])
        {
            start=mid+1;
        }
        else if(item==arr[mid])
        {
            printf("element is present at %d posn",mid);
            break;
        }
        else if(item<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            printf("element not found");
        }
    }
    return 0;

    }

