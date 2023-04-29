//RECURSION PRATICE
#include<stdio.h>
 struct student
 {
   char name[30] ;
   int roll;
   float avg;
 };
 int main()
 {
    struct student stu[100];
    int i,j;
    for(i=0;i<100;i++)
    {
        printf("enter name,roll-no,average mark:");
        gets(stu[i].name);
        scanf("%d",&stu[i].roll);
        scanf("%f",&stu[i].avg);
    }
    for(i=0;i<100;i++)
    {
        printf("Name:%s\nRoll-no:%d\nAverage mark:%f",stu[i].name,stu[i].roll,stu[i].avg);
    }
    return 0;
 }

    
        
        

    

     
 

 