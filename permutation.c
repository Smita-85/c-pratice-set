/*permutation of a no*/
#include<stdio.h>
int factorial(int);
int permutation(int,int);
//int combination(int,int);
int main()
{
    int n,r, input1=n;
    int p;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the value of r");
    scanf("%d",&r);
    p = permutation(n,r);
    printf("permutation of (%d,%d)=%d",n,r,p);
}
int factorial(int input1)
{
    int res = 1,i;
    
    for(i=1; i<=input1; i++)
        res = res * i;
    return res;
}
int permutation(int n,int r)
{

    int perm = factorial(n)/factorial(n-r);
    return perm;
}





