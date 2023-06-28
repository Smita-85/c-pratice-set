/*MATRXIX MULTIPLICATION*/
#include<stdio.h>
int main()
{
    int mat1[20][20],mat2[20][20],prod[30][30],m,n,o,p,k,i,j;
    printf("enter the size of first matrix:");
    scanf("%d%d",&m,&n);
    printf("enter the size of second matrix:");
    scanf("%d%d",&o,&p);
    printf("enter first matrix elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter second matrxi elements:");
    for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            prod[i][j]=0;
            for(k=0;k<n;k++)
            {
                prod[i][j]=prod[i][j]+(mat1[i][k]*mat2[k][j]);
            }
        }
    }
    printf("multiplication matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("%d\t",prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}