#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter first no:");
    scanf("%d",&num1);
    printf("enter second no:");
    scanf("%d",&num2);
    switch(num1>num2)
    {
        case 0:printf("num2 is maximum among two");
        break;
        case 1:printf("num1 is maximum among two");
        break;
        
    }
    return 0;
}