#include<stdio.h>
int main()
{
    int a=10,b=20,value;
    value=(a<b)?a++:++b;
    printf("a=%d,b= %d,value= %d",a,b,value);
    return 0;
    
}