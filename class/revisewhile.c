#include<stdio.h>
int main()
{
    int n;
    printf("Enter number till to print: ");
    scanf("%d", &n);
    int i = 1;
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
}