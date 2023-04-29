/*sum of two matrix*/
#include<stdio.h>
int main()
{
    int mat1[3][3],mat2[3][3],sum[3][3],i,j;
    printf("enter first matrix elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("first matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("enter second matrix elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("second matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("sum matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}




