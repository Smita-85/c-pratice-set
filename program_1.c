#include<stdio.h>
//checking whether a no is positive , negative or zero..!!@@
int main()
{
    int math_1;
    printf("enter a no:\n");
    scanf("%d",&math_1);
    if(math_1>=0)
    {
      if (math_1==0)
      {
        printf("zero\n");
      }
      else
      {
        printf("PositiveNumber");
      }
    }
    else
    {
        printf("negative");
    }
    return 0;
}    
    

    
