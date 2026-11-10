#include<stdio.h>

void table(int n);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    table(n);    // ye batayega jo niche code likh raha hai vo run karega
}

void table(int n){

for(int i = 1; i<=10; i++)
    {
        printf("%d\n", n*i);   // chizo ko define 
    }

}



