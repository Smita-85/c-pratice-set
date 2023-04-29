#include<stdio.h>
//average of item weight and no of purchase
int main()
{
   float item_1,item_2,purchase_c,purchase_d;
   int result;
   printf("weight of item1:");
   scanf("%f",&item_1);
   printf("no of purchase:");
   scanf("%d",&purchase_c);
   printf("weight of item1:");
   scanf("%f",&item_2);
   printf("no of purchase:");
   scanf("%f",&purchase_d);
   result:(item_1*purchase_c)+(item_2*purchase_d)/purchase_c+purchase_d;
   printf("The average is:%d",result);
   return 0; 


}