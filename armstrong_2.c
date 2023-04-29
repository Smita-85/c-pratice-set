/*checking a armstrong no or not*/
#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp,i;
    printf("enter a no:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;

    }
    printf("sum is:%d",sum);
    if(temp==sum)
    {
        printf("armstrong no");

    }
    else
    {
        printf("not a armstrong no");

    }
    return 0;
}