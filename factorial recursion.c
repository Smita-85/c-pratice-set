/*recursion example*/
#include<stdio.h>

int factorial(int n);
int main()
{
    printf("factorial is:%d",factorial(5));
    return 0;
}
//recursion is calling itself no of times
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factn1=factorial(n-1);
    int factn=factn1*n;
    return factn;

}


