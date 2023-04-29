//7021947706
#include<stdio.h>
int main()
{
    int num,last_digit,t_digit;
    printf("enter a no:");
    scanf("%d",&num);
    last_digit=num%10;

    while(num>=10)
    {
        num=num/10;
    }
    printf("3rd digit=%d", num);

return 0;

}