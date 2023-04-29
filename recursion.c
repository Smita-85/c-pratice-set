/*reverse a no using recursion*/
#include<stdio.h>
int reverse(int);
int main()
{
    int  num,s;
    printf("enter a no:");
    scanf("%d",&num);
    s=reverse(num);
    printf("reverse is:%d",s);
    return 0;
}
int rev=0,rem;
int reverse(int num)
{
    
    if(num==0)
    {
        return 0;
    }
    else{
        
        rem=num%10;
        rev=rev*10+rem;
        reverse(num/10);
    }
    return rev;
}