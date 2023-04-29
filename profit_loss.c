#include<stdio.h>
int main()
{
    int s_p,c_p;
    printf("enter the cost price:");
    scanf("%d",&c_p);
    printf("enter the selling price:");
    scanf("%d",&s_p);
    if(s_p>c_p)
    {
        printf("profit\n");
        printf("profit is:%d",s_p-c_p);

    }
    else{
        printf("loss");
        printf("loss is:%d",c_p-s_p);

    }
    return 0;
}