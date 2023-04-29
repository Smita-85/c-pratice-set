/*entred character is a vowel or not*/
#include<stdio.h>
int swap(int,int);
int main()
{
    int a1,a2;
    printf("enter two values:");
    scanf("%d%d",&a1,&a2);
    printf("values before swapping:%d%d",a1,a2);
    swap(a1,a2);
    printf("values after swapping:%d%d",a2,a1);
    return 0;
    


}
int swap(int a1,int a2)
{
    int*p,*q;
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    return (*p,*q);
}







   