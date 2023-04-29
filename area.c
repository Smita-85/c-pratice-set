//calculate the area of circle,square and rectangle//
#include<stdio.h>
#include<math.h>

float squarearea(float side);
float rectanglearea(float a,float b);
float circlearea(float rad);
int main()
{
    float a=5.0;
    float b=10.0;
    
    
    
    rectanglearea(a,b);
    
    
    return 0;
}
float squarearea(float side)
{
    printf("area is:%f");
    return side*side;
}
float rectanglearea(float a,float b)
{
    printf("area is:%f");
 return a*b;
}
float circlearea(float rad)
{
    printf("area is:%f");
    return 3.12*rad*rad;
}

