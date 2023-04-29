#include<stdio.h>
int main()
{
    int num_2;
    printf("enter a no:");
    scanf("%d",&num_2);
    if(num_2%11==0 && num_2%13==0)
    {
        printf("divisible by both 11 and 13");
    }
    else{
        printf("not divisible by both");
    }
    return 0;
}