//pallindrome or  not

   // printf("enter a no:");
   // scanf("%d",&num);
   // a=num%10;
   // b=(num/10)%10;
   // c=num/100;
    //reverse=(a*100)+(b*10)+c;
   // if(reverse==num)
   // {
   /*    printf("pallindrome");
    }
    else{
        printf("not a pallindrome");
    }
    //return 0;*/
    /*PALLINDROME IN LOOP*/
    #include<stdio.h>
    int main()
    {
        int a,num,reverse=0,c,original;
        original==num;
        printf("enter a no:");
        scanf("%d",&num);
        while(num>0)
        {
            a=num%10;
            reverse=(reverse*10)+a;
            num=num/10;
        }
        if(reverse==original)
        {
            printf("pallindrome");
        }
        else{
            printf("not a pallindrome");
        }
        return 0;


    }
    


