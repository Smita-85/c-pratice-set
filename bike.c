
#include<stdio.h>
//wap swap 2 variables x and y  in the order of x to y and then y to z and z to x...!!@@
int main()
{
int x,y,z;
printf("enter the first variable:");
scanf("%d",&x);
printf("enter the second variable:");
scanf("%d",&y);
printf("enter the third variable:");
scanf("%d",&z);
//computation;
x=x+y+z;
y=x-y-z;
z=x-y-z;
x=x-y-z;
printf("the first variable:%d\n",x);
printf("the second variable:%d\n",y);
printf("the third variable:%d\n",z);
return 0;
}



  
 
