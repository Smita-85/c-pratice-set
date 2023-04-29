/*subtracting two matrix*/
#include<stdio.h>
int main()
{
    int arr[5][5],i,j,sum=0,n,m;
    printf("enter no of rows of matrix:");
    scanf("%d",&n);
    printf("enter no of columns of matrix:");
    scanf("%d",&m);
    printf("enter matrix elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
    
    printf("row sum:%d\t",sum);
    sum=0;
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i][j];
        }
    
    printf("column sum:%d\t",sum);
    sum=0;
    }
    return 0;
}