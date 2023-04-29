/*modifying a function*/
#include<stdio.h>
int star(int);
int main()
{
    int n,s;
    printf("enter a no:");
    scanf("%d",&n);
    s=star(n);
    printf("input after modifying :%d",s);
    return 0;
}
int star(int n)
{
    n=n*2;
    return n;
}



