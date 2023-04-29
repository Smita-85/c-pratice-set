/*checking entred character is a alphabet or not*/
#include<stdio.h>
int main()
{
    char character;
    printf("enter a char:");
    scanf("%c",&character);
    if(character>='A' && character<='Z')
    {
        printf("it is a alphabet");
    }
    else if(character>='a'&& character<='z')
    {
        printf("it is a alphabet");
    }
    else
    {
        printf("not a alphabet");
    } 
    return 0;


    


}