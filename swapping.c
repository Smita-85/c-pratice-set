/*swap two numbers using function*/
#include<stdio.h>
int swap(int,int);
int main()
{
    int a1,a2;
    printf("enter two numbers:");
    scanf("%d%d",&a1,&a2);
    printf("values before swapping:%d%d",a1,a2);
  swap(a1,a2);
    printf("after swapping:%d%d",a2,a1);
    return 0;
}
int swap(int a1,int a2)
{

    a1=a1+a2;
    a2=a1-a2;
    a1=a1-a2;
    return a1,a2;
    
}


