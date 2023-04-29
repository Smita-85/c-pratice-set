#include<stdio.h>
int main()
{
    int month_num;
    printf("enter month no:");
    scanf("%d",&month_num);
    switch(month_num)
    {
        case 1:printf("31 days\n");
        break;
        case 2:printf("28 days\n");
        break;
        case 3:printf("31 days\n");
        break;
        default:printf("invalid");
    }
    return 0;

}