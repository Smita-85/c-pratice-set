#include<stdio.h>
//sum of 3 digit no and printing individuals again..!@
int main()
{
    int digi_1,digi_2,digi_3,sum,a;
    printf("enter 3 digit no:");
    scanf("%d",&a);
    printf(digi_1=a%10);
    printf(digi_2=a/10%10);
    printf(digi_3=a%100);
    sum=digi_1=digi_2+digi_3;
    printf("result is:%d",sum);
    return 0;
    
    
}