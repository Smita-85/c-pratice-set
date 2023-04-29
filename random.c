#include<stdio.h>
//exit the loop..
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i==9)
        {
            break;
        }
        if(i==6)
        {
            continue;
        }
        printf("%d\n",i);
    }
    printf("end");
    return 0;
}