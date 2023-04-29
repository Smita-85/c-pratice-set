#include<stdio.h>
#include<math.h>
//distance between two points..!!@@
int main()
{ 
    int dis_1,dis_2,dis_3,dis_4;
    float result;
    printf("enter first no:");
    scanf("%d",&dis_1);
    printf("input dis_2:");
    scanf("%d",&dis_2);
    printf("input dis_3:");
    scanf("%d",&dis_3);
    printf("input dis_4:");
    scanf("%d",&dis_4);
    result=((dis_2-dis_1)*(dis_2-dis_1)+(dis_4-dis_3)*(dis_4-dis_3));
    printf("the distance between two points is:%f",sqrt (result));
    return 0;
}