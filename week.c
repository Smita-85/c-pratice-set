#include<stdio.h>
int main()
{
    int week_num;
    printf("enter week no:");
    scanf("%d",&week_num);
    switch(week_num)
    {
        case 1:printf("monday\n");
        break;
        case 2:printf("tuesday\n");
        break;
        case 3:printf("wednesday\n");
        break;
        case 4:printf("thursday\n");
        break;
        case 5:printf("friday\n");
        break;
        case 6:printf("saturday\n");
        break;
        case 7:printf("sunday\n");
        break;
        default:printf("invalid input ");

    }
    return 0;
}

    
   
    