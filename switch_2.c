/*arthmetic operation based on users choice*/
#include<stdio.h>
int main()
{
    int num_1;
    
    printf("enter first number:");
    scanf("%d",&num_1);

    switch(num_1/10)
    {
        case 1:
        printf("one\t");
        break;
        case 2:
        printf("two\t ");
        break;
        case 3:
        printf("three\t");
        break;
        case 4:
        printf("four\t");
        break;
        case 5:
        printf("five\t");
        break;
        case 6:
        printf("six\t");
        break;
        case 7:
        printf("seven\t");
        break;
        case 8:
        printf("eight\t");
        break;
        case 9:
        printf("nine\t");
        break;
    }
/*switch((num_1/10)%10)
{
    case 1:
    printf("one");
    break;
    case 2:
    printf("two");
    break;
    case 3:
    printf("three");
    break;
    case 4:
    printf("four");
    break;
    case 5:
    printf("five");
    break;
    case 6:
    printf("six");
    break;
    case 7:
    printf("seven");
    break;
    case 8:
    printf("eight");
    break;
    case 9:
    printf("nine");
    break;

}*/
switch(num_1%10)
{
    case 1:
    printf("one");
    break;
    case 2:
    printf("two");
    break;
    case 3:
    printf("three");
    break;
    case 4:
    printf("four");
    break;
    case 5:
    printf("five");
    break;
    case 6:
    printf("six");
    break;
    case 7:
    printf("seven");
    break;
    case 8:
    printf("eight");
    break;
    case 9:
    printf("nine");
    break;

} 

return 0;
}



        
        
    
    
        

        
    

