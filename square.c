//calculate the square of a no. given by the user//
#include<stdio.h>
#include<math.h>
void calculatesquare(float value);
int main()
{
int n;
printf("enter a no:");
scanf("%d",&n);
printf("%f",pow(n,2));
return 0;
}

