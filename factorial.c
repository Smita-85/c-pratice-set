//printing the factorial of n//
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++)

    {
        fact=fact*i;
    }
    printf("final factorial is:%d",fact);
    return 0;
    
}