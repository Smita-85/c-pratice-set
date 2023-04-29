/*function pratice*/
#include<stdio.h>
int Prime(int);
int main()
{
    int num,prime,y;
    printf("enter a no:");
    scanf("%d",&num);
    y= Prime (num);
    if(y==2)
    {
        printf("prime number");
    }
     else{
        printf("not a prime number");
     }
     return 0;
}
int Prime(int num)
{
    int i,k=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            k++;
        }

    }
    return k;
}

    


    
    
    
