/*function pratice*/
#include<Stdio.h>
int even_odd(int);
int main()
{
   int n,s,m;
   printf("enter a no:");
   scanf("%d",&n);
   m=even_odd(n);
   if(m==1)
   {
    printf("even");
   }
   else{
    printf("odd");

   }
   return 0;
}
int even_odd(int n)
{
    if(n%2==0)
    {
        
        return 1;
    }
    else
    {
        
        return 0;
    }
}
