#include<stdio.h>
//declaration prototype
void printhello();
void printgoodbye();
int main()
{
    printhello();//function cell
    printgoodbye();
    return 0;
}
//function definition
void printhello(){
    printf("hello world\n");
}
void printgoodbye(){
    printf("good bye\n");
}

