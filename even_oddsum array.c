/*even and odd numbers in a array*/
#include<stdio.h>
int  main()
{
    int arr[10],i,even_sum=0,odd_Sum=0,size;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements are\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even_sum=even_sum+arr[i];

        }
        else{
            odd_Sum=odd_Sum+arr[i];
        }
        

    }
    printf("\nsum of even numbers:%d\n",even_sum);
    printf("sum of odd numbers:%d",odd_Sum);
    return 0;

}