#include<stdio.h>
int main()
{
    char ch;
    
     printf("enter the english letter: ");
     scanf("%c",&ch);

     if(ch>='A' && ch<='Z')
     printf("upper case alphabet");

     else if(ch>='a' && ch<='z')
     printf("lower case alphabet");

     else
     printf("not a alphabet letter!");

     return 0;
}