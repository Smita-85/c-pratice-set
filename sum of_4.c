//the sum of first and last digit of a 4 digit no..
#include<stdio.h>
int main()
{
    int num_a,b,c;
    printf("enter the value:");
    scanf("%d",&num_a);
    b=num_a%10;
    c=(num_a/100)/10;
    printf("sum of 1st and last digit=%d",c+b);
    return 0;
    
}