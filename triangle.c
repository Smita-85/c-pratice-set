#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter three sides:");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2||side1==side3||side2==side3)
    {
        printf("isoceles triangle");
    }
    else if(side1==side2 && side2==side3)
    {
        printf("equilateral triangle");

    }
    else{
        printf("scalene triangle");
    }
    return 0;
    
    
    
    


    

    
}
