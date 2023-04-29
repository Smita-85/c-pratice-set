#include<stdio.h>
//reverse of a table for a given no n..!!
int main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
       // printf("%d\n",n*i);
        if(n*i==36){
            continue;
        }
        printf("%d\n",n*i);
    
    }   
            
            

        
        
        
    
        
    
    return 0;
}