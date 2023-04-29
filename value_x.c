#include<stdio.h>
int main()
{
    int  a,b,c,d,x;
    printf("enter the values:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c==d)
    {
        printf("error");
    }
    else{
        x=(a-b)/(c-d);
        printf("values of x:%d",x);
    }
    return 0;

    
    
}