#include<stdio.h>
int main()
{
    int i,num ,sum=0,temp;
    printf("enter a no:");
    scanf("%d",&num);
    temp=num;
    for(i=1;i<num;i++)

{
        if(num%i==0)
        {
            sum =sum+i;
        }          
        i++;
        





}
    if(sum==temp)
    {
        printf("perfect no");
    }
    else{
        printf("not a perfect no");
    }
    return 0;
}

    
        
    