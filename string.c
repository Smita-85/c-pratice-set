/*string  using c language*/
#include<Stdio.h>
/*int main()
{
    char str[100];
    printf("enter a string:");
    gets(str);
    int i=0;
     int word=1;
     while(str[i]!='\0')
     {
        if(str[i]==' '|| str[i]=='\n'|| str[i]=='\t')
        {
            word++;  
        }
        i++;
     }
     printf("total no of words in  a string :%d",word);
     return 0;

}*/
#include<stdio.h>
#include<String.h>
int main()
{
    int i,j,count=0;
    char arr[100],str[100];
    printf("enter a string:");
    scanf("%s",arr);
    for(i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    j=count-1;
    for(i=0;i<count;i++)
    {
        str[i]=arr[j];
        j--;
    }
    arr[i]='\0';
    printf("reversed string is:%s",str);
    return 0;
        
    
    
    
}