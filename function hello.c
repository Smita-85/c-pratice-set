#include<stdio.h>
int rectangle(int lenght,int breadth);
int circle(int radius);
int square(int side);
int main()
{

    int radius;
    printf("enter radius:");
    scanf("%d",&radius);
    printf("area of circle is:%d",circle(radius));
    int side;
    printf("enter side:");
    scanf("%d",&side);
    printf("area of square is:%d",square(side));
    return 0;

}
int circle(int radius)
{
    return 3.14*radius*radius;
}
int square(int side)
{
    return side*side;
}