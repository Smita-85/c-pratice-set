/*addition of two numbers*/
#include<stdio.h>
int printsum(int ,int );
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("sum is:%d",printsum(a,b));
    return 0;
}
int printsum(int a ,int b)
{
    return a+b;
}


