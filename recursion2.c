/*factorial of a number using recursion*/
/*#include<stdio.h>
int fact(int);
int main()
{
    int num,s;
    printf("enter a no:");
    scanf("%d",&num);
    s=fact(num);
    printf("factorial of number%d:%d",num,s);
    return 0;
}
int fact(int num)
{
    int fact;
    if(num==0)
    {
        return 1;
    }
    
        int fa=fact(num-1);
        fact=fa*num;
    
    return fact;
        
    
}*/
/*#include<stdio.h>
int sum(int);
int main()
{
    int num,s;
    printf("enter a no:");
    scanf("%d",&num);
    s=sum(num);
    printf("sum is:%d",s);
    return 0;
}
int sum(int num)
{
    if(num==1)

    {
        return 1;
    }



    
    int sum2=sum(num-1);
    int star=sum2+num;
    
    return star;

}*/
/*fibonachi series using recursion*/
#include<stdio.h>
void sum(int[]);
int main()
{
    int arr[10];
    sum(arr);
    
}
void sum(int arr[])
{
  int i,max;
  printf("enter array elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    i=1;
  while(i<10)
  {
     if(max<arr[i])
     {
        max=arr[i];
        i++;
     }
  }
 printf("largest is:%d",max);
}


    
