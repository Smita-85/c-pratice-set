/*display the product*/
#include<stdio.h>
int addition(int,int);
int subtraction(int,int);
int main()
{
    char ch;
    int m,n;
    printf("enter two numbers:");
    scanf("%d%d",&m,&n);
    printf("enter a for addition  b for subtraction:");
    scanf("%c",&ch);
    if(ch=='a')
    {
        addition(m,n);
    }
    else{
        subtraction(m,n);
    }
    return 0;
    
}
int addition(int m ,int n)
{
 return m+n;
}
int subtraction(int m,int n)
{
    return m-n;
}



    

