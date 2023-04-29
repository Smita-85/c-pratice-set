/*printing grade by entering a students mark*/
#include<stdio.h>
int main()
{
    int mark;
    printf("enter marks:");
    scanf("%d",&mark);
    switch(mark/10)
    case 10:
    {
        printf("grade is:O,outstanding");
        break;
    case 9:
        printf("grade is:O,outstanding");
        break;
    case 8:
        printf("grade is:E,Excellent");
        break;
    case 7:
         printf("grade is:A,very good");
         break;
    case 6:
         printf("grade is:B,average");
         break;
    case 5:
          printf("grade is:C,bad");
          break;
    case 4:
          printf("grade is:D,bad");
          break;
    case 3:
          printf("just pass");
          break;
    case 2:
          printf("fail");
          break;      
    }
    return 0;
}                          


    
         
         
    
