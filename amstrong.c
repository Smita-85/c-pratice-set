#include<stdio.h>
int main()
{
    int sum=0,smi,n,s;
    printf("enter the no:");
    scanf("%d",&n);
    s=n;
    while(n>0) // the loop will break When n=0.// 15---1---0
    {
        smi=n%10;//Remainder///3.--5--1

        sum=sum+(smi*smi*smi);///27--125--1
        n=n/10; //Cosent...15.--1--0

    }
    printf("%d",n);//---n=0
    if(s==sum){
        printf("Armstrong Number");
    }
    else { 
        printf("Not Armstrong Number") ;
        }

    
return 0;
    

}