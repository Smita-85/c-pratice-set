#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        // printf(" num:%d",i);
        
        if(i==8)
        {
            continue;
           
        }
        printf("%d\n",i);
        i++;        
       
    }
    return 0;
}