#include<stdio.h>
int main()
{
  int num_a,num,rev;
  printf("enter a no:");
  scanf("%d",&num);
  rev=0;
  while(num>0)
  {
    num_a=num%10;
    rev=(rev*10)+num_a;
    num=num/10;
  }
  printf("reverse is=%d",rev);
  return 0;
}



  
  
  
  

   

    
    
    
