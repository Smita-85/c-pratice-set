#include<stdio.h>
int main()
{
    int n,a,b,c,d,reverse;
    printf("enter a no:");
    scanf("%d",&n);
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=n/1000;
    reverse=(a*1000)+(b*100)+(c*10)+d;
    if(reverse==n)
    {
        printf("pallindome");

    }
    else{
        printf("not  a pallindrome");
    }
    return 0;


}

