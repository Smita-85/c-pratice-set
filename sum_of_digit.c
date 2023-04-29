#include<stdio.h>
//printing sum of three digit number :).!!@@
int main(){
    int sum=0,n,m ;
    printf("enter the first variable:");
    scanf("%d",&n);
    while(n>0)
    {
        m= n%10;
        sum+=m;
        n=n/10;

    }
    printf("Sum of Digits:%d ",sum);
    return 0;
}