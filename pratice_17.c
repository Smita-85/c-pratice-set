#include<stdio.h>
//keep taking no from the user until user enters an odd number..!!@@
int main()
{
    int n;
    do{
        printf("enter the first no:");
        scanf("%d",&n);
        printf("%d\n",n);
         if(n%2!=0)
         {
            break;
         }
    }while(1);
    printf("thank uhh");
    return 0;
     
    
     

}

