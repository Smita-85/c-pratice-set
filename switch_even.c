#include<stdio.h>
int main()
{
    int num;
    printf("enter a no:");
    scanf("%d",&num);
    switch(num%2==0)
    {
        case 0:printf("odd");
        break;
        case 1:printf("even");
        break;
    }
    return 0;
}
