/*conversion of m,cm and mm by giving mm as input*/
#include<stdio.h>
int main()
{
    int length,m,cm,mm;
    printf("enter the length in mm:");
    scanf("%d",&length);
    m=length/1000;
    cm=length%1000/10;
    mm=length%1000%10;
    printf("m:%d,cm:%d,mm:%d",m,cm,mm);
    
    return 0;
}