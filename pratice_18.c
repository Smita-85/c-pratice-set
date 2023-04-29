#include<stdio.h>
//keep taking no from the user until the no is a multiple of 7..!!
int main()
{
    int m;
    do
    {
        printf("enter the no:");
        scanf("%d",&m);
    
        if (m%7==0)
        {
         break;
        }
        
    }
    
    while(1);
    printf("thank uhh");
    return 0;

    
}