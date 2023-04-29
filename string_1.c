#include<stdio.h>
// conversion of angle degree to angle radian...!!


int main()
{
  float angle_deg,angle_rad;
  printf("enter the angle in degree:\n");
  scanf("%f",&angle_deg);
  angle_rad=(angle_deg)*(3.14/180);
  printf("angle in radian is:%f",angle_rad);
   return 0;
}