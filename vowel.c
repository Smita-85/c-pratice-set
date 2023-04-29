#include<stdio.h>
//checking whether the alphabet is a vowel or consonant ..!!@@
int  main()
{
    char ch_m;
    int lower_case,upper_case;
    printf("enter the alphabet:");
    scanf("%c",&ch_m);
    lower_case=(ch_m=='a'||ch_m=='e'||ch_m=='i'||ch_m=='o'||ch_m=='u');
    upper_case=(ch_m=='A'||ch_m=='E'||ch_m=='I'||ch_m=='O'||ch_m=='U');
    if(lower_case||upper_case)
    {
        printf("It's a alphabet");
    }
    else{
        printf("It's a consonant");
    }
    return 0;
}        
    




