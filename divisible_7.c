#include<stdio.h>
int main()
{
    int num_1;
    printf("enter a no:");
    scanf("%d",&num_1);
    if(num_1%7==0)
    {
        printf("divisible by 7");
    }
    else
    {
        printf("not divisible by 7");
    }
    return 0;
}