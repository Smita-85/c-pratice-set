#include<stdio.h>
//employe id and salary:!!@@
int main()
{
    char id_;
   int salary,value;
   int hour;
   printf("enter employe's id:");
   scanf("%c",&id_);
   printf("no of working hours:");
   scanf("%d",&hour);
   printf("salary per hour:");
   scanf("%d",&salary);
   value=hour*salary;
   printf("employe id and salary is:%c,%d,id_,value");
   return 0;
}  

    
