/*fibonachi series*/
#include<stdio.h>
int main()
{
    int a1=0,a2=1,a3,range,x=0;
    printf("enter the range:");
    scanf("%d",&range);
    
    
    while(x<=range)
    {
        
       printf("%d",a1); 
          
        a3=a1+a2;
        a1=a2;//0 then 1
        a2=a3;
        x++;
    }
    return 0;
}
     
    



