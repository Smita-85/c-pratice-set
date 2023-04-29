/*function a1 assignment*/
#include<Stdio.h>
int add(int,int);
int sub(int,int);
int mul(int ,int);
int main()
{
    int n ;
     printf(" enter a for addition,s for substraction,m for multiplication:");
     scanf("%d",&n);
     if(n=='a')
     {
        add(n,n);
     }
     else if(n=='m')
     {
        mul(n,n);
     }
    else{
        sub(n,n);
    }

}
int add(int x,int y)
{
    int x=5;
    int y=5;
    return x+y;
}
int sub(int m ,int n)

{
    int m=5;
    int n=3;
    return m-n;

}

    

