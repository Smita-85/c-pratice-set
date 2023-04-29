#include<stdio.h>
int  main()
{
    int  num_1,rev,a,b,c;
    printf("enter a no:");
    scanf("%d",&num_1);
    a=num_1%10;
    b=(num_1/10)%10;
    c=num_1/100;
    rev=(a*100)+(b*10)+c;
    if(num_1==rev)
    {
        printf("It is a pallindrome");

    }
    else
    {
        printf("not a pallindrome");
    }
    return 0;
}