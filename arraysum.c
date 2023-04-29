/*printing the sum of an array*/
#include<stdio.h>
int main()
{
  int arr[2][2],num[2][2],i,j,sum[2][2];
  printf("enter first matrix:");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
        scanf("%d",&arr[i][j]);
    }
  }
  printf("enter second matrix:");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
        scanf("%d",&num[i][j]);
    }
  }
   printf("first matrix is\n");
   for(i=0;i<2;i++) 
   {
    for(j=0;j<2;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
   }
   printf("second matrix is\n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    {
      printf("%d\t",num[i][j]);
    }
    printf("\n");
   }
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    {
        sum[i][j]=arr[i][j]+num[i][j];
    }
   }
   printf("sum matrix is\n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    {
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
   }
   return 0;
   

  
}