#include<stdio.h>
//printing the numbers 0 to n where n is given by the user..!!@@
int main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}