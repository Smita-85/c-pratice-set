/*reverse a string*/
#include<stdio.h>
void reverse(char arr[]);
int main()
{
    char arr[100];
    printf("enter a string:");
    gets(arr);
    reverse(arr);
    

    return 0;
}
void reverse(char arr[])
{
    int i;
    for(arr[i]!='\0';i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}