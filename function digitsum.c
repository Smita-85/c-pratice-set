/*finding the sum of digits of a number using function*/
#include<stdio.h>
int printsum(int );
int main()
{
    int num,sum=0;
    printf("enter a no:");
    scanf("%d",&num);
    sum=printsum(num);
    printf("sum of digits is:%d",sum);
    return 0;

}
int printsum(int num)
{
    int sum=0,rem;
    while(num>0)
    {
         rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    return sum;
}





