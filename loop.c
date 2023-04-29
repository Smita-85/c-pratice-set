/*looping*/
#include<stdio.h>
int main()
{
    int num,i=0,sum=0,average;
    printf("enter numbers:");
    scanf("%d",&num);
    
     while(num>0)
     {
        i= num%10;
        sum=sum+i;
        num=num/10;
     }
     //average=sum/10;
     printf("average is:%d",sum);
     return 0;

}