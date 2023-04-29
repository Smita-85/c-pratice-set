#include<stdio.h>
//conversion of your height to feet and inch and then to cm...!!!!

int main()
{
 float height_f,height_i,height_cm;
 printf("enter height in feet: ");
 scanf("%f\n",&height_f);
 printf("enter height in inch: ");
 scanf("%f\n",&height_i);
 height_cm=(height_f*30.48)+(height_i*2.54);
 printf("height in cm is:%f",height_cm);

 
return 0;
}







