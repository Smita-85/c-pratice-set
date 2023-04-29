#include<stdio.h>
//printing the factorial of a number n..!@!@
int main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++)
   {
        fact=fact*i;
        if(fact==120)
        {
            printf("thank uhh\n");
            break;
        }
        
   }
    printf("the factorial is:%d\n",fact);
    if(fact==120)
    {
        printf("yeah\n");
    } 
    
    
    
    
    
     return 0;

    


}