/*multiplying two arrays*/
#include<stdio.h>
int main()
{
    int arr[10][10],num[10][10],mul[10][10],i,j,k,m,n,o,p,sum;
    printf("enter order of first matrix:");
    scanf("%d %d",&m,&n);
    printf("enter order of second matrix:");
    scanf("%d %d",&o,&p);
    if(n==o)
    {
        printf("enter first matrix elements\n");
        for(i=0;i<m;i++)
        {
          for(j=0;j<n;j++)
          {
            scanf("%d",&arr[i][j]);
          }
        }
    printf("enter elements of second matrix\n");
    for(i=0;i<o;i++)  
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    }
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    
    
    for(k=0;k<n;k++)
    {
    sum=sum+arr[i][k]*num[k][j];
    }
    mul[i][j]=sum;
    sum=0;
    }
    }
    

    
    printf("multiplication matrix\n");
    for(i=0;i<m;i++)  
    {
        for(j=0;j<k;j++)
        {
          printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
      return 0;
}
    
    

    
