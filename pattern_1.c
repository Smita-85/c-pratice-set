/*pattern printing*/
/*#include<stdio.h>
int main()
{
    int arr[100],i,n;
    int *ptr;
    ptr=arr;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=n;i>=0;i--)
    {
       printf("%d",*(ptr+i));
    }
    return 0;
}*/
//ARRAY QUESTION PRATICE
/*#include<stdio.h>
#include<math.h>
int main()
{
    int arr[3][3],i,j,sum=0;
    float norm;
    printf("enter array elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+pow(arr[i][j],2);
        }
    }
    norm=sqrt(sum);
    printf("normal of a matrix is:%f",norm);
    return 0;
}*/
//ARRAY QUESTIONS
// ......IDENTITY MATRIX.......
/*#include<stdio.h>
int main()
{
    int arr[3][3],i,j,c=1;
    printf("enter matrix elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]!=1 && arr[j][i]!=0)
            {
               c=0;
               break;
            }
        }
    }
    if(c==1)
    {
        printf("identity matrix");
    }
    else{
        printf("not an identity matrix");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    printf("enter array elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("diagonal matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d\t",arr[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
int day_num;
char s;
printf("enter day number:");
scanf("%d",&day_num);
printf("user input:");
scanf("%c",&s);
return 0;
}
switch(s)
{
case-1:printf("monday");
       break;
case-2:printf("tuesday");
      break;
  default:return 9;
  break;

}*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
    
}

         













