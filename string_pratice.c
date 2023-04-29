/*uppercase letters in a string*/
#include<string.h>
#include<stdio.h>
int main()
{
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            printf("%c",str[i]);
            i++;
        }
    }
    return 0;
    
}
