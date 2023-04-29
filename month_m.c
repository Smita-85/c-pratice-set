/*conversion of days into years,months and days*/
#include<stdio.h>
int main()
{
    int n_days,y_,m_,d_;
    printf("enter the no of days:");
    scanf("%d",&n_days);
    y_=n_days/365;
    m_=n_days/30;
    d_=n_days-(m_*30);
    printf("days:month:year=%d\n%d\n%d",d_,m_,y_);
    return 0;

}