#include<stdio.h>
int main()
{
    int a,b,c,d,m,n,x1,x2;
    printf("enter the values:");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);
    if(a*d-c*b!=0)
    {
        x1=(m*d-b*n)/(a*d-c*b);
        x2=(n*a-m*c)/(a*d-c*b);
        printf("value of x1:%d\n",x1);
        printf("value of x2:%d",x2);
    }
    else{
        printf("value is zero");
    }
    return 0;
}
