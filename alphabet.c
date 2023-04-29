#include<stdio.h>
//average of item weight and no. of purchase..!!@@
int main()
{
  float item_1,item_2,purchase_c,purchase_d,average;
  printf("weight of item_1:");
  scanf("%f",&item_1);
  printf("no of purchase:");
  scanf("%f",&purchase_c);
  printf("weight of item_2:");
  scanf("%f",&item_2);
  printf("no of purchase:");
  scanf("%f",&purchase_d);
  average=(item_1*purchase_c)+(item_2*purchase_d)/purchase_c+purchase_d;
  printf("the average is:%f",average);
return 0;
} 

  
  
