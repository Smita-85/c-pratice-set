#include<stdio.h>
//write a function that prints namaste if user is indian and benjor if user is french..!!@@
void namaste();
void benjor();
int main()
{
    printf("enter i for indian and f for french:");
    char ch;
    scanf("%c",&ch);
    if(ch=='i')
    {
        printf("namaste");
    }
    else{
        printf("benjor");
    }
    return 0;
    
}
void namaste(){
    printf("namste");
}
void benjor(){
    printf("benjor");
}


