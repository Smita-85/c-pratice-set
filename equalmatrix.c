/*checking two matrix are equal or not*/
#include<stdio.h>
int main()
{
  int arr[10][10],num[10][10],i,j,rows,columns,equal=1;
  printf("enter rows of matrix:");
  scanf("%d",&rows);
  printf("enter columns of matrix:");
  scanf("%d",&columns);
  printf("enter  first matrix elements:");
  for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
    {
        scanf("%d",&arr[i][j]);
    }
  }
  printf("enter second matrix elements:");
  for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
    {
        scanf("%d",&num[i][j]);
    }
  }
  for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
    {
        if(arr[i][j]!=num[i][j])
        {
            equal=0;
            break;
        }

    }

  }
  if(equal==1)
  {
    printf("two matrix are equal");
  }
  else{
    printf("two matrix are not equal");
  }
  return 0;
  

  }


