#include<stdio.h>
int main()
{
// print table of 2 

    int i;
    int n;
    
    printf("Enter the number: ");
    scanf("%d", &n);


    for(i=1; i<=10; i++)
    {
        printf("%d\n", n*i);
    }
}