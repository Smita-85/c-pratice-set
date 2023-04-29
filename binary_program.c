/*converting decimal to binary number*/
/*#include<stdio.h>
int main()
{
    int i,n,arr[10];
    printf("enter the decimal value:");
    scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
        arr[i]=n%2;
        n=n/2;
    }
    n=i;
    printf("binary value:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[n-i-1]);
    }
    return 0;
}*/
#include<stdio.h>
       int main()
       {
        int arr[100],n,x,posn,i,y;
        printf("enter size of array:");
        scanf("%d",&n);
        printf("enter array elements:");
        for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        }
        printf("enter update element:");
        scanf("%d",&x);
        printf("enter position where you want to update element:");
        scanf("%d",&posn);
        y=arr[posn-1];
        arr[posn-1]=x;
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
        return 0;
       }