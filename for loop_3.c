#include<stdio.h>
//printing the sum of first n natural numbers given by the user using for loop..!!@@
int main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }printf("%d\n",sum);
    return 0;

}