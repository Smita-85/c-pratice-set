/*sum of digits of a given number*/
#include<stdio.h>
int main()
{
    int num,sum,num_a;
    printf("enter a no:");
    scanf("%d",&num);
    sum=0;
    while(num>0)
    {
        num=num%10;//2
        sum=sum+num;//2
        num=num/10;
    }
    printf("sum is=%d",sum);
    return 0;
}