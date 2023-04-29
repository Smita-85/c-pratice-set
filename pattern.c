/*pattern*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i='A';i<='D';i++)
    {
        for(j=i;j<='D';j++)
        {
            printf(" ");
        }
        for(k='A';k<=i;k++)
        {
            printf(" %c",k );
        }
        printf("\n");
    }
    return 0;
}