#include<stdio.h>
int main()
{
    int num_1,num_2;
    char operator;
    printf("enter a no:");
    scanf("%d",&num_1);
    printf("enter a no:");
    scanf("%d",&num_2);
    printf("enter operator:");
    scanf(" %c",&operator);
    switch(operator)
    {
        case'+':
        printf("sum is:%d",num_1+num_2);
        break;
        case'-':
        printf("difference is:%d",num_1-num_2);
        break;
        case'*':
        printf("product is:%d",num_1*num_2);
        break;
        case'/':
        printf("quotient is:%d",num_1/num_2);
        break;
        default:
        printf("invalid operator");
    }
    return 0;
}

            
        
    

    
